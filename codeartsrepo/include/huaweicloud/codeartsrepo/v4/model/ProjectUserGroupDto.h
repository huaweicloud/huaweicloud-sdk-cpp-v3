
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ProjectUserGroupDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ProjectUserGroupDto_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ProjectUserGroupDto
    : public ModelBase
{
public:
    ProjectUserGroupDto();
    virtual ~ProjectUserGroupDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectUserGroupDto members

    /// <summary>
    /// **参数解释：** 用户组记录id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户组id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUserGroupId() const;
    bool userGroupIdIsSet() const;
    void unsetuserGroupId();
    void setUserGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户组名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户组所在项目id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户组所在租户id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户组类型。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户组成员数量。
    /// </summary>

    int32_t getMemberCount() const;
    bool memberCountIsSet() const;
    void unsetmemberCount();
    void setMemberCount(int32_t value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述信息。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string userGroupId_;
    bool userGroupIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    int32_t memberCount_;
    bool memberCountIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ProjectUserGroupDto_H_
