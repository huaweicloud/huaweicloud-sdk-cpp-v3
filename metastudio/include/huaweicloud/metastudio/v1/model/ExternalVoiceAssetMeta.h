
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExternalVoiceAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExternalVoiceAssetMeta_H_


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
/// 第三方TTS音色元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ExternalVoiceAssetMeta
    : public ModelBase
{
public:
    ExternalVoiceAssetMeta();
    virtual ~ExternalVoiceAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalVoiceAssetMeta members

    /// <summary>
    /// 第三方TTS供应商类型。 * XIMALAYA：喜马拉雅TTS * HUAWEI_EI：华为云EI TTS * MOBVOI：出门问问 TTS * AUDIOX：逻辑智能 TTS * SINOVOICE：捷通华声 TTS * DATABAKER：标贝 TTS * AISPEECH：思必驰 TTS
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);


protected:
    std::string provider_;
    bool providerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExternalVoiceAssetMeta_H_
