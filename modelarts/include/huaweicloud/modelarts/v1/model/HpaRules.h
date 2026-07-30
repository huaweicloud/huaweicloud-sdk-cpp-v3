
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaRules_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaRules_H_


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
/// 自动扩缩容规则
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HpaRules
    : public ModelBase
{
public:
    HpaRules();
    virtual ~HpaRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HpaRules members

    /// <summary>
    /// **参数解释：** 自动扩缩容规则名。 **取值范围：** 支持4-64个字符，可以包含小写字母、数字和中划线，必须以小写字母开头，不能以中划线结尾。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容id **取值范围：** 支持4-64个字符，可以包含字母、汉字、数字、中划线和下划线。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则是否启用。 **取值范围：** - false：启动 - true：不启动 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    bool isDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(bool value);

    /// <summary>
    /// **参数解释：** 自动扩缩容类型。 **取值范围：** - CRON_HPA：定时扩缩容策略 - METRIC_HPA：指标扩缩容策略 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容类型。 **取值范围：** - CREATING：创建扩缩容策略 - CONFIG_SUCCESS：配置成功扩缩容策略 - EXECUTE_SUCCESS：执行成功扩缩容策略 - DELETED：删除扩缩容策略 - FAILED：失败扩缩容策略 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容类型。 **取值范围：** - ADD：添加扩缩容策略规则 - UPDATE：修改扩缩容策略规则 - DELETE：删除扩缩容策略规则 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOperate() const;
    bool operateIsSet() const;
    void unsetoperate();
    void setOperate(const std::string& value);

    /// <summary>
    /// **参数解释：** 定时自动扩缩容执行的cron表达式，不支持秒，从分钟开始设定 **取值范围：** 不涉及。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSchedule() const;
    bool scheduleIsSet() const;
    void unsetschedule();
    void setSchedule(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容目标实例数。 **取值范围：** 1-128，接口能接受浮点类型，后端会自动向下取整 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getTargetReplicas() const;
    bool targetReplicasIsSet() const;
    void unsettargetReplicas();
    void setTargetReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 自动扩缩容最小实例数。 **取值范围：** 1-128，接口能接受浮点类型，后端会自动向下取整 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getMinReplicas() const;
    bool minReplicasIsSet() const;
    void unsetminReplicas();
    void setMinReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 自动扩缩容最大实例数。 **取值范围：** 1-128，接口能接受浮点类型，后端会自动向下取整 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getMaxReplicas() const;
    bool maxReplicasIsSet() const;
    void unsetmaxReplicas();
    void setMaxReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 自动扩缩容扩容冷却时间。 **取值范围：** 1-128，接口能接受浮点类型，后端会自动向下取整 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getDownscaleWindow() const;
    bool downscaleWindowIsSet() const;
    void unsetdownscaleWindow();
    void setDownscaleWindow(int32_t value);

    /// <summary>
    /// **参数解释：** 自动扩缩容缩容冷却时间。 **取值范围：** 1-128，接口能接受浮点类型，后端会自动向下取整 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getUpscaleWindow() const;
    bool upscaleWindowIsSet() const;
    void unsetupscaleWindow();
    void setUpscaleWindow(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    bool disable_;
    bool disableIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string operate_;
    bool operateIsSet_;
    std::string schedule_;
    bool scheduleIsSet_;
    int32_t targetReplicas_;
    bool targetReplicasIsSet_;
    int32_t minReplicas_;
    bool minReplicasIsSet_;
    int32_t maxReplicas_;
    bool maxReplicasIsSet_;
    int32_t downscaleWindow_;
    bool downscaleWindowIsSet_;
    int32_t upscaleWindow_;
    bool upscaleWindowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaRules_H_
