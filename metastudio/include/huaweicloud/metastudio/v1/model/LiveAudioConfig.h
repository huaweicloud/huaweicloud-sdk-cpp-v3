
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveAudioConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveAudioConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播音频配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveAudioConfig
    : public ModelBase
{
public:
    LiveAudioConfig();
    virtual ~LiveAudioConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveAudioConfig members

    /// <summary>
    /// **参数解释**： 插入音频资产的资产id，外部资产信息无需填写。若填写，可以从资产库中查询。 **约束限制**： 不涉及 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 音频URL。 **约束限制**： 仅支持MP3格式，大小&lt;100MB。输出会自动转化为单声道16KHZ采样。 **取值范围**： 字符长度0-2048位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAudioUrl() const;
    bool audioUrlIsSet() const;
    void unsetaudioUrl();
    void setAudioUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 音频对应的字幕文件URL。 **约束限制**： 仅SRT格式，大小&lt;1MB。 **取值范围**： 字符长度0-2048位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSubtitleUrl() const;
    bool subtitleUrlIsSet() const;
    void unsetsubtitleUrl();
    void setSubtitleUrl(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string audioUrl_;
    bool audioUrlIsSet_;
    std::string subtitleUrl_;
    bool subtitleUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveAudioConfig_H_
