
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListRouteTablesResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListRouteTablesResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/RouteTableListResp.h>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  ListRouteTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRouteTablesResponse();
    virtual ~ListRouteTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListRouteTablesResponse members

    /// <summary>
    /// 路由表对象列表
    /// </summary>

    std::vector<RouteTableListResp>& getRoutetables();
    bool routetablesIsSet() const;
    void unsetroutetables();
    void setRoutetables(const std::vector<RouteTableListResp>& value);


protected:
    std::vector<RouteTableListResp> routetables_;
    bool routetablesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListRouteTablesResponse_H_
