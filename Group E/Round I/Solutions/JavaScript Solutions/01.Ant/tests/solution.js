
const expect = require('chai').expect;
const calcDistance = require('../ant').calcDistance;
const calcDistance2 = require('../ant_2').calcDistance2;

function test(func) {
    describe('Testing Solution', () => {
        it('Test #0', () => {
            expect(func(5)).to.be.equal(30);
        });

        it('Test #1', () => {
            expect(func(15)).to.be.equal(240);
        });

        it('Test #2', () => {
            expect(func(27)).to.be.equal(756);
        });

        it('Test #3', () => {
            expect(func(112)).to.be.equal(12656);
        });

        it('Test #4', () => {
            expect(func(117)).to.be.equal(13806);
        });

        it('Test #5', () => {
            expect(func(118)).to.be.equal(14042);
        });

        it('Test #6', () => {
            expect(func(122)).to.be.equal(15006);
        });

        it('Test #7', () => {
            expect(func(129)).to.be.equal(16770);
        });

        it('Test #8', () => {
            expect(func(235)).to.be.equal(55460);
        });

        it('Test #9', () => {
            expect(func(238)).to.be.equal(56882);
        });

        it('Test #10', () => {
            expect(func(249)).to.be.equal(62250);
        });
    })
}

test(calcDistance);
test(calcDistance2);

