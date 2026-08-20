
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceUpdateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/GroupConfig.h>
#include <huaweicloud/modelarts/v1/model/RuntimeConfigUpdateRequest.h>
#include <huaweicloud/modelarts/v1/model/LtsConfiguration.h>
#include <huaweicloud/modelarts/v1/model/UpgradeConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ScheduleConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceUpdateRequest
    : public ModelBase
{
public:
    ServiceUpdateRequest();
    virtual ~ServiceUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceUpdateRequest members

    /// <summary>
    /// **参数解释：** 服务ID **约束限制：** 不填保留原有值。 **取值范围：** 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名称。 **约束限制：** 不填保留原有值。 **取值范围：** 支持1-128个字符，可以包含字母、汉字、数字、连字符和下划线。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务部署超时时间，integer类型，取值在1~300。 **约束限制：** 不填保留原有值。 **取值范围：** [0, 300]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getDeployTimeoutMinutes() const;
    bool deployTimeoutMinutesIsSet() const;
    void unsetdeployTimeoutMinutes();
    void setDeployTimeoutMinutes(int32_t value);

    /// <summary>
    /// **参数解释：** 服务版本，数据库中如果存在相同版本号，将会报错（仅修改描述的场景除外）。 **约束限制：** 不填保留原有值。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 非必填，仅更新描述的场景直接修改对应version的数据库字段，不新增版本号。 **约束限制：** 不填保留原有值。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 仅修改服务时不需传，兼容部署分离之前版本。 **约束限制：** 不填保留原有值，group_configs的最大元素数量为1。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<GroupConfig>& getGroupConfigs();
    bool groupConfigsIsSet() const;
    void unsetgroupConfigs();
    void setGroupConfigs(const std::vector<GroupConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    RuntimeConfigUpdateRequest getRuntimeConfig() const;
    bool runtimeConfigIsSet() const;
    void unsetruntimeConfig();
    void setRuntimeConfig(const RuntimeConfigUpdateRequest& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeConfig getUpgradeConfig() const;
    bool upgradeConfigIsSet() const;
    void unsetupgradeConfig();
    void setUpgradeConfig(const UpgradeConfig& value);

    /// <summary>
    /// **参数解释：** 日志策略。 **约束限制：** 不填保留原有值。 **取值范围：** - POOL：使用资源池日志插件配置的日志流。 - AUTO_CREATE：自动创建日志流。 - DEFAULT: 由系统决定日志策略 **默认取值：** 不涉及。
    /// </summary>

    std::string getLtsStrategy() const;
    bool ltsStrategyIsSet() const;
    void unsetltsStrategy();
    void setLtsStrategy(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务日志配置。 **约束限制：** 1.不填保留原有值 2.数量上限为[3](tag:hws,hws_hk,fcs,fcs_super)[2](tag:hcs,hcs_sm)个，且每种类型只可配置一个。
    /// </summary>

    std::vector<LtsConfiguration>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<LtsConfiguration>& value);

    /// <summary>
    /// **参数解释：** 服务标签,上限20个 **约束限制：** 不填保留原有值。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作空间id，默认是“0” **约束限制：** 不填保留原有值。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：**  定时停止配置。 **约束限制：** 1.不填保留原有值。 2.仅当body中另一个参数description为空时，此参数才生效。
    /// </summary>

    std::vector<ScheduleConfig>& getSchedule();
    bool scheduleIsSet() const;
    void unsetschedule();
    void setSchedule(const std::vector<ScheduleConfig>& value);

    /// <summary>
    /// **参数解释：** 该参数值由英文逗号隔开的协议、端口号、地址组成，其中地址长度不超过255 ，且需要与镜像给定的协议、地址、端口一致，否则指标无法上报。 **约束限制：** 不填保留原有值。
    /// </summary>

    std::string getCustomMetricsPath() const;
    bool customMetricsPathIsSet() const;
    void unsetcustomMetricsPath();
    void setCustomMetricsPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 模型类型。 **约束限制：** 不填保留原有值。 **取值范围：** - TEXT_GENERATION：文本生成 - IMAGE_UNDERSTANDING：图像理解 - VIDEO_GENERATION：视频生成 - IMAGE_GENERATION：图像生成 - RERANK：重排序 - VECTOR_MODEL：向量模型 - EMBEDDING：Embedding嵌入
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t deployTimeoutMinutes_;
    bool deployTimeoutMinutesIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<GroupConfig> groupConfigs_;
    bool groupConfigsIsSet_;
    RuntimeConfigUpdateRequest runtimeConfig_;
    bool runtimeConfigIsSet_;
    UpgradeConfig upgradeConfig_;
    bool upgradeConfigIsSet_;
    std::string ltsStrategy_;
    bool ltsStrategyIsSet_;
    std::vector<LtsConfiguration> logConfigs_;
    bool logConfigsIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<ScheduleConfig> schedule_;
    bool scheduleIsSet_;
    std::string customMetricsPath_;
    bool customMetricsPathIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceUpdateRequest_H_
