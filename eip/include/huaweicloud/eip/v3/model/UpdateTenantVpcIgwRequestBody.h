
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdateTenantVpcIgwRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdateTenantVpcIgwRequestBody_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/UpdateTenantVpcIgwRequestBody_vpc_igw.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改虚拟IGW的请求体
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  UpdateTenantVpcIgwRequestBody
    : public ModelBase
{
public:
    UpdateTenantVpcIgwRequestBody();
    virtual ~UpdateTenantVpcIgwRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantVpcIgwRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateTenantVpcIgwRequestBody_vpc_igw getVpcIgw() const;
    bool vpcIgwIsSet() const;
    void unsetvpcIgw();
    void setVpcIgw(const UpdateTenantVpcIgwRequestBody_vpc_igw& value);


protected:
    UpdateTenantVpcIgwRequestBody_vpc_igw vpcIgw_;
    bool vpcIgwIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdateTenantVpcIgwRequestBody_H_
