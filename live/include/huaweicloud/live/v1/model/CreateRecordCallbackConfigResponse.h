
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordCallbackConfigResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordCallbackConfigResponse_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateRecordCallbackConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateRecordCallbackConfigResponse();
    virtual ~CreateRecordCallbackConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateRecordCallbackConfigResponse members

    /// <summary>
    /// 配置id，由服务端返回。创建或修改的时候不携带
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 直播推流域名
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// app名称。如果匹配任意需填写为*。录制规则匹配的时候，优先精确app匹配，如果匹配不到，则匹配*
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
    /// 创建时间，格式：yyyy-mm-ddThh:mm:ssZ，UTC时间。 在查询的时候返回
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 修改时间，格式：yyyy-mm-ddThh:mm:ssZ，UTC时间。 在查询的时候返回
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
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
    utility::datetime createTime_;
    bool createTimeIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateRecordCallbackConfigResponse_H_
