
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcRouteRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcRouteRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ShowVpcRouteRequest
    : public ModelBase
{
public:
    ShowVpcRouteRequest();
    virtual ~ShowVpcRouteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVpcRouteRequest members

    /// <summary>
    /// 路由ID
    /// </summary>

    std::string getRouteId() const;
    bool routeIdIsSet() const;
    void unsetrouteId();
    void setRouteId(const std::string& value);


protected:
    std::string routeId_;
    bool routeIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVpcRouteRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVpcRouteRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcRouteRequest_H_
