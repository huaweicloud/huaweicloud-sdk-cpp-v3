
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UserGroupDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UserGroupDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UserGroupDto
    : public ModelBase
{
public:
    UserGroupDto();
    virtual ~UserGroupDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserGroupDto members

    /// <summary>
    /// **参数解释：** 唯一标识id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员组id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUserGroupId() const;
    bool userGroupIdIsSet() const;
    void unsetuserGroupId();
    void setUserGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组类型。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员数量。
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


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string userGroupId_;
    bool userGroupIdIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UserGroupDto_H_
