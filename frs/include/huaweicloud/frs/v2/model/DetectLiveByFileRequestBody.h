
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByFileRequestBody_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByFileRequestBody_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/utils/HttpContent.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveByFileRequestBody
    : public ModelBase
{
public:
    DetectLiveByFileRequestBody();
    virtual ~DetectLiveByFileRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetectLiveByFileRequestBody members

    /// <summary>
    /// 本地视频文件。上传文件时，请求格式为multipart。 视频要求： • 视频文件大小不超过8MB，建议客户端压缩到200KB~2MB。 • 限制视频时长1～15秒。 • 建议帧率10fps～30fps。 • 封装格式：mp4、avi、flv、webm、asf、mov。 • 视频编码格式： h261、h263、h264、hevc、vc1、vp8、vp9、wmv3。
    /// </summary>

    HttpContent getVideoFile() const;
    bool videoFileIsSet() const;
    void unsetvideoFile();
    void setVideoFile(const HttpContent& value);

    /// <summary>
    /// 动作代码顺序列表，英文逗号（,）分隔。建议单动作，目前支持的动作有： • 1：左摇头 • 2：右摇头 • 3：点头 • 4：嘴部动作 • 5：眨眼
    /// </summary>

    std::string getActions() const;
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::string& value);

    /// <summary>
    /// 该参数为动作时间数组拼接的字符串，数组的长度和actions的数量一致，每一项代表了对应次序动作的起始时间和结束时间，单位为距视频开始的毫秒数。
    /// </summary>

    std::string getActionTime() const;
    bool actionTimeIsSet() const;
    void unsetactionTime();
    void setActionTime(const std::string& value);

    /// <summary>
    /// 该参数为点头动作幅度的判断门限，取值范围：[1,90]，默认为10，单位为度。该值设置越大，则越难判断为点头。
    /// </summary>

    double getNodThreshold() const;
    bool nodThresholdIsSet() const;
    void unsetnodThreshold();
    void setNodThreshold(double value);


protected:
    HttpContent videoFile_;
    bool videoFileIsSet_;
    std::string actions_;
    bool actionsIsSet_;
    std::string actionTime_;
    bool actionTimeIsSet_;
    double nodThreshold_;
    bool nodThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByFileRequestBody_H_
