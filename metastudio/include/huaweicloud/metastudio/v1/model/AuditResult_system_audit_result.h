
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_system_audit_result_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_system_audit_result_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AuditResult_system_audit_result_errors.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 系统审核结果。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AuditResult_system_audit_result
    : public ModelBase
{
public:
    AuditResult_system_audit_result();
    virtual ~AuditResult_system_audit_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditResult_system_audit_result members

    /// <summary>
    /// 操作时间。
    /// </summary>

    int64_t getAuditTime() const;
    bool auditTimeIsSet() const;
    void unsetauditTime();
    void setAuditTime(int64_t value);

    /// <summary>
    /// 错误列表。
    /// </summary>

    std::vector<AuditResult_system_audit_result_errors>& getErrors();
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(const std::vector<AuditResult_system_audit_result_errors>& value);


protected:
    int64_t auditTime_;
    bool auditTimeIsSet_;
    std::vector<AuditResult_system_audit_result_errors> errors_;
    bool errorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_system_audit_result_H_
