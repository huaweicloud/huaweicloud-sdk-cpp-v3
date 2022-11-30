
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowSubnetResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowSubnetResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Subnet.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  ShowSubnetResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSubnetResponse();
    virtual ~ShowSubnetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSubnetResponse members

    /// <summary>
    /// 
    /// </summary>

    Subnet getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const Subnet& value);


protected:
    Subnet subnet_;
    bool subnetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowSubnetResponse_H_
