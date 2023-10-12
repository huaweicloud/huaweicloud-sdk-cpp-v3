
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_QualityEnhanceVideo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_QualityEnhanceVideo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/VideoSaturation.h>
#include <huaweicloud/mpc/v1/model/VideoSuperresolution.h>
#include <huaweicloud/mpc/v1/model/VideoDeblock.h>
#include <huaweicloud/mpc/v1/model/VideoContrast.h>
#include <huaweicloud/mpc/v1/model/VideoSharp.h>
#include <huaweicloud/mpc/v1/model/VideoDenoise.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  QualityEnhanceVideo
    : public ModelBase
{
public:
    QualityEnhanceVideo();
    virtual ~QualityEnhanceVideo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QualityEnhanceVideo members

    /// <summary>
    /// 
    /// </summary>

    VideoDenoise getVideoDenoise() const;
    bool videoDenoiseIsSet() const;
    void unsetvideoDenoise();
    void setVideoDenoise(const VideoDenoise& value);

    /// <summary>
    /// 
    /// </summary>

    VideoSharp getVideoSharp() const;
    bool videoSharpIsSet() const;
    void unsetvideoSharp();
    void setVideoSharp(const VideoSharp& value);

    /// <summary>
    /// 
    /// </summary>

    VideoContrast getVideoContrast() const;
    bool videoContrastIsSet() const;
    void unsetvideoContrast();
    void setVideoContrast(const VideoContrast& value);

    /// <summary>
    /// 
    /// </summary>

    VideoSuperresolution getVideoSuperresolution() const;
    bool videoSuperresolutionIsSet() const;
    void unsetvideoSuperresolution();
    void setVideoSuperresolution(const VideoSuperresolution& value);

    /// <summary>
    /// 
    /// </summary>

    VideoDeblock getVideoDeblock() const;
    bool videoDeblockIsSet() const;
    void unsetvideoDeblock();
    void setVideoDeblock(const VideoDeblock& value);

    /// <summary>
    /// 
    /// </summary>

    VideoSaturation getVideoSaturation() const;
    bool videoSaturationIsSet() const;
    void unsetvideoSaturation();
    void setVideoSaturation(const VideoSaturation& value);


protected:
    VideoDenoise videoDenoise_;
    bool videoDenoiseIsSet_;
    VideoSharp videoSharp_;
    bool videoSharpIsSet_;
    VideoContrast videoContrast_;
    bool videoContrastIsSet_;
    VideoSuperresolution videoSuperresolution_;
    bool videoSuperresolutionIsSet_;
    VideoDeblock videoDeblock_;
    bool videoDeblockIsSet_;
    VideoSaturation videoSaturation_;
    bool videoSaturationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_QualityEnhanceVideo_H_
