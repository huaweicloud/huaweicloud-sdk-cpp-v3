
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveNotifyConfigReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveNotifyConfigReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/NotifyEventEnum.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播通知配置。通过短信，邮件，站内信通知用户直播中断。用户可在华为云消息中心配置接受者信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveNotifyConfigReq
    : public ModelBase
{
public:
    LiveNotifyConfigReq();
    virtual ~LiveNotifyConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveNotifyConfigReq members

    /// <summary>
    /// 确认操作。 * add: 增加。 * del: 删除。 * replace：替换。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**： 启用通知事件列表。 **约束限制**： 不涉及 **默认取值**： 无。
    /// </summary>

    std::vector<NotifyEventEnum>& getNotifyEvents();
    bool notifyEventsIsSet() const;
    void unsetnotifyEvents();
    void setNotifyEvents(const std::vector<NotifyEventEnum>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<NotifyEventEnum> notifyEvents_;
    bool notifyEventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveNotifyConfigReq_H_
