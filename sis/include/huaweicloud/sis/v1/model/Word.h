
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_Word_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_Word_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/Phoneme.h>
#include <string>
#include <huaweicloud/sis/v1/model/WordPronunciation.h>
#include <huaweicloud/sis/v1/model/WordFluency.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单个单词的发音评测结果
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  Word
    : public ModelBase
{
public:
    Word();
    virtual ~Word();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Word members

    /// <summary>
    /// 去除了所有标点符号后的原始文本 前端调用接口后推荐使用“​text​”来在UI 中展示结果
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 接口接收的原始文本
    /// </summary>

    std::string getTextOriginal() const;
    bool textOriginalIsSet() const;
    void unsettextOriginal();
    void setTextOriginal(const std::string& value);

    /// <summary>
    /// 原始文本规范化后切分成的单词 如175 会 规范为 [\&quot;one\&quot;, \&quot;\&quot;hundred\&quot;, \&quot;and\&quot;, \&quot;seventy\&quot;, \&quot;five\&quot;]
    /// </summary>

    std::vector<std::string>& getTextNormalised();
    bool textNormalisedIsSet() const;
    void unsettextNormalised();
    void setTextNormalised(const std::vector<std::string>& value);

    /// <summary>
    /// 是否命中模型发音字典 如果未命中，则表明会根据发音规律推测正确发音
    /// </summary>

    bool isOutOfVocabulary() const;
    bool outOfVocabularyIsSet() const;
    void unsetoutOfVocabulary();
    void setOutOfVocabulary(bool value);

    /// <summary>
    /// 起始时间
    /// </summary>

    float getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(float value);

    /// <summary>
    /// 结束时间
    /// </summary>

    float getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(float value);

    /// <summary>
    /// 综合评分
    /// </summary>

    float getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(float value);

    /// <summary>
    /// 
    /// </summary>

    WordPronunciation getPronunciation() const;
    bool pronunciationIsSet() const;
    void unsetpronunciation();
    void setPronunciation(const WordPronunciation& value);

    /// <summary>
    /// 
    /// </summary>

    WordFluency getFluency() const;
    bool fluencyIsSet() const;
    void unsetfluency();
    void setFluency(const WordFluency& value);

    /// <summary>
    /// 音节打分表
    /// </summary>

    std::vector<Phoneme>& getPhonemes();
    bool phonemesIsSet() const;
    void unsetphonemes();
    void setPhonemes(const std::vector<Phoneme>& value);


protected:
    std::string text_;
    bool textIsSet_;
    std::string textOriginal_;
    bool textOriginalIsSet_;
    std::vector<std::string> textNormalised_;
    bool textNormalisedIsSet_;
    bool outOfVocabulary_;
    bool outOfVocabularyIsSet_;
    float startTime_;
    bool startTimeIsSet_;
    float endTime_;
    bool endTimeIsSet_;
    float score_;
    bool scoreIsSet_;
    WordPronunciation pronunciation_;
    bool pronunciationIsSet_;
    WordFluency fluency_;
    bool fluencyIsSet_;
    std::vector<Phoneme> phonemes_;
    bool phonemesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_Word_H_
