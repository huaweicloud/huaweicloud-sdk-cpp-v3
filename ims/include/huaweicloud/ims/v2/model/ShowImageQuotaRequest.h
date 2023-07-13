
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageQuotaRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageQuotaRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ShowImageQuotaRequest
    : public ModelBase
{
public:
    ShowImageQuotaRequest();
    virtual ~ShowImageQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowImageQuotaRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowImageQuotaRequest& dereference_from_shared_ptr(std::shared_ptr<ShowImageQuotaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageQuotaRequest_H_
