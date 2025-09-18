
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ShowHealthCheckRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ShowHealthCheckRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_GA_V1_EXPORT  ShowHealthCheckRequest
    : public ModelBase
{
public:
    ShowHealthCheckRequest();
    virtual ~ShowHealthCheckRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHealthCheckRequest members

    /// <summary>
    /// 健康检查ID。
    /// </summary>

    std::string getHealthCheckId() const;
    bool healthCheckIdIsSet() const;
    void unsethealthCheckId();
    void setHealthCheckId(const std::string& value);


protected:
    std::string healthCheckId_;
    bool healthCheckIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHealthCheckRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHealthCheckRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ShowHealthCheckRequest_H_
