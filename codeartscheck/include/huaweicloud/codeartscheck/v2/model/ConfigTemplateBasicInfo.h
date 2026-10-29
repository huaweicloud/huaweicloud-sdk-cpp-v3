
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTemplateBasicInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTemplateBasicInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/ReviewDataInfoResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ConfigTemplateRuleSetInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 配置模板详情。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ConfigTemplateBasicInfo
    : public ModelBase
{
public:
    ConfigTemplateBasicInfo();
    virtual ~ConfigTemplateBasicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigTemplateBasicInfo members

    /// <summary>
    /// **参数解释：** 执行机类型。 **取值范围：** X86/ARM。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置模板创建时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ，例如\&quot;2025-11-28T06:55:41Z\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置模板创建者。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务配置的排除目录信息。 **取值范围:** 不涉及。
    /// </summary>

    std::string getExclude() const;
    bool excludeIsSet() const;
    void unsetexclude();
    void setExclude(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置模板ID，修改配置信息需要用到配置模板ID，每个代码检查任务及其下的分支任务都有相同的且唯一的配置模板ID。 **取值范围:** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 检查目录。不配置检查目录时，检查代码仓中所有目录下的代码文件；配置检查目录时，只检查配置目录中的文件。 **取值范围：** 不涉及。
    /// </summary>

    std::string getIncludePaths() const;
    bool includePathsIsSet() const;
    void unsetincludePaths();
    void setIncludePaths(const std::string& value);

    /// <summary>
    /// **参数解释：** 最后修改人的用户名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastReviser() const;
    bool lastReviserIsSet() const;
    void unsetlastReviser();
    void setLastReviser(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置模板上一次修改时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ，例如\&quot;2025-11-28T06:55:41Z\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置模板的名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

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
    /// **参数解释：** 代码仓类型。 **取值范围：** - DevCloud：CodeArtsRepo仓。 - Gitee：Gitee仓。 - GitHub：GitHub仓。 - GitPub：通用Git仓。 - gitcode：GitCode仓。 - gitlab：GitLab仓。 - self_gitlab：自建GitLab仓。 - tfs_git：TFS仓。 - bitbucket：Bitbucket仓。
    /// </summary>

    std::string getRepoType() const;
    bool repoTypeIsSet() const;
    void unsetrepoType();
    void setRepoType(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRepoUrl() const;
    bool repoUrlIsSet() const;
    void unsetrepoUrl();
    void setRepoUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 启用的资源池ID，使用内置执行机的情况下为\&quot;\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getResourcePoolId() const;
    bool resourcePoolIdIsSet() const;
    void unsetresourcePoolId();
    void setResourcePoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 启用的资源池名称，使用内置执行机的情况下为空。 **取值范围：** 不涉及。
    /// </summary>

    std::string getResourcePoolName() const;
    bool resourcePoolNameIsSet() const;
    void unsetresourcePoolName();
    void setResourcePoolName(const std::string& value);

    /// <summary>
    /// **参数解释：** 启用的资源池类型。 **取值范围：** - default：使用内置资源池。 - exclusive：使用专属资源池。 - self-hosted：使用自定义资源池。
    /// </summary>

    std::string getResourcePoolType() const;
    bool resourcePoolTypeIsSet() const;
    void unsetresourcePoolType();
    void setResourcePoolType(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务门禁配置列表。
    /// </summary>

    std::vector<ReviewDataInfoResponse>& getReviewData();
    bool reviewDataIsSet() const;
    void unsetreviewData();
    void setReviewData(const std::vector<ReviewDataInfoResponse>& value);

    /// <summary>
    /// **参数解释：** 任务门禁配置列表的json字符串。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReviewDataJson() const;
    bool reviewDataJsonIsSet() const;
    void unsetreviewDataJson();
    void setReviewDataJson(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集配置列表。
    /// </summary>

    std::vector<ConfigTemplateRuleSetInfo>& getRuleSets();
    bool ruleSetsIsSet() const;
    void unsetruleSets();
    void setRuleSets(const std::vector<ConfigTemplateRuleSetInfo>& value);


protected:
    std::string arch_;
    bool archIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string exclude_;
    bool excludeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string includePaths_;
    bool includePathsIsSet_;
    std::string lastReviser_;
    bool lastReviserIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string repoType_;
    bool repoTypeIsSet_;
    std::string repoUrl_;
    bool repoUrlIsSet_;
    std::string resourcePoolId_;
    bool resourcePoolIdIsSet_;
    std::string resourcePoolName_;
    bool resourcePoolNameIsSet_;
    std::string resourcePoolType_;
    bool resourcePoolTypeIsSet_;
    std::vector<ReviewDataInfoResponse> reviewData_;
    bool reviewDataIsSet_;
    std::string reviewDataJson_;
    bool reviewDataJsonIsSet_;
    std::vector<ConfigTemplateRuleSetInfo> ruleSets_;
    bool ruleSetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTemplateBasicInfo_H_
