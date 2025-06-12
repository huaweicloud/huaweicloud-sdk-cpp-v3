
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateIntentAndQuestionResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateIntentAndQuestionResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/KnowledgeQuestionInfo.h>
#include <vector>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeIntentRsp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateIntentAndQuestionResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateIntentAndQuestionResponse();
    virtual ~CreateIntentAndQuestionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIntentAndQuestionResponse members

    /// <summary>
    /// 意图ID。
    /// </summary>

    std::string getIntentId() const;
    bool intentIdIsSet() const;
    void unsetintentId();
    void setIntentId(const std::string& value);

    /// <summary>
    /// 意图标识。
    /// </summary>

    std::string getIdentify() const;
    bool identifyIsSet() const;
    void unsetidentify();
    void setIdentify(const std::string& value);

    /// <summary>
    /// 问法列表
    /// </summary>

    std::vector<KnowledgeQuestionInfo>& getQuestionList();
    bool questionListIsSet() const;
    void unsetquestionList();
    void setQuestionList(const std::vector<KnowledgeQuestionInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string intentId_;
    bool intentIdIsSet_;
    std::string identify_;
    bool identifyIsSet_;
    std::vector<KnowledgeQuestionInfo> questionList_;
    bool questionListIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateIntentAndQuestionResponse_H_
