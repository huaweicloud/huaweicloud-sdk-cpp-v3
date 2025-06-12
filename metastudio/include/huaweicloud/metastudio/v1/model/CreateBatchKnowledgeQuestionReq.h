
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateBatchKnowledgeQuestionReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateBatchKnowledgeQuestionReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/KnowledgeQuestionCreateInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量创建知识库问法请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateBatchKnowledgeQuestionReq
    : public ModelBase
{
public:
    CreateBatchKnowledgeQuestionReq();
    virtual ~CreateBatchKnowledgeQuestionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBatchKnowledgeQuestionReq members

    /// <summary>
    /// 意图ID。
    /// </summary>

    std::string getIntentId() const;
    bool intentIdIsSet() const;
    void unsetintentId();
    void setIntentId(const std::string& value);

    /// <summary>
    /// 问法列表
    /// </summary>

    std::vector<KnowledgeQuestionCreateInfo>& getQuestionList();
    bool questionListIsSet() const;
    void unsetquestionList();
    void setQuestionList(const std::vector<KnowledgeQuestionCreateInfo>& value);


protected:
    std::string intentId_;
    bool intentIdIsSet_;
    std::vector<KnowledgeQuestionCreateInfo> questionList_;
    bool questionListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateBatchKnowledgeQuestionReq_H_
