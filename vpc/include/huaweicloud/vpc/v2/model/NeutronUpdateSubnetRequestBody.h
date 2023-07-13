
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSubnetRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSubnetRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateSubnetOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateSubnetRequestBody
    : public ModelBase
{
public:
    NeutronUpdateSubnetRequestBody();
    virtual ~NeutronUpdateSubnetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateSubnetRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateSubnetOption getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const NeutronUpdateSubnetOption& value);


protected:
    NeutronUpdateSubnetOption subnet_;
    bool subnetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSubnetRequestBody_H_
