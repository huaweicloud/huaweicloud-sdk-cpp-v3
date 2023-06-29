
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AvParameters_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AvParameters_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/Common.h>
#include <huaweicloud/mpc/v1/model/VideoParameters.h>
#include <huaweicloud/mpc/v1/model/Audio.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  AvParameters
    : public ModelBase
{
public:
    AvParameters();
    virtual ~AvParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AvParameters members

    /// <summary>
    /// 
    /// </summary>

    VideoParameters getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const VideoParameters& value);

    /// <summary>
    /// 
    /// </summary>

    Audio getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const Audio& value);

    /// <summary>
    /// 
    /// </summary>

    Common getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const Common& value);


protected:
    VideoParameters video_;
    bool videoIsSet_;
    Audio audio_;
    bool audioIsSet_;
    Common common_;
    bool commonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AvParameters_H_
