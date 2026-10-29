
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfoV3_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfoV3_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/ConfigTemplateRuleSetInfo.h>
#include <huaweicloud/codeartscheck/v2/model/JobBasicInfoV3.h>
#include <vector>
#include <huaweicloud/codeartscheck/v2/model/CustomParameter.h>
#include <huaweicloud/codeartscheck/v2/model/TaskBasicInfoV3_checkParamMap.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 任务信息。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TaskBasicInfoV3
    : public ModelBase
{
public:
    TaskBasicInfoV3();
    virtual ~TaskBasicInfoV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskBasicInfoV3 members

    /// <summary>
    /// **参数解释：** 头像颜色。 **取值范围：** - pure-blue：蓝色。 - pure-purple：紫色。 - pure-tomato：红色。 - pure-green：绿色。 - pure-orange：橙色。 - pure-pink：粉色。
    /// </summary>

    std::string getAvastarType() const;
    bool avastarTypeIsSet() const;
    void unsetavastarType();
    void setAvastarType(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支名称。 **取值范围：** 长度为[1~200]个字符。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否可以更新忽略文件模式。 **取值范围：** - true：能更新忽略文件模式。 - false：不能更新忽略文件模式。
    /// </summary>

    bool isCanChangeIgnoreMode() const;
    bool canChangeIgnoreModeIsSet() const;
    void unsetcanChangeIgnoreMode();
    void setCanChangeIgnoreMode(bool value);

    /// <summary>
    /// **参数解释：** 是否有删除任务的权限。 **取值范围：** - true：有删除的权限。 - false：没有删除的权限。
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// **参数解释：** 是否有编辑的权限。 **取值范围：** - true：有编辑的权限。 - false：没有编辑的权限。
    /// </summary>

    bool isCanEdit() const;
    bool canEditIsSet() const;
    void unsetcanEdit();
    void setCanEdit(bool value);

    /// <summary>
    /// **参数解释：** 是否有切换任务模板的权限。 **取值范围：** - true：有切换任务模板的权限。 - false：没有切换任务模板的权限。
    /// </summary>

    bool isCanEditTemplateSwitch() const;
    bool canEditTemplateSwitchIsSet() const;
    void unsetcanEditTemplateSwitch();
    void setCanEditTemplateSwitch(bool value);

    /// <summary>
    /// **参数解释：** 是否有执行的权限。 **取值范围：** - true：有执行的权限。 - false：没有执行的权限。
    /// </summary>

    bool isCanExecute() const;
    bool canExecuteIsSet() const;
    void unsetcanExecute();
    void setCanExecute(bool value);

    /// <summary>
    /// **参数解释：** 是否有读的权限。 **取值范围：** - true：有读的权限。 - false：没有读的权限。
    /// </summary>

    bool isCanRead() const;
    bool canReadIsSet() const;
    void unsetcanRead();
    void setCanRead(bool value);

    /// <summary>
    /// **参数解释：** 自定义参数列表。
    /// </summary>

    std::vector<CustomParameter>& getCheckParamList();
    bool checkParamListIsSet() const;
    void unsetcheckParamList();
    void setCheckParamList(const std::vector<CustomParameter>& value);

    /// <summary>
    /// 
    /// </summary>

    TaskBasicInfoV3_checkParamMap getCheckParamMap() const;
    bool checkParamMapIsSet() const;
    void unsetcheckParamMap();
    void setCheckParamMap(const TaskBasicInfoV3_checkParamMap& value);

    /// <summary>
    /// **参数解释：** 任务的配置模板的ID。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getConfigTemplateId() const;
    bool configTemplateIdIsSet() const;
    void unsetconfigTemplateId();
    void setConfigTemplateId(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务的创建时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ，例如\&quot;2025-11-28T06:55:41Z\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集列表，该字段一般返回空数组[]。
    /// </summary>

    std::vector<ConfigTemplateRuleSetInfo>& getCriterionSets();
    bool criterionSetsIsSet() const;
    void unsetcriterionSets();
    void setCriterionSets(const std::vector<ConfigTemplateRuleSetInfo>& value);

    /// <summary>
    /// **参数解释：** 自定义参数列表，该字段一般返回空数组[]。
    /// </summary>

    std::vector<CustomParameter>& getCustomParams();
    bool customParamsIsSet() const;
    void unsetcustomParams();
    void setCustomParams(const std::vector<CustomParameter>& value);

    /// <summary>
    /// **参数解释：** 默认分支的分支名。 **取值范围：** 长度为[1~200]个字符。
    /// </summary>

    std::string getDefaultBranchName() const;
    bool defaultBranchNameIsSet() const;
    void unsetdefaultBranchName();
    void setDefaultBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件编码。 **取值范围：** - UTF-8：UTF-8格式。 - GBK：GBK格式。
    /// </summary>

    std::string getFileEncoding() const;
    bool fileEncodingIsSet() const;
    void unsetfileEncoding();
    void setFileEncoding(const std::string& value);

    /// <summary>
    /// **参数解释：** 华为云地域。 **取值范围：** 长度为[1~32]个字符。
    /// </summary>

    std::string getHwCloudRegion() const;
    bool hwCloudRegionIsSet() const;
    void unsethwCloudRegion();
    void setHwCloudRegion(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务ID，即新建检查任务接口的返回值，每个代码检查任务及其下的分支任务、通过API创建的增量任务都有唯一的任务ID。即[[查询任务列表](https://support.huaweicloud.com/api-codecheck/ShowTasksList.html)](tag:hws)[[查询任务列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ShowTasksList.html)](tag:hws_hk)[查询任务列表](tag:hcs,hcs_sm)接口响应中的id字段。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 检查目录。 不配置检查目录时，检查代码仓中所有目录下的代码文件； 配置检查目录时，只检查配置目录中的代码文件。 **取值范围：** 长度为[1~200]个字符。
    /// </summary>

    std::string getIncludePaths() const;
    bool includePathsIsSet() const;
    void unsetincludePaths();
    void setIncludePaths(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否打开合并请求时触发。 **取值范围：** - true：打开。 - false：关闭。
    /// </summary>

    bool isIsSetMrWebhook() const;
    bool isSetMrWebhookIsSet() const;
    void unsetisSetMrWebhook();
    void setIsSetMrWebhook(bool value);

    /// <summary>
    /// **参数解释：** 是否打开代码提交时触发。 **取值范围：** - true：打开。 - false：关闭。
    /// </summary>

    bool isIsSetPushWebhook() const;
    bool isSetPushWebhookIsSet() const;
    void unsetisSetPushWebhook();
    void setIsSetPushWebhook(bool value);

    /// <summary>
    /// **参数解释：** 是否打开合并请求时触发。 **取值范围：** - true：打开。 - false：关闭。
    /// </summary>

    bool isIsSetWebhook() const;
    bool isSetWebhookIsSet() const;
    void unsetisSetWebhook();
    void setIsSetWebhook(bool value);

    /// <summary>
    /// **参数解释：** 是否是任务模板。 **取值范围：** - true：是任务模板。 - false：不是任务模板。
    /// </summary>

    bool isIsTemplateTask() const;
    bool isTemplateTaskIsSet() const;
    void unsetisTemplateTask();
    void setIsTemplateTask(bool value);

    /// <summary>
    /// **参数解释：** 执行ID，来自代码检查执行任务接口的返回值，每次执行代码检查任务都有唯一的执行ID。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释:** 超时时间，以分钟为单位，格式固定为\&quot;xxx min\&quot;，其中xxx为整数，0 ＜ xxx ≤ 1200。 **取值范围：** 不涉及。
    /// </summary>

    std::string getJobTimeout() const;
    bool jobTimeoutIsSet() const;
    void unsetjobTimeout();
    void setJobTimeout(const std::string& value);

    /// <summary>
    /// **参数解释：** 最后一次检查完成的任务的执行ID。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getLastFinishedFullJobId() const;
    bool lastFinishedFullJobIdIsSet() const;
    void unsetlastFinishedFullJobId();
    void setLastFinishedFullJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobBasicInfoV3 getLastJob() const;
    bool lastJobIsSet() const;
    void unsetlastJob();
    void setLastJob(const JobBasicInfoV3& value);

    /// <summary>
    /// **参数解释：** 任务的最后修改人。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastReviser() const;
    bool lastReviserIsSet() const;
    void unsetlastReviser();
    void setLastReviser(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务的上一次更新时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ，例如\&quot;2025-11-28T06:55:41Z\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 模型集列表，该字段一般返回空数组[]。
    /// </summary>

    std::vector<std::string>& getModelSets();
    bool modelSetsIsSet() const;
    void unsetmodelSets();
    void setModelSets(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** mr检查分支门禁策略。 **取值范围：** - 0：白名单。
    /// </summary>

    int32_t getMrCheckBranchStrategy() const;
    bool mrCheckBranchStrategyIsSet() const;
    void unsetmrCheckBranchStrategy();
    void setMrCheckBranchStrategy(int32_t value);

    /// <summary>
    /// **参数解释：** 代码检查任务名。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 消息通知是否使用项目通知设置的配置项，格式为x,x,x,x,x,x，其中x的取值为0或者1。 x为0时代表使用任务的通知设置，x为1时代表使用项目通知设置。 从左到右依次为站内消息通知、邮件通知、企业微信、钉钉、飞书、通用webhook的消息通知配置。 **取值范围：** 格式为x,x,x,x,x,x，其中x的取值为0或者1。
    /// </summary>

    std::string getNotificationConfig() const;
    bool notificationConfigIsSet() const;
    void unsetnotificationConfig();
    void setNotificationConfig(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码检查任务所有者。 **取值范围：** 长度为[1~255]个字符。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码检查任务所有者的用户ID。 **取值范围：** 长度为[1~64]个字符。
    /// </summary>

    std::string getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目的32位UUID，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/zh-cn/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)接口获取。 **取值范围：** 长度为[1~32]个字符。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目名。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 地域，此字段固定为\&quot;suzhou\&quot;。 **取值范围：** suzhou。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓地址对应的CodeartsRepo仓的RepoId。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓地址。 **取值范围：** 长度为[1~1024]个字符。
    /// </summary>

    std::string getRepoUrl() const;
    bool repoUrlIsSet() const;
    void unsetrepoUrl();
    void setRepoUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 门禁配置，该字段一般返回空数组[]。
    /// </summary>

    std::vector<std::string>& getReviewData();
    bool reviewDataIsSet() const;
    void unsetreviewData();
    void setReviewData(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 规则集配置，该字段一般返回空数组[]。
    /// </summary>

    std::vector<std::string>& getRuleSets();
    bool ruleSetsIsSet() const;
    void unsetruleSets();
    void setRuleSets(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 任务来源，一般为\&quot;customer\&quot;。 **取值范围：** customer。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务分组的ID。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getTaskGroupId() const;
    bool taskGroupIdIsSet() const;
    void unsettaskGroupId();
    void setTaskGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务ID列表，该字段一般返回空数组[]。
    /// </summary>

    std::vector<std::string>& getTaskIds();
    bool taskIdsIsSet() const;
    void unsettaskIds();
    void setTaskIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 任务所属的租户的租户ID，租户ID的值来源于IAM的租户ID。 **取值范围：** 长度为[1~32]个字符。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询任务信息是否使用缓存。 **取值范围：** - true：使用缓存。 - false：不使用缓存。
    /// </summary>

    bool isUseCache() const;
    bool useCacheIsSet() const;
    void unsetuseCache();
    void setUseCache(bool value);

    /// <summary>
    /// **参数解释：** 消息通知是否使用项目通知设置的配置项，来自notificationConfig的对应的二进制的取反转化成十进制。 例如，notificationConfig配置为1,1,0,1,0,0，则二进制为110100，取反为001011，转化为10进制时该值为11，最终useWorkspaceNotificationConfig的值为11。 **取值范围：** 0-31
    /// </summary>

    int32_t getUseWorkspaceNotificationConfig() const;
    bool useWorkspaceNotificationConfigIsSet() const;
    void unsetuseWorkspaceNotificationConfig();
    void setUseWorkspaceNotificationConfig(int32_t value);

    /// <summary>
    /// **参数解释：** 版本升级缓冲期，该字段一般返回空数组[]。
    /// </summary>

    std::vector<std::string>& getVersionUpdateDelayDays();
    bool versionUpdateDelayDaysIsSet() const;
    void unsetversionUpdateDelayDays();
    void setVersionUpdateDelayDays(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** webhook检查模式，一般为0，代表禁止来自其它代码仓的MR。 **取值范围：** 0
    /// </summary>

    int32_t getWebhookCheckMode() const;
    bool webhookCheckModeIsSet() const;
    void unsetwebhookCheckMode();
    void setWebhookCheckMode(int32_t value);

    /// <summary>
    /// **参数解释：** 区域，一般为green。 **取值范围：** green。
    /// </summary>

    std::string getZone() const;
    bool zoneIsSet() const;
    void unsetzone();
    void setZone(const std::string& value);


protected:
    std::string avastarType_;
    bool avastarTypeIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    bool canChangeIgnoreMode_;
    bool canChangeIgnoreModeIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canEdit_;
    bool canEditIsSet_;
    bool canEditTemplateSwitch_;
    bool canEditTemplateSwitchIsSet_;
    bool canExecute_;
    bool canExecuteIsSet_;
    bool canRead_;
    bool canReadIsSet_;
    std::vector<CustomParameter> checkParamList_;
    bool checkParamListIsSet_;
    TaskBasicInfoV3_checkParamMap checkParamMap_;
    bool checkParamMapIsSet_;
    std::string configTemplateId_;
    bool configTemplateIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::vector<ConfigTemplateRuleSetInfo> criterionSets_;
    bool criterionSetsIsSet_;
    std::vector<CustomParameter> customParams_;
    bool customParamsIsSet_;
    std::string defaultBranchName_;
    bool defaultBranchNameIsSet_;
    std::string fileEncoding_;
    bool fileEncodingIsSet_;
    std::string hwCloudRegion_;
    bool hwCloudRegionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string includePaths_;
    bool includePathsIsSet_;
    bool isSetMrWebhook_;
    bool isSetMrWebhookIsSet_;
    bool isSetPushWebhook_;
    bool isSetPushWebhookIsSet_;
    bool isSetWebhook_;
    bool isSetWebhookIsSet_;
    bool isTemplateTask_;
    bool isTemplateTaskIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobTimeout_;
    bool jobTimeoutIsSet_;
    std::string lastFinishedFullJobId_;
    bool lastFinishedFullJobIdIsSet_;
    JobBasicInfoV3 lastJob_;
    bool lastJobIsSet_;
    std::string lastReviser_;
    bool lastReviserIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::vector<std::string> modelSets_;
    bool modelSetsIsSet_;
    int32_t mrCheckBranchStrategy_;
    bool mrCheckBranchStrategyIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string notificationConfig_;
    bool notificationConfigIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string repoUrl_;
    bool repoUrlIsSet_;
    std::vector<std::string> reviewData_;
    bool reviewDataIsSet_;
    std::vector<std::string> ruleSets_;
    bool ruleSetsIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string taskGroupId_;
    bool taskGroupIdIsSet_;
    std::vector<std::string> taskIds_;
    bool taskIdsIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    bool useCache_;
    bool useCacheIsSet_;
    int32_t useWorkspaceNotificationConfig_;
    bool useWorkspaceNotificationConfigIsSet_;
    std::vector<std::string> versionUpdateDelayDays_;
    bool versionUpdateDelayDaysIsSet_;
    int32_t webhookCheckMode_;
    bool webhookCheckModeIsSet_;
    std::string zone_;
    bool zoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfoV3_H_
