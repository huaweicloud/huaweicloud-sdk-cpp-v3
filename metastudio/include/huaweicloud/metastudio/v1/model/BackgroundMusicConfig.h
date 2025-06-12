
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundMusicConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundMusicConfig_H_


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
/// 背景音乐配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BackgroundMusicConfig
    : public ModelBase
{
public:
    BackgroundMusicConfig();
    virtual ~BackgroundMusicConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackgroundMusicConfig members

    /// <summary>
    /// **参数解释**： 音乐资产ID。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getMusicAssetId() const;
    bool musicAssetIdIsSet() const;
    void unsetmusicAssetId();
    void setMusicAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 音乐音量。如100，表示音量100%，50表示音量50%。 **约束限制**： 不涉及。
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);


protected:
    std::string musicAssetId_;
    bool musicAssetIdIsSet_;
    int32_t volume_;
    bool volumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundMusicConfig_H_
