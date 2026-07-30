
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RuntimeConfigResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RuntimeConfigResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerTaskLimit.h>
#include <huaweicloud/modelarts/v1/model/ServiceInvokeResponse.h>
#include <huaweicloud/modelarts/v1/model/ServiceSecretResponse.h>
#include <huaweicloud/modelarts/v1/model/ServiceLimitResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 服务运行配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RuntimeConfigResponse
    : public ModelBase
{
public:
    RuntimeConfigResponse();
    virtual ~RuntimeConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuntimeConfigResponse members

    /// <summary>
    /// 
    /// </summary>

    ServiceInvokeResponse getServiceInvoke() const;
    bool serviceInvokeIsSet() const;
    void unsetserviceInvoke();
    void setServiceInvoke(const ServiceInvokeResponse& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceLimitResponse getServiceLimit() const;
    bool serviceLimitIsSet() const;
    void unsetserviceLimit();
    void setServiceLimit(const ServiceLimitResponse& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceSecretResponse getServiceSecret() const;
    bool serviceSecretIsSet() const;
    void unsetserviceSecret();
    void setServiceSecret(const ServiceSecretResponse& value);

    /// <summary>
    /// 
    /// </summary>

    ServerTaskLimit getServerTaskLimit() const;
    bool serverTaskLimitIsSet() const;
    void unsetserverTaskLimit();
    void setServerTaskLimit(const ServerTaskLimit& value);


protected:
    ServiceInvokeResponse serviceInvoke_;
    bool serviceInvokeIsSet_;
    ServiceLimitResponse serviceLimit_;
    bool serviceLimitIsSet_;
    ServiceSecretResponse serviceSecret_;
    bool serviceSecretIsSet_;
    ServerTaskLimit serverTaskLimit_;
    bool serverTaskLimitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RuntimeConfigResponse_H_
