
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBinlogSwitchResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBinlogSwitchResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowBinlogSwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBinlogSwitchResponse();
    virtual ~ShowBinlogSwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBinlogSwitchResponse members

    /// <summary>
    /// **参数解释**：  Binlog日志开关状态。   **取值范围**：  - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  Binlog日志保留天数。  **取值范围**：  1-180。如果为null表示未开启Binlog日志开关。
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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBinlogSwitchResponse_H_
