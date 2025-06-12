
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCUserInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCUserInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 接入RTC的用户信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RTCUserInfo
    : public ModelBase
{
public:
    RTCUserInfo();
    virtual ~RTCUserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RTCUserInfo members

    /// <summary>
    /// 用户类型。 * CAPTURE: 直播助手，将摄像头获取视频流推送到RTC房间 * ANIMATION: VDS服务，从RTC房间拉视频流生成动作数据 * RENDER: 渲染服务，将动作数据渲染成数字人动画 * PLAYER: 普通观看方，可选择原始视频流或者数字人动画视频流观看 * INFERENCE_USER: 数字人推理端用户。从RTC房间接收音频流，并推送视频流到RTC房间 * END_USER: 端侧用户。从推送音频流到RTC房间，并从RTC房间接收视频流
    /// </summary>

    std::string getUserType() const;
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(const std::string& value);

    /// <summary>
    /// RTC用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// RTC鉴权token。
    /// </summary>

    std::string getSignature() const;
    bool signatureIsSet() const;
    void unsetsignature();
    void setSignature(const std::string& value);

    /// <summary>
    /// 有效期。时间戳，单位：秒。
    /// </summary>

    int64_t getCtime() const;
    bool ctimeIsSet() const;
    void unsetctime();
    void setCtime(int64_t value);


protected:
    std::string userType_;
    bool userTypeIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string signature_;
    bool signatureIsSet_;
    int64_t ctime_;
    bool ctimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCUserInfo_H_
