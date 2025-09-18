
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/HealthCheckDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateHealthCheckResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateHealthCheckResponse();
    virtual ~CreateHealthCheckResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHealthCheckResponse members

    /// <summary>
    /// 
    /// </summary>

    HealthCheckDetail getHealthCheck() const;
    bool healthCheckIsSet() const;
    void unsethealthCheck();
    void setHealthCheck(const HealthCheckDetail& value);

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    HealthCheckDetail healthCheck_;
    bool healthCheckIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckResponse_H_
