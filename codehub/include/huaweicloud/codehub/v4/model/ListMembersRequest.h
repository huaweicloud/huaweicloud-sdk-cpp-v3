
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListMembersRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListMembersRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListMembersRequest
    : public ModelBase
{
public:
    ListMembersRequest();
    virtual ~ListMembersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMembersRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 查询关键字，可模糊匹配用户名称、用户昵称、租户名称。
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 偏移量，从0开始。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 返回数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 权限点。 **约束限制：** - repository，仓库。 - code，代码。 - member，成员。 - branch，分支。 - tag，Tag。 - mr，MR。 - label，标签。
    /// </summary>

    std::string getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const std::string& value);

    /// <summary>
    /// **参数解释：** 权限动作点, 不同权限点有不同的动作。 **约束限制：** - repository：create,fork,delete,setting - code：push,download - member：create,update,delete - branch：create,delete - tag：create,delete - mr：create,update,comment,review,approve,merge,close,reopen - label：create,delete,update
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string search_;
    bool searchIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string permission_;
    bool permissionIsSet_;
    std::string action_;
    bool actionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMembersRequest& dereference_from_shared_ptr(std::shared_ptr<ListMembersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListMembersRequest_H_
