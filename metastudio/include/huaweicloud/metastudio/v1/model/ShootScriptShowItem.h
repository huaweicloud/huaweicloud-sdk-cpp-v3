
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptShowItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptShowItem_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AudioInfo.h>
#include <huaweicloud/metastudio/v1/model/ShootScriptItemBaseInfo.h>
#include <huaweicloud/metastudio/v1/model/PreviewInfo.h>
#include <huaweicloud/metastudio/v1/model/ShootScriptDetail.h>
#include <huaweicloud/metastudio/v1/model/SubtitleFiles.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 剧本参数配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShootScriptShowItem
    : public ModelBase
{
public:
    ShootScriptShowItem();
    virtual ~ShootScriptShowItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShootScriptShowItem members

    /// <summary>
    /// **参数解释**： 剧本序号。 **约束限制**： 同一个剧本序号不重复。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ShootScriptDetail getShootScript() const;
    bool shootScriptIsSet() const;
    void unsetshootScript();
    void setShootScript(const ShootScriptDetail& value);

    /// <summary>
    /// 
    /// </summary>

    SubtitleFiles getSubtitleFileInfo() const;
    bool subtitleFileInfoIsSet() const;
    void unsetsubtitleFileInfo();
    void setSubtitleFileInfo(const SubtitleFiles& value);

    /// <summary>
    /// 
    /// </summary>

    AudioInfo getAudioConfig() const;
    bool audioConfigIsSet() const;
    void unsetaudioConfig();
    void setAudioConfig(const AudioInfo& value);

    /// <summary>
    /// 
    /// </summary>

    PreviewInfo getPreviewInfo() const;
    bool previewInfoIsSet() const;
    void unsetpreviewInfo();
    void setPreviewInfo(const PreviewInfo& value);


protected:
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    ShootScriptDetail shootScript_;
    bool shootScriptIsSet_;
    SubtitleFiles subtitleFileInfo_;
    bool subtitleFileInfoIsSet_;
    AudioInfo audioConfig_;
    bool audioConfigIsSet_;
    PreviewInfo previewInfo_;
    bool previewInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptShowItem_H_
