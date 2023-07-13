
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/VpcPeering.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateVpcPeeringResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateVpcPeeringResponse();
    virtual ~UpdateVpcPeeringResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVpcPeeringResponse members

    /// <summary>
    /// 
    /// </summary>

    VpcPeering getPeering() const;
    bool peeringIsSet() const;
    void unsetpeering();
    void setPeering(const VpcPeering& value);


protected:
    VpcPeering peering_;
    bool peeringIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringResponse_H_
