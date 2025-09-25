
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepoNotificationSubscriptionDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepoNotificationSubscriptionDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/RepoSubscriptionEventDto.h>
#include <huaweicloud/codehub/v4/model/UpdateRepoWebHookSubscriptionDto.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateRepoNotificationSubscriptionDto
    : public ModelBase
{
public:
    UpdateRepoNotificationSubscriptionDto();
    virtual ~UpdateRepoNotificationSubscriptionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepoNotificationSubscriptionDto members

    /// <summary>
    /// **参数解释：** 开启通知。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释：** 配资源。
    /// </summary>

    std::string getConfigSource() const;
    bool configSourceIsSet() const;
    void unsetconfigSource();
    void setConfigSource(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateRepoWebHookSubscriptionDto getWebhookConfig() const;
    bool webhookConfigIsSet() const;
    void unsetwebhookConfig();
    void setWebhookConfig(const UpdateRepoWebHookSubscriptionDto& value);

    /// <summary>
    /// **参数解释：** 仓库使用量告警阀值（百分比）。
    /// </summary>

    int32_t getWaringRepoUsageRate() const;
    bool waringRepoUsageRateIsSet() const;
    void unsetwaringRepoUsageRate();
    void setWaringRepoUsageRate(int32_t value);

    /// <summary>
    /// **参数解释：** 通知事件。
    /// </summary>

    std::vector<RepoSubscriptionEventDto>& getSubscriptEvents();
    bool subscriptEventsIsSet() const;
    void unsetsubscriptEvents();
    void setSubscriptEvents(const std::vector<RepoSubscriptionEventDto>& value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    std::string configSource_;
    bool configSourceIsSet_;
    UpdateRepoWebHookSubscriptionDto webhookConfig_;
    bool webhookConfigIsSet_;
    int32_t waringRepoUsageRate_;
    bool waringRepoUsageRateIsSet_;
    std::vector<RepoSubscriptionEventDto> subscriptEvents_;
    bool subscriptEventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepoNotificationSubscriptionDto_H_
