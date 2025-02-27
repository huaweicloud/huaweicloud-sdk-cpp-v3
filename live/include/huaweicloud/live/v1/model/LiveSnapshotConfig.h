
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_LiveSnapshotConfig_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_LiveSnapshotConfig_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/ObsFileAddr.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  LiveSnapshotConfig
    : public ModelBase
{
public:
    LiveSnapshotConfig();
    virtual ~LiveSnapshotConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveSnapshotConfig members

    /// <summary>
    /// 直播推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 回调鉴权密钥值  长度范围：[32-128]  若需要使用回调鉴权功能，请配置鉴权密钥，否则，留空即可。
    /// </summary>

    std::string getAuthKey() const;
    bool authKeyIsSet() const;
    void unsetauthKey();
    void setAuthKey(const std::string& value);

    /// <summary>
    /// 截图频率  取值范围：[5-3600]  单位：秒
    /// </summary>

    int32_t getTimeInterval() const;
    bool timeIntervalIsSet() const;
    void unsettimeInterval();
    void setTimeInterval(int32_t value);

    /// <summary>
    /// 在OBS桶存储截图的方式：  - 0：实时截图，以时间戳命名截图文件，保存所有截图文件到OBS桶。例：snapshot/{domain}/{app_name}/{stream_name}/{UnixTimestamp}.jpg  - 1：覆盖截图，只保存最新的截图文件，新的截图会覆盖原来的截图文件。例：snapshot/{domain}/{app_name}/{stream_name}.jpg
    /// </summary>

    int32_t getObjectWriteMode() const;
    bool objectWriteModeIsSet() const;
    void unsetobjectWriteMode();
    void setObjectWriteMode(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ObsFileAddr getObsLocation() const;
    bool obsLocationIsSet() const;
    void unsetobsLocation();
    void setObsLocation(const ObsFileAddr& value);

    /// <summary>
    /// 是否启用回调通知 - on：启用。 - off：不启用。
    /// </summary>

    std::string getCallBackEnable() const;
    bool callBackEnableIsSet() const;
    void unsetcallBackEnable();
    void setCallBackEnable(const std::string& value);

    /// <summary>
    /// 通知服务器地址，必须是合法的URL且携带协议，协议支持http和https。截图完成后直播服务会向此地址推送截图状态信息。
    /// </summary>

    std::string getCallBackUrl() const;
    bool callBackUrlIsSet() const;
    void unsetcallBackUrl();
    void setCallBackUrl(const std::string& value);

    /// <summary>
    /// 截图存储文件访问协议， 仅支持http、https格式
    /// </summary>

    std::string getImageAccessProtocol() const;
    bool imageAccessProtocolIsSet() const;
    void unsetimageAccessProtocol();
    void setImageAccessProtocol(const std::string& value);

    /// <summary>
    /// 截图存储文件访问域名
    /// </summary>

    std::string getImageAccessDomain() const;
    bool imageAccessDomainIsSet() const;
    void unsetimageAccessDomain();
    void setImageAccessDomain(const std::string& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string authKey_;
    bool authKeyIsSet_;
    int32_t timeInterval_;
    bool timeIntervalIsSet_;
    int32_t objectWriteMode_;
    bool objectWriteModeIsSet_;
    ObsFileAddr obsLocation_;
    bool obsLocationIsSet_;
    std::string callBackEnable_;
    bool callBackEnableIsSet_;
    std::string callBackUrl_;
    bool callBackUrlIsSet_;
    std::string imageAccessProtocol_;
    bool imageAccessProtocolIsSet_;
    std::string imageAccessDomain_;
    bool imageAccessDomainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_LiveSnapshotConfig_H_
