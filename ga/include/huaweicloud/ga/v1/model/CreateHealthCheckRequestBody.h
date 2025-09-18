
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateHealthCheckOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// create Health Check request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateHealthCheckRequestBody
    : public ModelBase
{
public:
    CreateHealthCheckRequestBody();
    virtual ~CreateHealthCheckRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHealthCheckRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateHealthCheckOption getHealthCheck() const;
    bool healthCheckIsSet() const;
    void unsethealthCheck();
    void setHealthCheck(const CreateHealthCheckOption& value);


protected:
    CreateHealthCheckOption healthCheck_;
    bool healthCheckIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckRequestBody_H_
