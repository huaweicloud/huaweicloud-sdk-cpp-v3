
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_WebHookConfigRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_WebHookConfigRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议推送参数配置请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  WebHookConfigRequest
    : public ModelBase
{
public:
    WebHookConfigRequest();
    virtual ~WebHookConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WebHookConfigRequest members

    /// <summary>
    /// 企业ID。按企业注册回调时需要填写。
    /// </summary>

    std::string getCorpId() const;
    bool corpIdIsSet() const;
    void unsetcorpId();
    void setCorpId(const std::string& value);

    /// <summary>
    /// SP ID。多租户场景下，按SP注册回调时需要填写。
    /// </summary>

    std::string getSpId() const;
    bool spIdIsSet() const;
    void unsetspId();
    void setSpId(const std::string& value);

    /// <summary>
    /// 订阅者ID。
    /// </summary>

    std::string getSubscriberId() const;
    bool subscriberIdIsSet() const;
    void unsetsubscriberId();
    void setSubscriberId(const std::string& value);

    /// <summary>
    /// 订阅者秘钥。
    /// </summary>

    std::string getSubscriberKey() const;
    bool subscriberKeyIsSet() const;
    void unsetsubscriberKey();
    void setSubscriberKey(const std::string& value);

    /// <summary>
    /// 订阅url。 &gt; 必须使用HTTPS。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string corpId_;
    bool corpIdIsSet_;
    std::string spId_;
    bool spIdIsSet_;
    std::string subscriberId_;
    bool subscriberIdIsSet_;
    std::string subscriberKey_;
    bool subscriberKeyIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_WebHookConfigRequest_H_
