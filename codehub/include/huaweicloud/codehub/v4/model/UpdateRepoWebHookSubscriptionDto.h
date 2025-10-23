
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepoWebHookSubscriptionDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepoWebHookSubscriptionDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateRepoWebHookSubscriptionDto
    : public ModelBase
{
public:
    UpdateRepoWebHookSubscriptionDto();
    virtual ~UpdateRepoWebHookSubscriptionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepoWebHookSubscriptionDto members

    /// <summary>
    /// **参数解释：** webhook的url (需要base64编码)。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// **参数解释：** userid列表，提醒群中的指定成员（@某个成员），最长1000，每个最长100，“;”分隔符。
    /// </summary>

    std::string getMentionUsers() const;
    bool mentionUsersIsSet() const;
    void unsetmentionUsers();
    void setMentionUsers(const std::string& value);

    /// <summary>
    /// **参数解释：** 手机号列表(需要base64编码)，提醒手机号对应的群成员（@某个成员），最长1000，每个最长30，“;”分隔符。
    /// </summary>

    std::string getMentionPhone() const;
    bool mentionPhoneIsSet() const;
    void unsetmentionPhone();
    void setMentionPhone(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::string token_;
    bool tokenIsSet_;
    std::string mentionUsers_;
    bool mentionUsersIsSet_;
    std::string mentionPhone_;
    bool mentionPhoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepoWebHookSubscriptionDto_H_
