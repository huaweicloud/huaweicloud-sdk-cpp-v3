
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveExitConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveExitConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播任务退出配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveExitConfig
    : public ModelBase
{
public:
    LiveExitConfig();
    virtual ~LiveExitConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveExitConfig members

    /// <summary>
    /// **参数解释**： 最大直播时长。单位小时。 此数值配置为n，则标识起播后n小时后触发停止直播逻辑。 当前数值最大为168（一周），特殊的，0表示不限时。 **约束限制**： 停止直播逻辑配置为立即停止则直播停止误差在5分钟之内。其他逻辑则加上处理时长。 **默认取值**： 不设置则表示不限时。
    /// </summary>

    int32_t getMaxLiveDuration() const;
    bool maxLiveDurationIsSet() const;
    void unsetmaxLiveDuration();
    void setMaxLiveDuration(int32_t value);

    /// <summary>
    /// **参数解释**： 自动停止直播模式。 * FORCE_EXIT：立即强制停止，不做其他逻辑处理。 * SEGMENT_END:等待段落结束停止。 * SCENE_END：等待场景结束停止。 * SCRIPT_END：等待剧本结束停止。 **约束限制**： 不涉及 **默认取值**： 不设置则表示FORCE_EXIT。
    /// </summary>

    std::string getAutoStopMode() const;
    bool autoStopModeIsSet() const;
    void unsetautoStopMode();
    void setAutoStopMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 最大异常等待时长。单位分钟。  此数值配置为n，则标识检测到异常n分钟后触发立即停止直播逻辑。 当前数值最大为60（1小时），特殊的，0表示不限时。 **约束限制**： 不涉及 **默认取值**： 不设置则为系统默认值，当前为3分钟，默认值可能会根据服务运行状态进行少许调整。
    /// </summary>

    int32_t getMaxExceptionWaitingDuration() const;
    bool maxExceptionWaitingDurationIsSet() const;
    void unsetmaxExceptionWaitingDuration();
    void setMaxExceptionWaitingDuration(int32_t value);


protected:
    int32_t maxLiveDuration_;
    bool maxLiveDurationIsSet_;
    std::string autoStopMode_;
    bool autoStopModeIsSet_;
    int32_t maxExceptionWaitingDuration_;
    bool maxExceptionWaitingDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveExitConfig_H_
