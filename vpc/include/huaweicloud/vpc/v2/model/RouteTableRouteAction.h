
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_RouteTableRouteAction_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_RouteTableRouteAction_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/AddRouteTableRoute.h>
#include <huaweicloud/vpc/v2/model/ModRouteTableRoute.h>
#include <huaweicloud/vpc/v2/model/DelRouteTableRoute.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新路由表路由对象动作，可选add、mod、del
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  RouteTableRouteAction
    : public ModelBase
{
public:
    RouteTableRouteAction();
    virtual ~RouteTableRouteAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RouteTableRouteAction members

    /// <summary>
    /// 新增路由条目，type，destination，nexthop必选
    /// </summary>

    std::vector<AddRouteTableRoute>& getAdd();
    bool addIsSet() const;
    void unsetadd();
    void setAdd(const std::vector<AddRouteTableRoute>& value);

    /// <summary>
    /// 修改路由条目，type，destination，nexthop必选
    /// </summary>

    std::vector<ModRouteTableRoute>& getMod();
    bool modIsSet() const;
    void unsetmod();
    void setMod(const std::vector<ModRouteTableRoute>& value);

    /// <summary>
    /// 删除路由条目，destination必选
    /// </summary>

    std::vector<DelRouteTableRoute>& getDel();
    bool delIsSet() const;
    void unsetdel();
    void setDel(const std::vector<DelRouteTableRoute>& value);


protected:
    std::vector<AddRouteTableRoute> add_;
    bool addIsSet_;
    std::vector<ModRouteTableRoute> mod_;
    bool modIsSet_;
    std::vector<DelRouteTableRoute> del_;
    bool delIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_RouteTableRouteAction_H_
