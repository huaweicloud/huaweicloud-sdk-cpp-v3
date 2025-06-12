
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionCreateInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionCreateInfo_H_


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
/// 创建知识库问法请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  KnowledgeQuestionCreateInfo
    : public ModelBase
{
public:
    KnowledgeQuestionCreateInfo();
    virtual ~KnowledgeQuestionCreateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KnowledgeQuestionCreateInfo members

    /// <summary>
    /// 问法。
    /// </summary>

    std::string getQuestion() const;
    bool questionIsSet() const;
    void unsetquestion();
    void setQuestion(const std::string& value);


protected:
    std::string question_;
    bool questionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionCreateInfo_H_
