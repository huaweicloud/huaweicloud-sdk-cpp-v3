
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringRequestBody_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/CreateVpcPeeringOption.h"

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
class HUAWEICLOUD_VPC_EXPORT  CreateVpcPeeringRequestBody
    : public ModelBase
{
public:
    CreateVpcPeeringRequestBody();
    virtual ~CreateVpcPeeringRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcPeeringRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateVpcPeeringOption getPeering() const;
    bool peeringIsSet() const;
    void unsetpeering();
    void setPeering(const CreateVpcPeeringOption& value);


protected:
    CreateVpcPeeringOption peering_;
    bool peeringIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringRequestBody_H_
