
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequestBody_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/CreateVpcRouteOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  CreateVpcRouteRequestBody
    : public ModelBase
{
public:
    CreateVpcRouteRequestBody();
    virtual ~CreateVpcRouteRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcRouteRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateVpcRouteOption getRoute() const;
    bool routeIsSet() const;
    void unsetroute();
    void setRoute(const CreateVpcRouteOption& value);


protected:
    CreateVpcRouteOption route_;
    bool routeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequestBody_H_
