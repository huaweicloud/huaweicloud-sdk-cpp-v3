
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateBinlogRequestV3Body_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateBinlogRequestV3Body_H_


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
/// 开启/关闭Binlog参数体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OperateBinlogRequestV3Body
    : public ModelBase
{
public:
    OperateBinlogRequestV3Body();
    virtual ~OperateBinlogRequestV3Body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateBinlogRequestV3Body members

    /// <summary>
    /// **参数解释**：  Binlog日志开关状态。  **约束限制**：  不涉及。  **取值范围**：  - ON：表示开启。 - OFF：表示关闭。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  Binlog日志保存的天数。  **约束限制**：  - switch_status为ON时必选。 - switch_status为OFF时不可选。  **取值范围**：  1~180。  **默认取值**：  不涉及。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateBinlogRequestV3Body_H_
