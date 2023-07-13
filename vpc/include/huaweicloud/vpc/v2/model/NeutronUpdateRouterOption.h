
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterOption_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/ExternalGatewayInfoOption.h>
#include <huaweicloud/vpc/v2/model/Route.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateRouterOption
    : public ModelBase
{
public:
    NeutronUpdateRouterOption();
    virtual ~NeutronUpdateRouterOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateRouterOption members

    /// <summary>
    /// 功能说明：路由器的名称。 取值范围：0-64个字符，仅支持数字、字母、中文、_(下划线)、-（中划线）、.（点）。 约束：如果name非空，则name不能重复。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：资源的管理状态。 取值范围：true、false 约束：只支持true
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 
    /// </summary>

    ExternalGatewayInfoOption getExternalGatewayInfo() const;
    bool externalGatewayInfoIsSet() const;
    void unsetexternalGatewayInfo();
    void setExternalGatewayInfo(const ExternalGatewayInfoOption& value);

    /// <summary>
    /// 功能说明：路由信息，见ListRoute详细说明
    /// </summary>

    std::vector<Route>& getRoutes();
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const std::vector<Route>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    ExternalGatewayInfoOption externalGatewayInfo_;
    bool externalGatewayInfoIsSet_;
    std::vector<Route> routes_;
    bool routesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateRouterOption_H_
