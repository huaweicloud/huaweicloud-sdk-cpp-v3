
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPhotoDigitalHumanVideoResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPhotoDigitalHumanVideoResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/OutputAssetInfo.h>
#include <huaweicloud/metastudio/v1/model/PhotoVideoConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/DigitalHumanVideo.h>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowPhotoDigitalHumanVideoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPhotoDigitalHumanVideoResponse();
    virtual ~ShowPhotoDigitalHumanVideoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPhotoDigitalHumanVideoResponse members

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
    /// 人物照片，需要Base64编码。
    /// </summary>

    std::string getHumanImage() const;
    bool humanImageIsSet() const;
    void unsethumanImage();
    void setHumanImage(const std::string& value);

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

    PhotoVideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const PhotoVideoConfig& value);

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
    std::string humanImage_;
    bool humanImageIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    PhotoVideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::vector<ShootScriptItem> shootScripts_;
    bool shootScriptsIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPhotoDigitalHumanVideoResponse_H_
