
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateHealthCheckRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateHealthCheckRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateHealthCheckRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateHealthCheckRequest
    : public ModelBase
{
public:
    UpdateHealthCheckRequest();
    virtual ~UpdateHealthCheckRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHealthCheckRequest members

    /// <summary>
    /// 健康检查ID。
    /// </summary>

    std::string getHealthCheckId() const;
    bool healthCheckIdIsSet() const;
    void unsethealthCheckId();
    void setHealthCheckId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateHealthCheckRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateHealthCheckRequestBody& value);


protected:
    std::string healthCheckId_;
    bool healthCheckIdIsSet_;
    UpdateHealthCheckRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateHealthCheckRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateHealthCheckRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateHealthCheckRequest_H_
