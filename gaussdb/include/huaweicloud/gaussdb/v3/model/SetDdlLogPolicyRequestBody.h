
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetDdlLogPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetDdlLogPolicyRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置DDL日志下载策略
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetDdlLogPolicyRequestBody
    : public ModelBase
{
public:
    SetDdlLogPolicyRequestBody();
    virtual ~SetDdlLogPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetDdlLogPolicyRequestBody members

    /// <summary>
    /// **参数解释**：  设置DDL日志下载功能开关。  **约束限制**：  不涉及。  **取值范围**：  - ON，开启。 - OFF，关闭。  **默认取值**：  不涉及。 
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  设置DDL日志保留天数。  **约束限制**：  不涉及。  **取值范围**：  1~30。  **默认取值**：  3。 
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);


protected:
    std::string switchStatus_;
    bool switchStatusIsSet_;
    int32_t keepDays_;
    bool keepDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetDdlLogPolicyRequestBody_H_
