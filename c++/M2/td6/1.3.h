using uint64 = unsigned long long;

class Uint2048 {
 public:
  Uint2048();
  Uint2048(int x);

  bool operator<(const Uint2048& other) const;
  Uint2048 operator+(const Uint2048& other) const;

  void Print() const;

 private:
  uint64 u_[32];
};
