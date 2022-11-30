
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectBase64Req_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectBase64Req_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  LiveDetectBase64Req
    : public ModelBase
{
public:
    LiveDetectBase64Req();
    virtual ~LiveDetectBase64Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LiveDetectBase64Req members

    /// <summary>
    /// 该参数为动作时间数组拼接的字符串，数组的长度和actions的数量一致，每一项代表了对应次序动作的起始时间和结束时间，单位为距视频开始的毫秒数。
    /// </summary>

    std::string getActionTime() const;
    bool actionTimeIsSet() const;
    void unsetactionTime();
    void setActionTime(const std::string& value);

    /// <summary>
    /// 视频数据，Base64编码，要求： • Base64编码后大小不超过8MB，建议客户端压缩到200KB~2MB。 • 限制视频时长1～15秒。 • 建议帧率10fps～30fps。 • 封装格式：mp4、avi、flv、webm、asf、mov。 • 视频编码格式： h261、h263、h264、hevc、vc1、vp8、vp9、wmv3。
    /// </summary>

    std::string getVideoBase64() const;
    bool videoBase64IsSet() const;
    void unsetvideoBase64();
    void setVideoBase64(const std::string& value);

    /// <summary>
    /// 动作代码顺序列表，英文逗号（,）分隔。建议单动作，目前支持的动作有： • 1：左摇头 • 2：右摇头 • 3：点头 • 4：嘴部动作
    /// </summary>

    std::string getActions() const;
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::string& value);


protected:
    std::string actionTime_;
    bool actionTimeIsSet_;
    std::string videoBase64_;
    bool videoBase64IsSet_;
    std::string actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectBase64Req_H_
