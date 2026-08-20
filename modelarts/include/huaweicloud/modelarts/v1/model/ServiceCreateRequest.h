
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceCreateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceCreateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/GroupConfig.h>
#include <huaweicloud/modelarts/v1/model/ServiceCreateRequest_tags.h>
#include <huaweicloud/modelarts/v1/model/LtsConfiguration.h>
#include <huaweicloud/modelarts/v1/model/UpgradeConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/RuntimeConfigCreateRequest.h>
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
/// **参数解释：** 创建服务请求体。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceCreateRequest
    : public ModelBase
{
public:
    ServiceCreateRequest();
    virtual ~ServiceCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceCreateRequest members

    /// <summary>
    /// **参数解释：** 服务名，用户在[创建服务](CreateInferService.xml)时自定义的名称。 **约束限制：** 服务在删除之前名字不能重复。 **取值范围：** 支持1-64位字符，可包含字母、中文、数字、中划线、下划线。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本号，以数字及点号组成，形如1.0.1。 **约束限制：** 不涉及。 **取值范围：** 1.0.0 ~ 99.99.99，长度不超过8位。 **默认取值：** 前端可不传默认设置为1.0.0。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务备注。 **约束限制：** 不涉及。 **取值范围：** 长度不可以超过512，不能包含大于号，小于号。 **默认取值：** 默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 推理服务类型。 **约束限制：** 不涉及。 **取值范围：** - REAL_TIME：在线服务。 - ASYNC_REAL_TIME：异步服务。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署类型。 **约束限制：** 不涉及。 **取值范围：** - SINGLE：单机单卡。 - MULTI：多机多卡。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例组配置。 **约束限制：** 仅创建服务时group_configs可传[]空数组，group_configs的最大元素数量为1。
    /// </summary>

    std::vector<GroupConfig>& getGroupConfigs();
    bool groupConfigsIsSet() const;
    void unsetgroupConfigs();
    void setGroupConfigs(const std::vector<GroupConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    RuntimeConfigCreateRequest getRuntimeConfig() const;
    bool runtimeConfigIsSet() const;
    void unsetruntimeConfig();
    void setRuntimeConfig(const RuntimeConfigCreateRequest& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeConfig getUpgradeConfig() const;
    bool upgradeConfigIsSet() const;
    void unsetupgradeConfig();
    void setUpgradeConfig(const UpgradeConfig& value);

    /// <summary>
    /// **参数解释：** 日志策略。 **约束限制：** 不涉及。 **取值范围：** - POOL：使用资源池日志插件配置的日志流。 - AUTO_CREATE：自动创建日志流。 - DEFAULT: 由系统决定日志策略 **默认取值：** AUTO_CREATE：自动创建日志流。
    /// </summary>

    std::string getLtsStrategy() const;
    bool ltsStrategyIsSet() const;
    void unsetltsStrategy();
    void setLtsStrategy(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务日志配置。 **约束限制：** 数量上限为[3](tag:hws,hws_hk,fcs,fcs_super)[2](tag:hcs,hcs_sm)个，且每种类型只可配置一个。
    /// </summary>

    std::vector<LtsConfiguration>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<LtsConfiguration>& value);

    /// <summary>
    /// **参数解释：** 服务标签。 **约束限制：** 上限20个。
    /// </summary>

    std::vector<ServiceCreateRequest_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ServiceCreateRequest_tags>& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **约束限制：** 不涉及。 **取值范围：** - 0：默认空间ID。 - 由数字和小写字母组成的32位字符：其他空间ID，可参考[工作空间创建](CreateWorkspace.xml)。 **默认取值：** 不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：**  定时停止配置。 **约束限制：**  最多支持一个定时任务。
    /// </summary>

    std::vector<ScheduleConfig>& getSchedule();
    bool scheduleIsSet() const;
    void unsetschedule();
    void setSchedule(const std::vector<ScheduleConfig>& value);

    /// <summary>
    /// **参数解释：** 该参数值由英文逗号隔开的协议、端口号、地址组成，比如：[http,8080,metrics]，其中地址长度不超过255 ，且需要与镜像给定的协议、地址、端口一致，否则指标无法上报。 **约束限制：** 长度不超过255。 **取值范围：** - 协议范围：http/https。 - 端口范围：1-65535。 - 地址范围：仅包含字母、数字、点号（.）、中划线（-)、下划线（_）、斜杠（/）的路径，非斜杠（/）开头。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCustomMetricsPath() const;
    bool customMetricsPathIsSet() const;
    void unsetcustomMetricsPath();
    void setCustomMetricsPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务部署超时时间，integer类型，取值在1~300 （860版本该参数在服务层级做保留兼容）。 **约束限制：** 不涉及。 **取值范围：** [0, 300]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getDeployTimeoutMinutes() const;
    bool deployTimeoutMinutesIsSet() const;
    void unsetdeployTimeoutMinutes();
    void setDeployTimeoutMinutes(int32_t value);

    /// <summary>
    /// **参数解释：** 模型类型。 **取值范围：** - TEXT_GENERATION：文本生成 - IMAGE_UNDERSTANDING：图像理解 - VIDEO_GENERATION：视频生成 - IMAGE_GENERATION：图像生成 - RERANK：重排序 - VECTOR_MODEL：向量模型 - EMBEDDING：Embedding嵌入
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作负载类型。 **取值范围：** - DEPLOYMENT：DEPLOYMENT类型 - LWS：LWS类型
    /// </summary>

    std::string getWorkloadType() const;
    bool workloadTypeIsSet() const;
    void unsetworkloadType();
    void setWorkloadType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    std::vector<GroupConfig> groupConfigs_;
    bool groupConfigsIsSet_;
    RuntimeConfigCreateRequest runtimeConfig_;
    bool runtimeConfigIsSet_;
    UpgradeConfig upgradeConfig_;
    bool upgradeConfigIsSet_;
    std::string ltsStrategy_;
    bool ltsStrategyIsSet_;
    std::vector<LtsConfiguration> logConfigs_;
    bool logConfigsIsSet_;
    std::vector<ServiceCreateRequest_tags> tags_;
    bool tagsIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<ScheduleConfig> schedule_;
    bool scheduleIsSet_;
    std::string customMetricsPath_;
    bool customMetricsPathIsSet_;
    int32_t deployTimeoutMinutes_;
    bool deployTimeoutMinutesIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string workloadType_;
    bool workloadTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceCreateRequest_H_
