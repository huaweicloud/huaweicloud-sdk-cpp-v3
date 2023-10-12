
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcOption_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateVpcOption
    : public ModelBase
{
public:
    UpdateVpcOption();
    virtual ~UpdateVpcOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVpcOption members

    /// <summary>
    /// 功能说明：虚拟私有云名称  取值范围：0-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）  约束：如果名称不为空，则同一个租户下的VPC不允许重名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云的描述  取值范围：0-255个字符，不能包含“&lt;”和“&gt;”。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云下可用子网的范围  取值范围：  - 10.0.0.0/8 ~ 10.255.255.240/28 - 172.16.0.0/12 ~ 172.31.255.240/28 - 192.168.0.0/16 ~ 192.168.255.240/28  约束：必须是ipv4 cidr格式，例如：192.168.0.0/16
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 功能说明：路由信息列表，详情参见route对象
    /// </summary>

    std::vector<Route>& getRoutes();
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const std::vector<Route>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::vector<Route> routes_;
    bool routesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcOption_H_
