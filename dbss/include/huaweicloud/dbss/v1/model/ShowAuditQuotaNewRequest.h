
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditQuotaNewRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditQuotaNewRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditQuotaNewRequest
    : public ModelBase
{
public:
    ShowAuditQuotaNewRequest();
    virtual ~ShowAuditQuotaNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditQuotaNewRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAuditQuotaNewRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAuditQuotaNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditQuotaNewRequest_H_
