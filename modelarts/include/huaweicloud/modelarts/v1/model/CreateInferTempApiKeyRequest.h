
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferTempApiKeyRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferTempApiKeyRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/CreateTempApiKeyReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferTempApiKeyRequest
    : public ModelBase
{
public:
    CreateInferTempApiKeyRequest();
    virtual ~CreateInferTempApiKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferTempApiKeyRequest members

    /// <summary>
    /// **参数解释：** 消息体的类型（格式）。 **约束限制：** 不涉及。 **取值范围：** - application/json。 - application/json;charset&#x3D;utf-8。 **默认取值：** 不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTempApiKeyReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTempApiKeyReq& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    CreateTempApiKeyReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateInferTempApiKeyRequest& dereference_from_shared_ptr(std::shared_ptr<CreateInferTempApiKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferTempApiKeyRequest_H_
