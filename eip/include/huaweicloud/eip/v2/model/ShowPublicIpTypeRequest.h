
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicIpTypeRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicIpTypeRequest_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ShowPublicIpTypeRequest
    : public ModelBase
{
public:
    ShowPublicIpTypeRequest();
    virtual ~ShowPublicIpTypeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPublicIpTypeRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPublicIpTypeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPublicIpTypeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicIpTypeRequest_H_
