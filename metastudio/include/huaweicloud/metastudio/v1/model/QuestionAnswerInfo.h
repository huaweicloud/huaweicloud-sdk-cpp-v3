
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_QuestionAnswerInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_QuestionAnswerInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 问答对信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  QuestionAnswerInfo
    : public ModelBase
{
public:
    QuestionAnswerInfo();
    virtual ~QuestionAnswerInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuestionAnswerInfo members

    /// <summary>
    /// 问答对ID。
    /// </summary>

    std::string getQuestionAnswerId() const;
    bool questionAnswerIdIsSet() const;
    void unsetquestionAnswerId();
    void setQuestionAnswerId(const std::string& value);

    /// <summary>
    /// 标准问题。
    /// </summary>

    std::string getQuestion() const;
    bool questionIsSet() const;
    void unsetquestion();
    void setQuestion(const std::string& value);

    /// <summary>
    /// 问题答案。
    /// </summary>

    std::string getAnswer() const;
    bool answerIsSet() const;
    void unsetanswer();
    void setAnswer(const std::string& value);

    /// <summary>
    /// 所有相似问题，多个相似问题间用换行符\\n分隔。
    /// </summary>

    std::string getSimilarQuestions() const;
    bool similarQuestionsIsSet() const;
    void unsetsimilarQuestions();
    void setSimilarQuestions(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string questionAnswerId_;
    bool questionAnswerIdIsSet_;
    std::string question_;
    bool questionIsSet_;
    std::string answer_;
    bool answerIsSet_;
    std::string similarQuestions_;
    bool similarQuestionsIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_QuestionAnswerInfo_H_
