
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/RouteTableResp.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  AssociateRouteTableResponse
    : public ModelBase, public HttpResponse
{
public:
    AssociateRouteTableResponse();
    virtual ~AssociateRouteTableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociateRouteTableResponse members

    /// <summary>
    /// 
    /// </summary>

    RouteTableResp getRoutetable() const;
    bool routetableIsSet() const;
    void unsetroutetable();
    void setRoutetable(const RouteTableResp& value);


protected:
    RouteTableResp routetable_;
    bool routetableIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableResponse_H_
