class Pixel {
 public:
  Pixel();
  Pixel(int x, int y, int color);

  const int GetX() const;
  const int GetY() const;
  const int GetColor() const;

  const void SetX(const int x);
  const void SetY(const int y);

 private:
  int x_;
  int y_;
  const int color_;
};

/*
const à la fin d'une fonction considère les attributs de la classe comme const, la fonction marchera ainsi sur les objets const.

const au début d'une fonction ne sert à rien

const pour les attributs de types basiques d'un constructeur inutile

Sur un objet const on peut appliquer que des fonctions const.
