
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowNotificationSubscriptionsStatusResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowNotificationSubscriptionsStatusResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/RepoNotificationSubscriptionStateDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowNotificationSubscriptionsStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNotificationSubscriptionsStatusResponse();
    virtual ~ShowNotificationSubscriptionsStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNotificationSubscriptionsStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    RepoNotificationSubscriptionStateDto getInternalMessage() const;
    bool internalMessageIsSet() const;
    void unsetinternalMessage();
    void setInternalMessage(const RepoNotificationSubscriptionStateDto& value);

    /// <summary>
    /// 
    /// </summary>

    RepoNotificationSubscriptionStateDto getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const RepoNotificationSubscriptionStateDto& value);

    /// <summary>
    /// 
    /// </summary>

    RepoNotificationSubscriptionStateDto getQyweixin() const;
    bool qyweixinIsSet() const;
    void unsetqyweixin();
    void setQyweixin(const RepoNotificationSubscriptionStateDto& value);

    /// <summary>
    /// 
    /// </summary>

    RepoNotificationSubscriptionStateDto getFeishu() const;
    bool feishuIsSet() const;
    void unsetfeishu();
    void setFeishu(const RepoNotificationSubscriptionStateDto& value);

    /// <summary>
    /// 
    /// </summary>

    RepoNotificationSubscriptionStateDto getDingding() const;
    bool dingdingIsSet() const;
    void unsetdingding();
    void setDingding(const RepoNotificationSubscriptionStateDto& value);


protected:
    RepoNotificationSubscriptionStateDto internalMessage_;
    bool internalMessageIsSet_;
    RepoNotificationSubscriptionStateDto email_;
    bool emailIsSet_;
    RepoNotificationSubscriptionStateDto qyweixin_;
    bool qyweixinIsSet_;
    RepoNotificationSubscriptionStateDto feishu_;
    bool feishuIsSet_;
    RepoNotificationSubscriptionStateDto dingding_;
    bool dingdingIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowNotificationSubscriptionsStatusResponse_H_
