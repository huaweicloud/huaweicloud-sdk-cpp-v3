
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorSpotOptions_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorSpotOptions_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  FlavorSpotOptions
    : public ModelBase
{
public:
    FlavorSpotOptions();
    virtual ~FlavorSpotOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FlavorSpotOptions members

    /// <summary>
    /// 购买的竞价实例时长
    /// </summary>

    int32_t getLongestSpotDurationHours() const;
    bool longestSpotDurationHoursIsSet() const;
    void unsetlongestSpotDurationHours();
    void setLongestSpotDurationHours(int32_t value);

    /// <summary>
    /// 购买的“竞价实例时长”的个数。
    /// </summary>

    int32_t getLargestSpotDurationCount() const;
    bool largestSpotDurationCountIsSet() const;
    void unsetlargestSpotDurationCount();
    void setLargestSpotDurationCount(int32_t value);

    /// <summary>
    /// 竞价实例中断策略。  - immediate：立即释放 - delay：延迟释放
    /// </summary>

    std::string getInterruptionPolicy() const;
    bool interruptionPolicyIsSet() const;
    void unsetinterruptionPolicy();
    void setInterruptionPolicy(const std::string& value);


protected:
    int32_t longestSpotDurationHours_;
    bool longestSpotDurationHoursIsSet_;
    int32_t largestSpotDurationCount_;
    bool largestSpotDurationCountIsSet_;
    std::string interruptionPolicy_;
    bool interruptionPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorSpotOptions_H_
