
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetAuditLogPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetAuditLogPolicyRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetAuditLogPolicyRequestBody
    : public ModelBase
{
public:
    SetAuditLogPolicyRequestBody();
    virtual ~SetAuditLogPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAuditLogPolicyRequestBody members

    /// <summary>
    /// **参数解释**：  审计日志保存天数，0表示关闭审计日志策略。  **约束限制**：  不涉及。  **取值范围**：  0~732。  **默认取值**：  7。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// **参数解释**：  仅关闭审计日志策略时有效。 - true（默认），表示关闭审计日志策略的同时，保留历史审计日志。 - false，表示关闭审计日志策略的同时，删除已有的历史审计日志。  **约束限制**：  不涉及。  **取值范围**：  true|false。  **默认取值**：  true。
    /// </summary>

    bool isReserveAuditLogs() const;
    bool reserveAuditLogsIsSet() const;
    void unsetreserveAuditLogs();
    void setReserveAuditLogs(bool value);

    /// <summary>
    /// **参数解释**：  审计记录的操作类型，动态范围。空表示不过滤任何操作类型。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<std::string>& getAuditTypes();
    bool auditTypesIsSet() const;
    void unsetauditTypes();
    void setAuditTypes(const std::vector<std::string>& value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    bool reserveAuditLogs_;
    bool reserveAuditLogsIsSet_;
    std::vector<std::string> auditTypes_;
    bool auditTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetAuditLogPolicyRequestBody_H_
