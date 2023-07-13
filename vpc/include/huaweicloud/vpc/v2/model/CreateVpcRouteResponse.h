
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/VpcRoute.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateVpcRouteResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVpcRouteResponse();
    virtual ~CreateVpcRouteResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcRouteResponse members

    /// <summary>
    /// 
    /// </summary>

    VpcRoute getRoute() const;
    bool routeIsSet() const;
    void unsetroute();
    void setRoute(const VpcRoute& value);


protected:
    VpcRoute route_;
    bool routeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteResponse_H_
