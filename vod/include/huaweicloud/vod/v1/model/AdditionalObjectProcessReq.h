
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AdditionalObjectProcessReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AdditionalObjectProcessReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <huaweicloud/vod/v1/model/WatermarkRequest.h>
#include <huaweicloud/vod/v1/model/ObjectThumbnailTask.h>
#include <string>
#include <huaweicloud/vod/v1/model/ObjectImageSpriteTask.h>
#include <huaweicloud/vod/v1/model/ObjectTranscodeTask.h>
#include <huaweicloud/vod/v1/model/VideoProcess.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  AdditionalObjectProcessReq
    : public ModelBase
{
public:
    AdditionalObjectProcessReq();
    virtual ~AdditionalObjectProcessReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdditionalObjectProcessReq members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsInfo& value);

    /// <summary>
    /// 转码任务列表 
    /// </summary>

    std::vector<ObjectTranscodeTask>& getTranscodeTask();
    bool transcodeTaskIsSet() const;
    void unsettranscodeTask();
    void setTranscodeTask(const std::vector<ObjectTranscodeTask>& value);

    /// <summary>
    /// 水印设置 
    /// </summary>

    std::vector<WatermarkRequest>& getWatermarks();
    bool watermarksIsSet() const;
    void unsetwatermarks();
    void setWatermarks(const std::vector<WatermarkRequest>& value);

    /// <summary>
    /// 转码任务列表 
    /// </summary>

    std::vector<ObjectThumbnailTask>& getThumbnailTask();
    bool thumbnailTaskIsSet() const;
    void unsetthumbnailTask();
    void setThumbnailTask(const std::vector<ObjectThumbnailTask>& value);

    /// <summary>
    /// 转码任务列表 
    /// </summary>

    std::vector<ObjectImageSpriteTask>& getImageSpriteTask();
    bool imageSpriteTaskIsSet() const;
    void unsetimageSpriteTask();
    void setImageSpriteTask(const std::vector<ObjectImageSpriteTask>& value);

    /// <summary>
    /// 
    /// </summary>

    VideoProcess getVideoProcess() const;
    bool videoProcessIsSet() const;
    void unsetvideoProcess();
    void setVideoProcess(const VideoProcess& value);

    /// <summary>
    /// 回调url 
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 自定义上下文，回调时会回调给用户，透传信息
    /// </summary>

    std::string getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const std::string& value);


protected:
    ObsInfo output_;
    bool outputIsSet_;
    std::vector<ObjectTranscodeTask> transcodeTask_;
    bool transcodeTaskIsSet_;
    std::vector<WatermarkRequest> watermarks_;
    bool watermarksIsSet_;
    std::vector<ObjectThumbnailTask> thumbnailTask_;
    bool thumbnailTaskIsSet_;
    std::vector<ObjectImageSpriteTask> imageSpriteTask_;
    bool imageSpriteTaskIsSet_;
    VideoProcess videoProcess_;
    bool videoProcessIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string sessionContext_;
    bool sessionContextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AdditionalObjectProcessReq_H_
