
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVideoScriptResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVideoScriptResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ActionConfig.h>
#include <huaweicloud/metastudio/v1/model/VideoConfig.h>
#include <huaweicloud/metastudio/v1/model/VideoScriptsShowInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ShootScriptAudioFiles.h>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/BackgroundMusicConfig.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <vector>
#include <huaweicloud/metastudio/v1/model/ShootScriptShowItem.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowVideoScriptResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVideoScriptResponse();
    virtual ~ShowVideoScriptResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVideoScriptResponse members

    /// <summary>
    /// **参数解释**： 剧本名称。 **约束限制**： 不涉及。 **取值范围**： 只能使用中英文字符，字符长度1-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getScriptName() const;
    bool scriptNameIsSet() const;
    void unsetscriptName();
    void setScriptName(const std::string& value);

    /// <summary>
    /// **参数解释**： 剧本描述。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-1024位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getScriptDescription() const;
    bool scriptDescriptionIsSet() const;
    void unsetscriptDescription();
    void setScriptDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 横竖屏类型。 **约束限制**： 不涉及。 **取值范围**： * LANDSCAPE：横屏。 * VERTICAL：竖屏。
    /// </summary>

    std::string getViewMode() const;
    bool viewModeIsSet() const;
    void unsetviewMode();
    void setViewMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 数字人模型资产ID。 **约束限制**： 不涉及 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 数字人模型类型。 **约束限制**： 不涉及 **取值范围**： * HUMAN_MODEL_2D：分身数字人 * HUMAN_MODEL_3D：3D数字人  **默认取值**： 不涉及
    /// </summary>

    std::string getModelAssetType() const;
    bool modelAssetTypeIsSet() const;
    void unsetmodelAssetType();
    void setModelAssetType(const std::string& value);

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
    /// **参数解释**： 场景资产ID。 **约束限制**： 分身数字人视频制作不需要填写该参数。 **取值范围**： 字符长度0-64位 **默认取值**： 不涉及
    /// </summary>

    std::string getSceneAssetId() const;
    bool sceneAssetIdIsSet() const;
    void unsetsceneAssetId();
    void setSceneAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 私有数据，用户填写，原样带回。 **约束限制**： 不涉及 **取值范围**： 字符长度0-8192位 **默认取值**： 不涉及
    /// </summary>

    std::string getPrivData() const;
    bool privDataIsSet() const;
    void unsetprivData();
    void setPrivData(const std::string& value);

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

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ShootScriptAudioFiles getAudioFiles() const;
    bool audioFilesIsSet() const;
    void unsetaudioFiles();
    void setAudioFiles(const ShootScriptAudioFiles& value);

    /// <summary>
    /// 
    /// </summary>

    ActionConfig getActionConfig() const;
    bool actionConfigIsSet() const;
    void unsetactionConfig();
    void setActionConfig(const ActionConfig& value);

    /// <summary>
    /// 拍摄脚本列表。
    /// </summary>

    std::vector<ShootScriptShowItem>& getShootScripts();
    bool shootScriptsIsSet() const;
    void unsetshootScripts();
    void setShootScripts(const std::vector<ShootScriptShowItem>& value);

    /// <summary>
    /// 剧本ID。
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 剧本封面下载url。
    /// </summary>

    std::string getScriptCoverUrl() const;
    bool scriptCoverUrlIsSet() const;
    void unsetscriptCoverUrl();
    void setScriptCoverUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string scriptName_;
    bool scriptNameIsSet_;
    std::string scriptDescription_;
    bool scriptDescriptionIsSet_;
    std::string viewMode_;
    bool viewModeIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    std::string modelAssetType_;
    bool modelAssetTypeIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    VideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::string sceneAssetId_;
    bool sceneAssetIdIsSet_;
    std::string privData_;
    bool privDataIsSet_;
    BackgroundMusicConfig backgroundMusicConfig_;
    bool backgroundMusicConfigIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;
    ShootScriptAudioFiles audioFiles_;
    bool audioFilesIsSet_;
    ActionConfig actionConfig_;
    bool actionConfigIsSet_;
    std::vector<ShootScriptShowItem> shootScripts_;
    bool shootScriptsIsSet_;
    std::string scriptId_;
    bool scriptIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string scriptCoverUrl_;
    bool scriptCoverUrlIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVideoScriptResponse_H_
