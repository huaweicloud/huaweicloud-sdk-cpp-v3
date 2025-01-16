
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowNotifyPolicyResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowNotifyPolicyResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/PollingPolicyResponse.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ShowNotifyPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNotifyPolicyResponse();
    virtual ~ShowNotifyPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNotifyPolicyResponse members

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 通知策略ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

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

    std::vector<PollingPolicyResponse>& getPolling();
    bool pollingIsSet() const;
    void unsetpolling();
    void setPolling(const std::vector<PollingPolicyResponse>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::vector<PollingPolicyResponse> polling_;
    bool pollingIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowNotifyPolicyResponse_H_
