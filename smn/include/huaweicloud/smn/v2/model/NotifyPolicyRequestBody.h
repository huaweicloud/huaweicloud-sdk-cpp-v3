
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_NotifyPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_NotifyPolicyRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/PollingPolicyRequest.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 通知策略请求体
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  NotifyPolicyRequestBody
    : public ModelBase
{
public:
    NotifyPolicyRequestBody();
    virtual ~NotifyPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotifyPolicyRequestBody members

    /// <summary>
    /// 通知策略类型，当前仅支持语音。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 轮询策略订阅终端。
    /// </summary>

    std::vector<PollingPolicyRequest>& getPolling();
    bool pollingIsSet() const;
    void unsetpolling();
    void setPolling(const std::vector<PollingPolicyRequest>& value);


protected:
    std::string protocol_;
    bool protocolIsSet_;
    std::vector<PollingPolicyRequest> polling_;
    bool pollingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_NotifyPolicyRequestBody_H_
