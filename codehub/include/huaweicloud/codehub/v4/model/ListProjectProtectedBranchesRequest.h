
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectProtectedBranchesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectProtectedBranchesRequest_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListProjectProtectedBranchesRequest
    : public ModelBase
{
public:
    ListProjectProtectedBranchesRequest();
    virtual ~ListProjectProtectedBranchesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectProtectedBranchesRequest members

    /// <summary>
    /// **参数解释：** 项目的32位uuid，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/en-us/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **取值范围：** 字符串长度32。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

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
    /// **参数解释：** 保护分支名称。 **取值范围：** 字符串长度不少于1，不超过2000。
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否使用actions权限点的返回内容。 **取值范围：** 字符串长度不少于1，不超过2000。
    /// </summary>

    bool isUserActions() const;
    bool userActionsIsSet() const;
    void unsetuserActions();
    void setUserActions(bool value);

    /// <summary>
    /// **参数解释：** 参数值只有simple ，意为使用简单模式，只返回名称。 **取值范围：** 字符串长度不少于1，不超过2000。
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string search_;
    bool searchIsSet_;
    bool userActions_;
    bool userActionsIsSet_;
    std::string view_;
    bool viewIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectProtectedBranchesRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectProtectedBranchesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectProtectedBranchesRequest_H_
