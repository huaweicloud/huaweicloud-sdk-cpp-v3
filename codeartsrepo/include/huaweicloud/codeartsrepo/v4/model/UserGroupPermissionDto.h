
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UserGroupPermissionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UserGroupPermissionDto_H_


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
/// current user group permission
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UserGroupPermissionDto
    : public ModelBase
{
public:
    UserGroupPermissionDto();
    virtual ~UserGroupPermissionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserGroupPermissionDto members

    /// <summary>
    /// **参数解释：** 是否可以创建代码组。
    /// </summary>

    bool isCanCreateGroup() const;
    bool canCreateGroupIsSet() const;
    void unsetcanCreateGroup();
    void setCanCreateGroup(bool value);

    /// <summary>
    /// **参数解释：** 是否可以创建仓库。
    /// </summary>

    bool isCanCraeteProject() const;
    bool canCraeteProjectIsSet() const;
    void unsetcanCraeteProject();
    void setCanCraeteProject(bool value);

    /// <summary>
    /// **参数解释：** 是否可以设置代码组。
    /// </summary>

    bool isCanSetGroup() const;
    bool canSetGroupIsSet() const;
    void unsetcanSetGroup();
    void setCanSetGroup(bool value);

    /// <summary>
    /// **参数解释：** 代码组id。
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// **参数解释：** 可见性, private public。
    /// </summary>

    std::string getGroupVisibility() const;
    bool groupVisibilityIsSet() const;
    void unsetgroupVisibility();
    void setGroupVisibility(const std::string& value);


protected:
    bool canCreateGroup_;
    bool canCreateGroupIsSet_;
    bool canCraeteProject_;
    bool canCraeteProjectIsSet_;
    bool canSetGroup_;
    bool canSetGroupIsSet_;
    int32_t groupId_;
    bool groupIdIsSet_;
    std::string groupVisibility_;
    bool groupVisibilityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UserGroupPermissionDto_H_
