
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RunMultiModalAssessmentResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RunMultiModalAssessmentResponse_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/Fluency.h>
#include <huaweicloud/sis/v1/model/Word.h>
#include <huaweicloud/sis/v1/model/Pronunciation.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  RunMultiModalAssessmentResponse
    : public ModelBase, public HttpResponse
{
public:
    RunMultiModalAssessmentResponse();
    virtual ~RunMultiModalAssessmentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunMultiModalAssessmentResponse members

    /// <summary>
    /// 综合评分，0-100
    /// </summary>

    float getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(float value);

    /// <summary>
    /// 完整性评分，0-100 表示有多少比例的单词发音是清楚的
    /// </summary>

    float getCompleteness() const;
    bool completenessIsSet() const;
    void unsetcompleteness();
    void setCompleteness(float value);

    /// <summary>
    /// 音频/视频时长，单位秒
    /// </summary>

    float getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(float value);

    /// <summary>
    /// 
    /// </summary>

    Pronunciation getPronunciation() const;
    bool pronunciationIsSet() const;
    void unsetpronunciation();
    void setPronunciation(const Pronunciation& value);

    /// <summary>
    /// 
    /// </summary>

    Fluency getFluency() const;
    bool fluencyIsSet() const;
    void unsetfluency();
    void setFluency(const Fluency& value);

    /// <summary>
    /// 单词评测打分表
    /// </summary>

    std::vector<Word>& getWords();
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::vector<Word>& value);

    /// <summary>
    /// 评测失败时定位问题使用的字段
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);


protected:
    float score_;
    bool scoreIsSet_;
    float completeness_;
    bool completenessIsSet_;
    float duration_;
    bool durationIsSet_;
    Pronunciation pronunciation_;
    bool pronunciationIsSet_;
    Fluency fluency_;
    bool fluencyIsSet_;
    std::vector<Word> words_;
    bool wordsIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RunMultiModalAssessmentResponse_H_
