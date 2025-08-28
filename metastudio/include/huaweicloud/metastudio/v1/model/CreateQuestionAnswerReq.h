
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateQuestionAnswerReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateQuestionAnswerReq_H_


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
/// 创建问答对请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateQuestionAnswerReq
    : public ModelBase
{
public:
    CreateQuestionAnswerReq();
    virtual ~CreateQuestionAnswerReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateQuestionAnswerReq members

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
    /// 知识库ID。
    /// </summary>

    std::string getKnowledgeLibraryId() const;
    bool knowledgeLibraryIdIsSet() const;
    void unsetknowledgeLibraryId();
    void setKnowledgeLibraryId(const std::string& value);

    /// <summary>
    /// 所有相似问题，多个相似问题间用换行符\\n分隔。
    /// </summary>

    std::string getSimilarQuestions() const;
    bool similarQuestionsIsSet() const;
    void unsetsimilarQuestions();
    void setSimilarQuestions(const std::string& value);


protected:
    std::string question_;
    bool questionIsSet_;
    std::string answer_;
    bool answerIsSet_;
    std::string knowledgeLibraryId_;
    bool knowledgeLibraryIdIsSet_;
    std::string similarQuestions_;
    bool similarQuestionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateQuestionAnswerReq_H_
