CREATE TABLE personalcrm (
  name TEXT,
  birthday DATE,
  location TEXT,
  note TEXT
);

INSERT INTO personalcrm (name, birthday, location, note)
VALUES ('Rohan', '2004-12-12', 'Hisar', 'Happy Birthday to you');

INSERT INTO personalcrm (name, birthday, location, note)
VALUES ('Aryan', '2004-11-12', 'Agra', 'Happy Birthday to you');

INSERT INTO personalcrm (name, birthday, location, note)
VALUES ('Lucky', '2011-12-12', 'Bastar', 'Happy Birthday to you');

SELECT *
FROM personalcrm;
