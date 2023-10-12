
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_RejectVpcPeeringRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_RejectVpcPeeringRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VPC_V2_EXPORT  RejectVpcPeeringRequest
    : public ModelBase
{
public:
    RejectVpcPeeringRequest();
    virtual ~RejectVpcPeeringRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RejectVpcPeeringRequest members

    /// <summary>
    /// 对等连接ID
    /// </summary>

    std::string getPeeringId() const;
    bool peeringIdIsSet() const;
    void unsetpeeringId();
    void setPeeringId(const std::string& value);


protected:
    std::string peeringId_;
    bool peeringIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RejectVpcPeeringRequest& dereference_from_shared_ptr(std::shared_ptr<RejectVpcPeeringRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_RejectVpcPeeringRequest_H_
