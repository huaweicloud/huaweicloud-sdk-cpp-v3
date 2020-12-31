
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequest_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/vpc/model/UpdateVpcPeeringRequestBody.h"

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
class HUAWEICLOUD_VPC_EXPORT  UpdateVpcPeeringRequest
    : public ModelBase
{
public:
    UpdateVpcPeeringRequest();
    virtual ~UpdateVpcPeeringRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVpcPeeringRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getPeeringId() const;
    bool peeringIdIsSet() const;
    void unsetpeeringId();
    void setPeeringId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateVpcPeeringRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateVpcPeeringRequestBody& value);


protected:
    std::string peeringId_;
    bool peeringIdIsSet_;
    UpdateVpcPeeringRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateVpcPeeringRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateVpcPeeringRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequest_H_
