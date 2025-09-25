
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowUserRefPermissionRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowUserRefPermissionRequest_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowUserRefPermissionRequest
    : public ModelBase
{
public:
    ShowUserRefPermissionRequest();
    virtual ~ShowUserRefPermissionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserRefPermissionRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 分支或者标签名称。  **约束限制：** 不支持空格 [ \\ &lt; ~ ^ : ? * ! ( ) &#39; \&quot; | 等特殊字符，不支持以. / .lock结尾，分支以refs/head/开头，标签以refs/tag/开头  **取值范围：** 字符串长度不少于1，不超过210。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTargetRef() const;
    bool targetRefIsSet() const;
    void unsettargetRef();
    void setTargetRef(const std::string& value);

    /// <summary>
    /// **参数解释：** 动作类型，可用于查询指定动作的权限 - read，查看 - review，检视 - approval, 审核 - create-change，创建变更请求 - merge，合并变更请求 - create-delete，创建/删除分支 - push, 推送
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 变更请求在仓库内部的ID。
    /// </summary>

    int32_t getChangeRequestIid() const;
    bool changeRequestIidIsSet() const;
    void unsetchangeRequestIid();
    void setChangeRequestIid(int32_t value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string targetRef_;
    bool targetRefIsSet_;
    std::string action_;
    bool actionIsSet_;
    int32_t changeRequestIid_;
    bool changeRequestIidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowUserRefPermissionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowUserRefPermissionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowUserRefPermissionRequest_H_
