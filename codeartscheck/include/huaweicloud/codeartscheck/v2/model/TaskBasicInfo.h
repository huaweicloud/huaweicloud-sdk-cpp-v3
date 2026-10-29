
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/ConfigTemplateRuleSetInfo.h>
#include <huaweicloud/codeartscheck/v2/model/JobResultInfo.h>
#include <huaweicloud/codeartscheck/v2/model/ConfigTemplateBasicInfo.h>
#include <huaweicloud/codeartscheck/v2/model/JobBasicInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 任务信息。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TaskBasicInfo
    : public ModelBase
{
public:
    TaskBasicInfo();
    virtual ~TaskBasicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskBasicInfo members

    /// <summary>
    /// **参数解释：** 分支名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

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
    /// 
    /// </summary>

    ConfigTemplateBasicInfo getConfigTemplate() const;
    bool configTemplateIsSet() const;
    void unsetconfigTemplate();
    void setConfigTemplate(const ConfigTemplateBasicInfo& value);

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
    /// **参数解释：** 任务ID，即新建检查任务接口的返回值，每个代码检查任务及其下的分支任务、通过API创建的增量任务都有唯一的任务ID。即[[查询任务列表](https://support.huaweicloud.com/api-codecheck/ShowTasksList.html)](tag:hws)[[查询任务列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ShowTasksList.html)](tag:hws_hk)[查询任务列表](tag:hcs,hcs_sm)接口响应中的id字段。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务是否被关注。 **取值范围：** - true：任务被关注。 - false：任务未被关注。
    /// </summary>

    bool isIsFollowed() const;
    bool isFollowedIsSet() const;
    void unsetisFollowed();
    void setIsFollowed(bool value);

    /// <summary>
    /// 
    /// </summary>

    JobResultInfo getJobResult() const;
    bool jobResultIsSet() const;
    void unsetjobResult();
    void setJobResult(const JobResultInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobBasicInfo getLastJob() const;
    bool lastJobIsSet() const;
    void unsetlastJob();
    void setLastJob(const JobBasicInfo& value);

    /// <summary>
    /// **参数解释：** 任务的上一次更新时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ，例如\&quot;2025-11-28T06:55:41Z\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码检查任务名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码检查任务所有者。 **取值范围：** 不涉及。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目的32位UUID，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/zh-cn/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)接口获取。 **取值范围：** 长度为[1~32]个字符。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 华为云地域。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRepoUrl() const;
    bool repoUrlIsSet() const;
    void unsetrepoUrl();
    void setRepoUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集配置列表。
    /// </summary>

    std::vector<ConfigTemplateRuleSetInfo>& getRuleSets();
    bool ruleSetsIsSet() const;
    void unsetruleSets();
    void setRuleSets(const std::vector<ConfigTemplateRuleSetInfo>& value);

    /// <summary>
    /// **参数解释：** 任务类型。 **取值范围：** - basic：普通任务。 - security：安全增强包任务。
    /// </summary>

    std::string getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务分组的ID。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getTaskGroupId() const;
    bool taskGroupIdIsSet() const;
    void unsettaskGroupId();
    void setTaskGroupId(const std::string& value);


protected:
    std::string branchName_;
    bool branchNameIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canEdit_;
    bool canEditIsSet_;
    bool canExecute_;
    bool canExecuteIsSet_;
    bool canRead_;
    bool canReadIsSet_;
    ConfigTemplateBasicInfo configTemplate_;
    bool configTemplateIsSet_;
    std::string configTemplateId_;
    bool configTemplateIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string id_;
    bool idIsSet_;
    bool isFollowed_;
    bool isFollowedIsSet_;
    JobResultInfo jobResult_;
    bool jobResultIsSet_;
    JobBasicInfo lastJob_;
    bool lastJobIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string repoUrl_;
    bool repoUrlIsSet_;
    std::vector<ConfigTemplateRuleSetInfo> ruleSets_;
    bool ruleSetsIsSet_;
    std::string ruleType_;
    bool ruleTypeIsSet_;
    std::string taskGroupId_;
    bool taskGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfo_H_
