
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableReq_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableReq_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/RouteTableRouteAction.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateRouteTableReq
    : public ModelBase
{
public:
    UpdateRouteTableReq();
    virtual ~UpdateRouteTableReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRouteTableReq members

    /// <summary>
    /// 功能说明：路由表名称  取值范围：0-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：路由表描述信息  取值范围：0-255个字符，不能包含“&lt;”和“&gt;”
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RouteTableRouteAction getRoutes() const;
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const RouteTableRouteAction& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    RouteTableRouteAction routes_;
    bool routesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableReq_H_
