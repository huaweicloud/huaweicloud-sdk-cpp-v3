
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequestBody_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/CreateTenantVpcIgwRequestBody_vpc_igw.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建虚拟IGW的请求体
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  CreateTenantVpcIgwRequestBody
    : public ModelBase
{
public:
    CreateTenantVpcIgwRequestBody();
    virtual ~CreateTenantVpcIgwRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTenantVpcIgwRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateTenantVpcIgwRequestBody_vpc_igw getVpcIgw() const;
    bool vpcIgwIsSet() const;
    void unsetvpcIgw();
    void setVpcIgw(const CreateTenantVpcIgwRequestBody_vpc_igw& value);


protected:
    CreateTenantVpcIgwRequestBody_vpc_igw vpcIgw_;
    bool vpcIgwIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequestBody_H_
