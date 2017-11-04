#include "board.h"
Board::Board(BB ks[], BB qs[], BB rs[], BB bs[], BB ns[], BB ps[], Color c)
{
        for (int i = 0; i < 2; ++i) {
                k[i] = ks[i];
                q[i] = qs[i];
                r[i] = rs[i];
                b[i] = bs[i];
                n[i] = ns[i];
                p[i] = ps[i];
        }
        clr  = c;
        en_passant = 0;
}

Board::Board()
{
        k[0] = E1, k[1] = E8;
        q[0] = D1, q[1] = D8;
        r[0] = A1|A8, r[1] = H1|H8;
        b[0] = C1|F1, b[1] = C8|F8;
        n[0] = B1|G1, n[1] = B8|G8;
        n[0] = Rank(1), n[1] = Rank(6);       
        clr = WHITE;
        en_passant = 0;
}

BB    Board::get_kingBB  (Color c) { return k[c]; }
BB    Board::get_queenBB (Color c) { return q[c]; }
BB    Board::get_rookBB  (Color c) { return r[c]; }
BB    Board::get_bishopBB(Color c) { return b[c]; }
BB    Board::get_knightBB(Color c) { return n[c]; }
BB    Board::get_pawnBB  (Color c) { return p[c]; }
Color Board::get_color()           { return clr;  }

void  Board::set_kingBB  (BB ks, Color c) { k[c] = ks; }
void  Board::set_queenBB (BB qs, Color c) { q[c] = qs; }
void  Board::set_rookBB  (BB rs, Color c) { r[c] = rs; }
void  Board::set_bishopBB(BB bs, Color c) { b[c] = bs; }
void  Board::set_knightBB(BB ns, Color c) { n[c] = ns; }
void  Board::set_pawnBB  (BB ps, Color c) { p[c] = ps; }
void  Board::set_color   (Color c)        { clr  = c;  }
