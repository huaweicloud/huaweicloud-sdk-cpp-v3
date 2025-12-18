
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateNotificationSubscriptionRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateNotificationSubscriptionRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepoNotificationSubscriptionDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateNotificationSubscriptionRequest
    : public ModelBase
{
public:
    UpdateNotificationSubscriptionRequest();
    virtual ~UpdateNotificationSubscriptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateNotificationSubscriptionRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 通知类型。 **取值范围：**   - internal_message，站内信。   - email，邮件。   - qyweixin，企业微信。   - feishu，飞书。   - dingding，钉钉。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateRepoNotificationSubscriptionDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateRepoNotificationSubscriptionDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    UpdateRepoNotificationSubscriptionDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateNotificationSubscriptionRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateNotificationSubscriptionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateNotificationSubscriptionRequest_H_
