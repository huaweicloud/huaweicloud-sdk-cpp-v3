
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionDeviceAlarm_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionDeviceAlarm_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 上报设备告警消息结构
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ActionDeviceAlarm
    : public ModelBase
{
public:
    ActionDeviceAlarm();
    virtual ~ActionDeviceAlarm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionDeviceAlarm members

    /// <summary>
    /// **参数说明**：告警名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数说明**：告警状态。 **取值范围**： - fault：上报告警。 - recovery：恢复告警。
    /// </summary>

    std::string getAlarmStatus() const;
    bool alarmStatusIsSet() const;
    void unsetalarmStatus();
    void setAlarmStatus(const std::string& value);

    /// <summary>
    /// **参数说明**：告警级别。 **取值范围**：warning（警告）、minor（一般）、major（严重）和critical（致命）。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数说明**：告警维度，与告警名称和告警级别组合起来共同标识一条告警，默认不携带该字段为用户维度告警，支持设备维度和资源空间维度告警。 **取值范围**： - device：设备维度。 - app：资源空间维度。
    /// </summary>

    std::string getDimension() const;
    bool dimensionIsSet() const;
    void unsetdimension();
    void setDimension(const std::string& value);

    /// <summary>
    /// **参数说明**：告警的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string alarmStatus_;
    bool alarmStatusIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string dimension_;
    bool dimensionIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionDeviceAlarm_H_
