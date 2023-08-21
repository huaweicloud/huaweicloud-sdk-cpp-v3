
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserQuotasRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserQuotasRequest_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowUserQuotasRequest
    : public ModelBase
{
public:
    ShowUserQuotasRequest();
    virtual ~ShowUserQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowUserQuotasRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowUserQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ShowUserQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserQuotasRequest_H_
