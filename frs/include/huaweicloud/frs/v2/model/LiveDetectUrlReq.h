
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectUrlReq_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectUrlReq_H_

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
class HUAWEICLOUD_FRS_V2_EXPORT  LiveDetectUrlReq
    : public ModelBase
{
public:
    LiveDetectUrlReq();
    virtual ~LiveDetectUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LiveDetectUrlReq members

    /// <summary>
    /// 该参数为动作时间数组拼接的字符串，数组的长度和actions的数量一致，每一项代表了对应次序动作的起始时间和结束时间，单位为距视频开始的毫秒数。
    /// </summary>

    std::string getActionTime() const;
    bool actionTimeIsSet() const;
    void unsetactionTime();
    void setActionTime(const std::string& value);

    /// <summary>
    /// [视频的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。 开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/api-face/face_02_0006.html)。视频要求： • 视频Base64编码后大小不超过8MB。 • 限制视频时长1～15秒。 • 建议帧率10fps～30fps。 • 封装格式：mp4、avi、flv、webm、asf、mov。 • 视频编码格式： h261、h263、h264、hevc、vc1、vp8、vp9、wmv3。](tag:hc) [视频的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。           开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0006.html)。视频要求：           • 视频Base64编码后大小不超过8MB。           • 限制视频时长1～15秒。           • 建议帧率10fps～30fps。           • 封装格式：mp4、avi、flv、webm、asf、mov。           • 视频编码格式： h261、h263、h264、hevc、vc1、vp8、vp9、wmv3。](tag:hk)
    /// </summary>

    std::string getVideoUrl() const;
    bool videoUrlIsSet() const;
    void unsetvideoUrl();
    void setVideoUrl(const std::string& value);

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
    std::string videoUrl_;
    bool videoUrlIsSet_;
    std::string actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectUrlReq_H_
