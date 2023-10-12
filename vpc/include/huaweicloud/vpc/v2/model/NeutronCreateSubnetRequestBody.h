
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSubnetRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSubnetRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateSubnetOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateSubnetRequestBody
    : public ModelBase
{
public:
    NeutronCreateSubnetRequestBody();
    virtual ~NeutronCreateSubnetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateSubnetRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateSubnetOption getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const NeutronCreateSubnetOption& value);


protected:
    NeutronCreateSubnetOption subnet_;
    bool subnetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSubnetRequestBody_H_
