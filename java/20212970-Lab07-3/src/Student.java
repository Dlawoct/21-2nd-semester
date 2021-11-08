public class Student {

	private String name;
    private int score;

    public Student(String name, int score)
    {
    	this.name = name;
    	this.score = score;
    }

	public String getNames() {
		return name;
	}

	public void setNames(String name) {
		this.name = name;
	}

	public int getScores() {
		return score;
	}

	public void setScores(int score) {
		this.score = score;
	}
}
