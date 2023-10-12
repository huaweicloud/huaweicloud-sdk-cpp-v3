
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/UpdateSubnetOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateSubnetRequestBody
    : public ModelBase
{
public:
    UpdateSubnetRequestBody();
    virtual ~UpdateSubnetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubnetRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateSubnetOption getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const UpdateSubnetOption& value);


protected:
    UpdateSubnetOption subnet_;
    bool subnetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequestBody_H_
