
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DurationStrategies_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DurationStrategies_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DurationStrategies
    : public ModelBase
{
public:
    DurationStrategies();
    virtual ~DurationStrategies();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DurationStrategies members

    /// <summary>
    /// 升级策略 - minimized_interrupt_time，表示最短中断时间 - minimized_upgrade_time，最短升级时长
    /// </summary>

    std::string getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const std::string& value);

    /// <summary>
    /// 升级时长，单位为分钟
    /// </summary>

    int32_t getEstimatedUpgradeDuration() const;
    bool estimatedUpgradeDurationIsSet() const;
    void unsetestimatedUpgradeDuration();
    void setEstimatedUpgradeDuration(int32_t value);


protected:
    std::string strategy_;
    bool strategyIsSet_;
    int32_t estimatedUpgradeDuration_;
    bool estimatedUpgradeDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DurationStrategies_H_
