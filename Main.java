class Main {
  public static void main(String[] args) {
     System.load("/Users/stefan/git/jni-test/Main.dylib");
    byte[] buf = new byte[1024];
    crypt(buf);
  }

  private static native void crypt(byte[] buf);
}