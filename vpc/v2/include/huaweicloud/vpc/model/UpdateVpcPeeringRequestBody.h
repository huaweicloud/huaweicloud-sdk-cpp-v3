
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequestBody_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/UpdateVpcPeeringOption.h"

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
class HUAWEICLOUD_VPC_EXPORT  UpdateVpcPeeringRequestBody
    : public ModelBase
{
public:
    UpdateVpcPeeringRequestBody();
    virtual ~UpdateVpcPeeringRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVpcPeeringRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateVpcPeeringOption getPeering() const;
    bool peeringIsSet() const;
    void unsetpeering();
    void setPeering(const UpdateVpcPeeringOption& value);


protected:
    UpdateVpcPeeringOption peering_;
    bool peeringIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequestBody_H_
