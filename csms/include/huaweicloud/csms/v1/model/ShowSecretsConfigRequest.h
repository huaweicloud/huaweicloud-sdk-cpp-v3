
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretsConfigRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretsConfigRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowSecretsConfigRequest
    : public ModelBase
{
public:
    ShowSecretsConfigRequest();
    virtual ~ShowSecretsConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSecretsConfigRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSecretsConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSecretsConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretsConfigRequest_H_
