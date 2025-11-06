
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryUserGroupDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryUserGroupDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 仓库成员组详情
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepositoryUserGroupDto
    : public ModelBase
{
public:
    RepositoryUserGroupDto();
    virtual ~RepositoryUserGroupDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryUserGroupDto members

    /// <summary>
    /// **参数解释：** 成员组名称 **约束限制：** 不涉及。
    /// </summary>

    std::string getUserGroupName() const;
    bool userGroupNameIsSet() const;
    void unsetuserGroupName();
    void setUserGroupName(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员组id。 **约束限制：** 不涉及。
    /// </summary>

    std::string getUserGroupId() const;
    bool userGroupIdIsSet() const;
    void unsetuserGroupId();
    void setUserGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目id。 **约束限制：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员组用户数量。 **约束限制：** 不涉及。
    /// </summary>

    std::string getUserCount() const;
    bool userCountIsSet() const;
    void unsetuserCount();
    void setUserCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员组描述。 **约束限制：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string userGroupName_;
    bool userGroupNameIsSet_;
    std::string userGroupId_;
    bool userGroupIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string userCount_;
    bool userCountIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryUserGroupDto_H_
