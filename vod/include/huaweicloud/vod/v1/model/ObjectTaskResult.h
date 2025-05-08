
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectTaskResult_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectTaskResult_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TranscodeTask.h>
#include <string>
#include <huaweicloud/vod/v1/model/ThumbnailTask.h>
#include <huaweicloud/vod/v1/model/ImageSpriteTask.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  ObjectTaskResult
    : public ModelBase
{
public:
    ObjectTaskResult();
    virtual ~ObjectTaskResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectTaskResult members

    /// <summary>
    /// 工作流中任务类型
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TranscodeTask getTranscodeTask() const;
    bool transcodeTaskIsSet() const;
    void unsettranscodeTask();
    void setTranscodeTask(const TranscodeTask& value);

    /// <summary>
    /// 
    /// </summary>

    ThumbnailTask getThumbnailTask() const;
    bool thumbnailTaskIsSet() const;
    void unsetthumbnailTask();
    void setThumbnailTask(const ThumbnailTask& value);

    /// <summary>
    /// 
    /// </summary>

    ImageSpriteTask getImageSpriteTask() const;
    bool imageSpriteTaskIsSet() const;
    void unsetimageSpriteTask();
    void setImageSpriteTask(const ImageSpriteTask& value);


protected:
    std::string taskType_;
    bool taskTypeIsSet_;
    TranscodeTask transcodeTask_;
    bool transcodeTaskIsSet_;
    ThumbnailTask thumbnailTask_;
    bool thumbnailTaskIsSet_;
    ImageSpriteTask imageSpriteTask_;
    bool imageSpriteTaskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectTaskResult_H_
