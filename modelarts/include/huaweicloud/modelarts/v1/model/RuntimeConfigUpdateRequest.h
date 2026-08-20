
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RuntimeConfigUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RuntimeConfigUpdateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServiceLimit.h>
#include <huaweicloud/modelarts/v1/model/ServerTaskLimit.h>
#include <huaweicloud/modelarts/v1/model/ServiceInvokeUpdateRequest.h>
#include <huaweicloud/modelarts/v1/model/ServiceSecret.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 服务运行配置。  **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RuntimeConfigUpdateRequest
    : public ModelBase
{
public:
    RuntimeConfigUpdateRequest();
    virtual ~RuntimeConfigUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuntimeConfigUpdateRequest members

    /// <summary>
    /// 
    /// </summary>

    ServiceInvokeUpdateRequest getServiceInvoke() const;
    bool serviceInvokeIsSet() const;
    void unsetserviceInvoke();
    void setServiceInvoke(const ServiceInvokeUpdateRequest& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceLimit getServiceLimit() const;
    bool serviceLimitIsSet() const;
    void unsetserviceLimit();
    void setServiceLimit(const ServiceLimit& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceSecret getServiceSecret() const;
    bool serviceSecretIsSet() const;
    void unsetserviceSecret();
    void setServiceSecret(const ServiceSecret& value);

    /// <summary>
    /// 
    /// </summary>

    ServerTaskLimit getServerTaskLimit() const;
    bool serverTaskLimitIsSet() const;
    void unsetserverTaskLimit();
    void setServerTaskLimit(const ServerTaskLimit& value);


protected:
    ServiceInvokeUpdateRequest serviceInvoke_;
    bool serviceInvokeIsSet_;
    ServiceLimit serviceLimit_;
    bool serviceLimitIsSet_;
    ServiceSecret serviceSecret_;
    bool serviceSecretIsSet_;
    ServerTaskLimit serverTaskLimit_;
    bool serverTaskLimitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RuntimeConfigUpdateRequest_H_
