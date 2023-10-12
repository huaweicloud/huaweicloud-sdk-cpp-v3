
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ModifyTransTemplateGroup_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ModifyTransTemplateGroup_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/Common.h>
#include <huaweicloud/mpc/v1/model/VideoObj.h>
#include <huaweicloud/mpc/v1/model/Audio.h>
#include <string>
#include <huaweicloud/mpc/v1/model/VideoCommon.h>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  ModifyTransTemplateGroup
    : public ModelBase
{
public:
    ModifyTransTemplateGroup();
    virtual ~ModifyTransTemplateGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyTransTemplateGroup members

    /// <summary>
    /// 模板组ID 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 模板组名称 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 视频信息列表 
    /// </summary>

    std::vector<VideoObj>& getVideos();
    bool videosIsSet() const;
    void unsetvideos();
    void setVideos(const std::vector<VideoObj>& value);

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

    VideoCommon getVideoCommon() const;
    bool videoCommonIsSet() const;
    void unsetvideoCommon();
    void setVideoCommon(const VideoCommon& value);

    /// <summary>
    /// 
    /// </summary>

    Common getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const Common& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<VideoObj> videos_;
    bool videosIsSet_;
    Audio audio_;
    bool audioIsSet_;
    VideoCommon videoCommon_;
    bool videoCommonIsSet_;
    Common common_;
    bool commonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ModifyTransTemplateGroup_H_
