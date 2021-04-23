// https://github.com/rust-lang/rust-bindgen/issues/2036

template<typename T>
struct Foo {};
template<typename T>
Foo<T> foo{};

void f() {
  struct Bar {
    Bar() {}
  };
  foo<Bar>;
}

