
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Show2DDigitalHumanVideoResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Show2DDigitalHumanVideoResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/OutputAssetInfo.h>
#include <huaweicloud/metastudio/v1/model/VideoConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/DigitalHumanVideo.h>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/BackgroundMusicConfig.h>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <huaweicloud/metastudio/v1/model/ShootScriptItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  Show2DDigitalHumanVideoResponse
    : public ModelBase, public HttpResponse
{
public:
    Show2DDigitalHumanVideoResponse();
    virtual ~Show2DDigitalHumanVideoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Show2DDigitalHumanVideoResponse members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务的状态。 * WAITING：等待 * PROCESSING：处理中 * SUCCEED：成功 * FAILED：失败 * CANCELED：取消 * BLOCK: 冻结
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 任务类型。 * 2D_DIGITAL_HUMAN_VIDEO: 分身数字人视频制作任务 * DIGITAL_HUMAN_PHOTO_VIDEO: 照片数字人视频制作任务
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 数字人视频制作开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 数字人视频制作结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 数字人视频内容时长。
    /// </summary>

    float getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(float value);

    /// <summary>
    /// 
    /// </summary>

    OutputAssetInfo getOutputAssetConfig() const;
    bool outputAssetConfigIsSet() const;
    void unsetoutputAssetConfig();
    void setOutputAssetConfig(const OutputAssetInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务更新时间。
    /// </summary>

    std::string getLastupdateTime() const;
    bool lastupdateTimeIsSet() const;
    void unsetlastupdateTime();
    void setLastupdateTime(const std::string& value);

    /// <summary>
    /// 剧本ID。
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// 视频生成类型。该参数取值是MODEL时，model_asset_id必填；取值是PICTURE时，human_image必填。 * MODEL：通过分身数字人模型生成视频 * PICTURE： 通过单张照片生成视频 &gt; * 该参数已废弃，照片数字人视频制作使用“创建照片分身数字人视频制作任务”接口。
    /// </summary>

    std::string getVideoMakingType() const;
    bool videoMakingTypeIsSet() const;
    void unsetvideoMakingType();
    void setVideoMakingType(const std::string& value);

    /// <summary>
    /// 人物照片，需要Base64编码。 &gt; * 该参数已废弃，照片数字人视频制作使用“创建照片分身数字人视频制作任务”接口。
    /// </summary>

    std::string getHumanImage() const;
    bool humanImageIsSet() const;
    void unsethumanImage();
    void setHumanImage(const std::string& value);

    /// <summary>
    /// 分身数字人模型资产ID，可以从资产库中查询。
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VoiceConfig getVoiceConfig() const;
    bool voiceConfigIsSet() const;
    void unsetvoiceConfig();
    void setVoiceConfig(const VoiceConfig& value);

    /// <summary>
    /// 
    /// </summary>

    VideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const VideoConfig& value);

    /// <summary>
    /// 拍摄脚本列表。
    /// </summary>

    std::vector<ShootScriptItem>& getShootScripts();
    bool shootScriptsIsSet() const;
    void unsetshootScripts();
    void setShootScripts(const std::vector<ShootScriptItem>& value);

    /// <summary>
    /// 
    /// </summary>

    BackgroundMusicConfig getBackgroundMusicConfig() const;
    bool backgroundMusicConfigIsSet() const;
    void unsetbackgroundMusicConfig();
    void setBackgroundMusicConfig(const BackgroundMusicConfig& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    float duration_;
    bool durationIsSet_;
    OutputAssetInfo outputAssetConfig_;
    bool outputAssetConfigIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastupdateTime_;
    bool lastupdateTimeIsSet_;
    std::string scriptId_;
    bool scriptIdIsSet_;
    std::string videoMakingType_;
    bool videoMakingTypeIsSet_;
    std::string humanImage_;
    bool humanImageIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    VideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::vector<ShootScriptItem> shootScripts_;
    bool shootScriptsIsSet_;
    BackgroundMusicConfig backgroundMusicConfig_;
    bool backgroundMusicConfigIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Show2DDigitalHumanVideoResponse_H_
