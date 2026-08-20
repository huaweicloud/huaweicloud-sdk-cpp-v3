
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ReserveTime_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ReserveTime_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业的保留时长配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ReserveTime
    : public ModelBase
{
public:
    ReserveTime();
    virtual ~ReserveTime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReserveTime members

    /// <summary>
    /// **参数解释**：时间单位。  **约束限制**：不涉及。  **取值范围**：  - HOURS：小时   **默认取值**：不涉及。
    /// </summary>

    std::string getTimeUnit() const;
    bool timeUnitIsSet() const;
    void unsettimeUnit();
    void setTimeUnit(const std::string& value);

    /// <summary>
    /// **参数解释**：保留时长。  **约束限制**：不涉及。  **取值范围**：最小值为1。  **默认取值**：不涉及。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


protected:
    std::string timeUnit_;
    bool timeUnitIsSet_;
    int32_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ReserveTime_H_
