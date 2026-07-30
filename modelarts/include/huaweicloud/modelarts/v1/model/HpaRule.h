
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaRule_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaRule_H_


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
/// 自动扩缩容规则返回体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HpaRule
    : public ModelBase
{
public:
    HpaRule();
    virtual ~HpaRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HpaRule members

    /// <summary>
    /// **参数解释：** 自动扩缩容规则ID **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则关联的策略ID **取值范围：** 不涉及。
    /// </summary>

    std::string getHpaId() const;
    bool hpaIdIsSet() const;
    void unsethpaId();
    void setHpaId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则名 **取值范围：** 支持4-64个字符，可以包含字母、汉字、数字、中划线和下划线。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容类型。 **取值范围：** - CRON_HPA：定时扩缩容策略 - METRIC_HPA：指标扩缩容策略
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 定时自动扩缩容执行的cron表达式，不支持秒，从分钟开始设定 **取值范围：** 不涉及。
    /// </summary>

    std::string getSchedule() const;
    bool scheduleIsSet() const;
    void unsetschedule();
    void setSchedule(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容目标实例数。 **取值范围：** 1-128
    /// </summary>

    int32_t getTargetReplicas() const;
    bool targetReplicasIsSet() const;
    void unsettargetReplicas();
    void setTargetReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则是否启用。 **取值范围：** - false - true
    /// </summary>

    std::string getDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则状态。 **取值范围：** - CREATING：创建中 - CONFIG_SUCCESS：配置成功 - EXECUTE_SUCCESS：执行成功 - DELETED：已删除 - FAILED: 执行失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string hpaId_;
    bool hpaIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string schedule_;
    bool scheduleIsSet_;
    int32_t targetReplicas_;
    bool targetReplicasIsSet_;
    std::string disable_;
    bool disableIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaRule_H_
