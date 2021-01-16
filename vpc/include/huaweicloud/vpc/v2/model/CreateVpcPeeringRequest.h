
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateVpcPeeringRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateVpcPeeringRequest
    : public ModelBase
{
public:
    CreateVpcPeeringRequest();
    virtual ~CreateVpcPeeringRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcPeeringRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateVpcPeeringRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateVpcPeeringRequestBody& value);


protected:
    CreateVpcPeeringRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateVpcPeeringRequest& dereference_from_shared_ptr(std::shared_ptr<CreateVpcPeeringRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringRequest_H_
