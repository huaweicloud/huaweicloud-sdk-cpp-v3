
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscMobvoiVoiceAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscMobvoiVoiceAssetMeta_H_


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
/// 出门问问TTS音色元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtscMobvoiVoiceAssetMeta
    : public ModelBase
{
public:
    TtscMobvoiVoiceAssetMeta();
    virtual ~TtscMobvoiVoiceAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtscMobvoiVoiceAssetMeta members

    /// <summary>
    /// 合成音频指定发音人
    /// </summary>

    std::string getSpeaker() const;
    bool speakerIsSet() const;
    void unsetspeaker();
    void setSpeaker(const std::string& value);


protected:
    std::string speaker_;
    bool speakerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscMobvoiVoiceAssetMeta_H_
