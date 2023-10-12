
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowTagQuotaRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowTagQuotaRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ShowTagQuotaRequest
    : public ModelBase
{
public:
    ShowTagQuotaRequest();
    virtual ~ShowTagQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTagQuotaRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTagQuotaRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTagQuotaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowTagQuotaRequest_H_
