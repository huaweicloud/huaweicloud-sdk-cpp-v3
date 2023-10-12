
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Vpc.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateVpcResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateVpcResponse();
    virtual ~UpdateVpcResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVpcResponse members

    /// <summary>
    /// 
    /// </summary>

    Vpc getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const Vpc& value);


protected:
    Vpc vpc_;
    bool vpcIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcResponse_H_
