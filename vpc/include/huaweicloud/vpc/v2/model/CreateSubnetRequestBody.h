
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateSubnetOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建子网对象
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateSubnetRequestBody
    : public ModelBase
{
public:
    CreateSubnetRequestBody();
    virtual ~CreateSubnetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubnetRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateSubnetOption getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const CreateSubnetOption& value);


protected:
    CreateSubnetOption subnet_;
    bool subnetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetRequestBody_H_
