
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupPermissionsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupPermissionsDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GroupPermissionsDto
    : public ModelBase
{
public:
    GroupPermissionsDto();
    virtual ~GroupPermissionsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupPermissionsDto members

    /// <summary>
    /// **参数解释：** 项目的32位uuid，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/en-us/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **取值范围：** 字符串长度32。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释：** **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupPermissionsDto_H_
