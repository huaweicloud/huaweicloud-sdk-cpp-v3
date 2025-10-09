
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplyHistoryInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplyHistoryInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  参数组应用历史详情  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ApplyHistoryInfo
    : public ModelBase
{
public:
    ApplyHistoryInfo();
    virtual ~ApplyHistoryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplyHistoryInfo members

    /// <summary>
    /// **参数解释**：  参数组应用目标实例ID,，此参数是实例的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  参数组应用目标实例名称  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  参数组应用结果。  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  不涉及。
    /// </summary>

    std::string getApplyResult() const;
    bool applyResultIsSet() const;
    void unsetapplyResult();
    void setApplyResult(const std::string& value);

    /// <summary>
    /// **参数解释**：  参数组应用时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  不涉及。
    /// </summary>

    std::string getApplyTime() const;
    bool applyTimeIsSet() const;
    void unsetapplyTime();
    void setApplyTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  参数组应用错误码  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string applyResult_;
    bool applyResultIsSet_;
    std::string applyTime_;
    bool applyTimeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplyHistoryInfo_H_
