
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateBatchKnowledgeQuestionReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateBatchKnowledgeQuestionReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/KnowledgeQuestionUpdateInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量修改知识库问法请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateBatchKnowledgeQuestionReq
    : public ModelBase
{
public:
    UpdateBatchKnowledgeQuestionReq();
    virtual ~UpdateBatchKnowledgeQuestionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBatchKnowledgeQuestionReq members

    /// <summary>
    /// 问法列表
    /// </summary>

    std::vector<KnowledgeQuestionUpdateInfo>& getQuestionList();
    bool questionListIsSet() const;
    void unsetquestionList();
    void setQuestionList(const std::vector<KnowledgeQuestionUpdateInfo>& value);


protected:
    std::vector<KnowledgeQuestionUpdateInfo> questionList_;
    bool questionListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateBatchKnowledgeQuestionReq_H_
