
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DeleteTenantVpcIgwResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DeleteTenantVpcIgwResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DeleteTenantVpcIgwResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteTenantVpcIgwResponse();
    virtual ~DeleteTenantVpcIgwResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTenantVpcIgwResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DeleteTenantVpcIgwResponse_H_
