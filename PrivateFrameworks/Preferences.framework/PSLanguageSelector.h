/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLanguageSelector : NSObject {
    NSString *_language;
    NSArray *_languagesWithLocaleData;
    NSArray *_otherLanguages;
}

+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;
+ (id)sharedInstance;
+ (void)updatePreferredLanguages:(id)arg1;
+ (void)updateShouldShowPreferredLanguages:(BOOL)arg1;

- (void)dealloc;
- (id)defaultOtherLanguages;
- (id)deviceLanguageIdentifier;
- (BOOL)languageIsSupportedLanguage:(id)arg1;
- (id)languagesWithAvailableLocaleIdentifiers;
- (id)preferredLanguages;
- (id)renderableLanguagesFromList:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLanguage:(id)arg1 fallback:(id)arg2;
- (BOOL)shouldShowPreferredLanguages;
- (id)supportedLanguages;
- (id)systemLanguages;
- (id)userDeviceLanguageOrder;

@end
