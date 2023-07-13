
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateVpcOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateVpcRequestBody
    : public ModelBase
{
public:
    CreateVpcRequestBody();
    virtual ~CreateVpcRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateVpcOption getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const CreateVpcOption& value);


protected:
    CreateVpcOption vpc_;
    bool vpcIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcRequestBody_H_
