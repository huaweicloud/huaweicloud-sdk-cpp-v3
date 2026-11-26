
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BandwidthAlarmStrategy_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BandwidthAlarmStrategy_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 带宽告警策略，当带宽达到告警阈值时，发送告警通知 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BandwidthAlarmStrategy
    : public ModelBase
{
public:
    BandwidthAlarmStrategy();
    virtual ~BandwidthAlarmStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BandwidthAlarmStrategy members

    /// <summary>
    /// **参数解释：** 带宽告警开关 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭  **默认取值：** off: 关闭
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 带宽告警阈值，单位：bit/s **约束限制：** - status为on时必填  **取值范围：** 1000000-10000000000000 **默认取值：** 不涉及
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    int64_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BandwidthAlarmStrategy_H_
