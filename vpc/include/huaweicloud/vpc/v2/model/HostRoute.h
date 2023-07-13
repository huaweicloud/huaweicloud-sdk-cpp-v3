
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_HostRoute_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_HostRoute_H_

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
class HUAWEICLOUD_VPC_V2_EXPORT  HostRoute
    : public ModelBase
{
public:
    HostRoute();
    virtual ~HostRoute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HostRoute members

    /// <summary>
    /// 路由目的子网
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 路由下一跳IP
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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_HostRoute_H_
