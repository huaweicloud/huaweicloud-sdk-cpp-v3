
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_SubscriptionInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_SubscriptionInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 收件方式与信息体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  SubscriptionInfo
    : public ModelBase
{
public:
    SubscriptionInfo();
    virtual ~SubscriptionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscriptionInfo members

    /// <summary>
    /// **参数解释**：  手机号或者邮箱列表，用于接收异常告警通知的联系方式。  **约束限制**：  - 最多支持10个。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<std::string>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  收件方式，指定异常告警的通知渠道。  **约束限制**：  不涉及。  **取值范围**：  - sms：短信 - email：邮件  **默认取值**：  不涉及
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


protected:
    std::vector<std::string> endpoints_;
    bool endpointsIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_SubscriptionInfo_H_
