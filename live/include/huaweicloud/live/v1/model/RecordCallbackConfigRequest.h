
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordCallbackConfigRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordCallbackConfigRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  RecordCallbackConfigRequest
    : public ModelBase
{
public:
    RecordCallbackConfigRequest();
    virtual ~RecordCallbackConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecordCallbackConfigRequest members

    /// <summary>
    /// 直播推流域名
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// app名称。如果需要匹配任意应用则需填写*。录制规则匹配的时候，优先精确app匹配，如果匹配不到，则匹配*
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 录制回调通知url地址
    /// </summary>

    std::string getNotifyCallbackUrl() const;
    bool notifyCallbackUrlIsSet() const;
    void unsetnotifyCallbackUrl();
    void setNotifyCallbackUrl(const std::string& value);

    /// <summary>
    /// 订阅录制通知消息。消息类型。RECORD_NEW_FILE_START开始创建新的录制文件。RECORD_FILE_COMPLETE录制文件生成完成。RECORD_OVER录制结束。RECORD_FAILED表示录制失败。如果不填写,默认订阅RECORD_FILE_COMPLETE
    /// </summary>

    std::vector<std::string>& getNotifyEventSubscription();
    bool notifyEventSubscriptionIsSet() const;
    void unsetnotifyEventSubscription();
    void setNotifyEventSubscription(const std::vector<std::string>& value);

    /// <summary>
    /// 加密类型
    /// </summary>

    std::string getSignType() const;
    bool signTypeIsSet() const;
    void unsetsignType();
    void setSignType(const std::string& value);

    /// <summary>
    /// 回调秘钥，主要用于鉴权。为了保护用户数据信息安全，建议填写。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string publishDomain_;
    bool publishDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string notifyCallbackUrl_;
    bool notifyCallbackUrlIsSet_;
    std::vector<std::string> notifyEventSubscription_;
    bool notifyEventSubscriptionIsSet_;
    std::string signType_;
    bool signTypeIsSet_;
    std::string key_;
    bool keyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordCallbackConfigRequest_H_
