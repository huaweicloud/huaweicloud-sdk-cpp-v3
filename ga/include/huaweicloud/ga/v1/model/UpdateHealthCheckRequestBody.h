
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateHealthCheckRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateHealthCheckRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateHealthCheckOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// update Health Check request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateHealthCheckRequestBody
    : public ModelBase
{
public:
    UpdateHealthCheckRequestBody();
    virtual ~UpdateHealthCheckRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHealthCheckRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateHealthCheckOption getHealthCheck() const;
    bool healthCheckIsSet() const;
    void unsethealthCheck();
    void setHealthCheck(const UpdateHealthCheckOption& value);


protected:
    UpdateHealthCheckOption healthCheck_;
    bool healthCheckIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateHealthCheckRequestBody_H_
