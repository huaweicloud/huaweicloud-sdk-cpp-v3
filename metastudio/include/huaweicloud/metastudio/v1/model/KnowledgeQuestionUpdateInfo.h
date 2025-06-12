
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionUpdateInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionUpdateInfo_H_


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
/// 修改知识库问法请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  KnowledgeQuestionUpdateInfo
    : public ModelBase
{
public:
    KnowledgeQuestionUpdateInfo();
    virtual ~KnowledgeQuestionUpdateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KnowledgeQuestionUpdateInfo members

    /// <summary>
    /// 问法ID。
    /// </summary>

    std::string getQuestionId() const;
    bool questionIdIsSet() const;
    void unsetquestionId();
    void setQuestionId(const std::string& value);

    /// <summary>
    /// 问法。
    /// </summary>

    std::string getQuestion() const;
    bool questionIsSet() const;
    void unsetquestion();
    void setQuestion(const std::string& value);


protected:
    std::string questionId_;
    bool questionIdIsSet_;
    std::string question_;
    bool questionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionUpdateInfo_H_
