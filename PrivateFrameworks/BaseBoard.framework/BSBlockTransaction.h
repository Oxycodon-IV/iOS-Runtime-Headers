/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBlockTransaction : BSTransaction {
    id /* block */  _block;
    NSString * _debugName;
}

@property (nonatomic, copy) NSString *debugName;

- (void)_begin;
- (bool)_canBeInterrupted;
- (id)_descriptionProem;
- (id)_graphNodeDebugName;
- (void)dealloc;
- (id)debugName;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setDebugName:(id)arg1;

@end