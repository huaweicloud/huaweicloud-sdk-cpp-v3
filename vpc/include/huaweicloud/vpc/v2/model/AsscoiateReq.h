
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_AsscoiateReq_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_AsscoiateReq_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/AssociateRouteTableAndSubnetReq.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  AsscoiateReq
    : public ModelBase
{
public:
    AsscoiateReq();
    virtual ~AsscoiateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AsscoiateReq members

    /// <summary>
    /// 
    /// </summary>

    AssociateRouteTableAndSubnetReq getSubnets() const;
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const AssociateRouteTableAndSubnetReq& value);


protected:
    AssociateRouteTableAndSubnetReq subnets_;
    bool subnetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_AsscoiateReq_H_
