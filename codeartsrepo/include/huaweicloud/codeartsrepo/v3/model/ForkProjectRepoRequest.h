
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ForkProjectRepoRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ForkProjectRepoRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v3/model/ExternalKeyMessage.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ForkProjectRepoRequest
    : public ModelBase
{
public:
    ForkProjectRepoRequest();
    virtual ~ForkProjectRepoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ForkProjectRepoRequest members

    /// <summary>
    /// 是否导入项目成员，取值范围：0-&gt;不导入项目成员，1-&gt;导入项目成员
    /// </summary>

    int32_t getImportMembers() const;
    bool importMembersIsSet() const;
    void unsetimportMembers();
    void setImportMembers(int32_t value);

    /// <summary>
    /// 项目名称，取值范围：可以输入英文大小写字母、数字、连字符、下划线，且必须以字母开头
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 仓库名称，取值范围：可以输入英文大小写字母、数字、连字符、下划线，且必须以字母开头
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 复制模板的ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 项目类型，scrum
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 仓库可见性：  *私有仓库：仓库仅对仓库成员可见，仓库成员可读写和访问仓库，取值范围为0  *公开仓库：   1.项目内成员只读仓库：仓库对项目内成员公开只读，并项目内成员可在项目下和代码组下的仓库列表中查看和搜索，取值范围为10   2.租户内成员只读仓库：仓库对租户内成员公开只读，并租户内成员可在项目下和代码组下的仓库列表中查看和搜索，取值范围为10   3.所有访客只读仓库：仓库对所有访客公开只读，并所有访客可在项目下和代码组下的仓库列表中查看和搜索，取值范围为20
    /// </summary>

    int32_t getVisibilityLevel() const;
    bool visibilityLevelIsSet() const;
    void unsetvisibilityLevel();
    void setVisibilityLevel(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ExternalKeyMessage getExternalProjectInfo() const;
    bool externalProjectInfoIsSet() const;
    void unsetexternalProjectInfo();
    void setExternalProjectInfo(const ExternalKeyMessage& value);


protected:
    int32_t importMembers_;
    bool importMembersIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t visibilityLevel_;
    bool visibilityLevelIsSet_;
    ExternalKeyMessage externalProjectInfo_;
    bool externalProjectInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ForkProjectRepoRequest_H_
