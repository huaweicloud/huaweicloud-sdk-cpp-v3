
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/UpdateVpcOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateVpcRequestBody
    : public ModelBase
{
public:
    UpdateVpcRequestBody();
    virtual ~UpdateVpcRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVpcRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateVpcOption getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const UpdateVpcOption& value);


protected:
    UpdateVpcOption vpc_;
    bool vpcIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequestBody_H_
