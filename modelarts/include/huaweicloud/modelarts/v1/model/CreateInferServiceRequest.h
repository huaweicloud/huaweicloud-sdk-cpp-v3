
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferServiceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferServiceRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ServiceCreateRequest.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferServiceRequest
    : public ModelBase
{
public:
    CreateInferServiceRequest();
    virtual ~CreateInferServiceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferServiceRequest members

    /// <summary>
    /// **参数解释：** 消息体的类型（格式）。 **约束限制：** 不涉及。 **取值范围：** - application/json。 - application/json;charset&#x3D;utf-8。 **默认取值：** 不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务提供者的domain级或project级Token，创建服务携带该请求头时，系统将解析该token并将账号id保存为服务的提供者即provider，该服务将被系统保护，仅携带该提供者的domain级或project级Token的更新操作允许执行。[通过调用IAM服务获取用户Token接口获取响应消息头中X-Subject-Token的值。](tag:hws,hws_hk)获取方法请参见[[获取IAM用户Token（使用密码）](modelarts_03_0004.xml)](tag:hws,hws_hk)[[获取Token](modelarts_03_0015.xml)](tag:hcs,hcs_sm)。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getXAuthTokenProvider() const;
    bool xAuthTokenProviderIsSet() const;
    void unsetxAuthTokenProvider();
    void setXAuthTokenProvider(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceCreateRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ServiceCreateRequest& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string xAuthTokenProvider_;
    bool xAuthTokenProviderIsSet_;
    ServiceCreateRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateInferServiceRequest& dereference_from_shared_ptr(std::shared_ptr<CreateInferServiceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferServiceRequest_H_
