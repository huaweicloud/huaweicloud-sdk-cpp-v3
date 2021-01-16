
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_Route_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_Route_H_

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
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  Route
    : public ModelBase
{
public:
    Route();
    virtual ~Route();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Route members

    /// <summary>
    /// 功能说明：路由目的地 取值范围：IP地址段 约束：仅支持配置默认路由，且其取值只能是0.0.0.0/0
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 功能说明：路由下一跳IP地址 取值范围：ipv4地址格式 约束：nexthop仅支持所关联的子网范围内IP地址
    /// </summary>

    std::string getNexthop() const;
    bool nexthopIsSet() const;
    void unsetnexthop();
    void setNexthop(const std::string& value);


protected:
    std::string destination_;
    bool destinationIsSet_;
    std::string nexthop_;
    bool nexthopIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_Route_H_
