
/**
 * Write a description of class Musiksammlung here.
 * 
 * @author Simon
 * @version 0.1
 */

import java.util.ArrayList;

public class Musiksammlung {
    // instance variables - replace the example below with your own
    private ArrayList<String> tracks;

    /**
     * Constructor for objects of class Musiksammlung
     */
    public Musiksammlung()  {
        tracks = new ArrayList<String>();
    }
    
    public void addTrack(String newtrack) {
        tracks.add(newtrack);
    }
    
    public void deleteTrack(int index) {
        tracks.remove(index);
    }
    
    public String getTrack(int index) {
        return tracks.get(index);
    }
    
    public int countTracks() {
        return tracks.size();
    }
    
    public void printAllTracks() {
        for (String track : tracks) {
            System.out.println(track);
        }
    }
    
    public void getSpecificTrack(String search) {
    	int count = 0;
        for (String track : tracks) {
        	if (track.contains(search)) {
            	System.out.println(track);
                count++;
            }
        }
        if (count<1) {
        	System.out.println("Sorry, no track found");
        }
    }
}