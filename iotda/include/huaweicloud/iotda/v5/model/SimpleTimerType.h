
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SimpleTimerType_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SimpleTimerType_H_


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
/// 条件中简单定时类型的信息，自定义结构。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  SimpleTimerType
    : public ModelBase
{
public:
    SimpleTimerType();
    virtual ~SimpleTimerType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SimpleTimerType members

    /// <summary>
    /// **参数说明**：规则触发的开始时间，使用UTC时区，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数说明**：规则触发的重复时间间隔，单位为秒。
    /// </summary>

    int32_t getRepeatInterval() const;
    bool repeatIntervalIsSet() const;
    void unsetrepeatInterval();
    void setRepeatInterval(int32_t value);

    /// <summary>
    /// **参数说明**：规则触发的重复次数。
    /// </summary>

    int32_t getRepeatCount() const;
    bool repeatCountIsSet() const;
    void unsetrepeatCount();
    void setRepeatCount(int32_t value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t repeatInterval_;
    bool repeatIntervalIsSet_;
    int32_t repeatCount_;
    bool repeatCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SimpleTimerType_H_
