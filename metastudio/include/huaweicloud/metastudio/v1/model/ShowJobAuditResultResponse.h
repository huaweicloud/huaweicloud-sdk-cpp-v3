
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobAuditResultResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobAuditResultResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AuditResult_admin_audit_result.h>
#include <huaweicloud/metastudio/v1/model/AuditResult_system_audit_result.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowJobAuditResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobAuditResultResponse();
    virtual ~ShowJobAuditResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobAuditResultResponse members

    /// <summary>
    /// 
    /// </summary>

    AuditResult_system_audit_result getSystemAuditResult() const;
    bool systemAuditResultIsSet() const;
    void unsetsystemAuditResult();
    void setSystemAuditResult(const AuditResult_system_audit_result& value);

    /// <summary>
    /// 
    /// </summary>

    AuditResult_admin_audit_result getAdminAuditResult() const;
    bool adminAuditResultIsSet() const;
    void unsetadminAuditResult();
    void setAdminAuditResult(const AuditResult_admin_audit_result& value);


protected:
    AuditResult_system_audit_result systemAuditResult_;
    bool systemAuditResultIsSet_;
    AuditResult_admin_audit_result adminAuditResult_;
    bool adminAuditResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobAuditResultResponse_H_
