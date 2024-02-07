
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DeleteTenantVpcIgwRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DeleteTenantVpcIgwRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DeleteTenantVpcIgwRequest
    : public ModelBase
{
public:
    DeleteTenantVpcIgwRequest();
    virtual ~DeleteTenantVpcIgwRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTenantVpcIgwRequest members

    /// <summary>
    /// 虚拟igw的uuid
    /// </summary>

    std::string getVpcIgwId() const;
    bool vpcIgwIdIsSet() const;
    void unsetvpcIgwId();
    void setVpcIgwId(const std::string& value);


protected:
    std::string vpcIgwId_;
    bool vpcIgwIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTenantVpcIgwRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTenantVpcIgwRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DeleteTenantVpcIgwRequest_H_
