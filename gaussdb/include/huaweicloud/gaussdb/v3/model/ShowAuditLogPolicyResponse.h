
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogPolicyResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAuditLogPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditLogPolicyResponse();
    virtual ~ShowAuditLogPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditLogPolicyResponse members

    /// <summary>
    /// **参数解释**：  审计日志保存天数，0表示关闭审计日志策略。   **取值范围**：  0~732。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// **参数解释**：  审计记录的操作类型。空表示不过滤任何操作类型。  **取值范围**：  动态范围。
    /// </summary>

    std::vector<std::string>& getAuditTypes();
    bool auditTypesIsSet() const;
    void unsetauditTypes();
    void setAuditTypes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  审计记录的操作类型。空表示不过滤任何操作类型。  **取值范围**：  不涉及
    /// </summary>

    std::string getAllAuditLogAction() const;
    bool allAuditLogActionIsSet() const;
    void unsetallAuditLogAction();
    void setAllAuditLogAction(const std::string& value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::vector<std::string> auditTypes_;
    bool auditTypesIsSet_;
    std::string allAuditLogAction_;
    bool allAuditLogActionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogPolicyResponse_H_
