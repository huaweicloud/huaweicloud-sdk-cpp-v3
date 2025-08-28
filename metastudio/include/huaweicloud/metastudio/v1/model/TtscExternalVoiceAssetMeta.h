
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscExternalVoiceAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscExternalVoiceAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TtscAudioxVoiceAssetMeta.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/TtscMobvoiVoiceAssetMeta.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtscExternalVoiceAssetMeta
    : public ModelBase
{
public:
    TtscExternalVoiceAssetMeta();
    virtual ~TtscExternalVoiceAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtscExternalVoiceAssetMeta members

    /// <summary>
    /// 第三方TTS供应商类型。 * XIMALAYA：喜马拉雅TTS * HUAWEI_EI：EI TTS * MOBVOI：出门问问TTS
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TtscMobvoiVoiceAssetMeta getMobvoiVoiceMeta() const;
    bool mobvoiVoiceMetaIsSet() const;
    void unsetmobvoiVoiceMeta();
    void setMobvoiVoiceMeta(const TtscMobvoiVoiceAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    TtscAudioxVoiceAssetMeta getAudioxVoiceMeta() const;
    bool audioxVoiceMetaIsSet() const;
    void unsetaudioxVoiceMeta();
    void setAudioxVoiceMeta(const TtscAudioxVoiceAssetMeta& value);


protected:
    std::string provider_;
    bool providerIsSet_;
    TtscMobvoiVoiceAssetMeta mobvoiVoiceMeta_;
    bool mobvoiVoiceMetaIsSet_;
    TtscAudioxVoiceAssetMeta audioxVoiceMeta_;
    bool audioxVoiceMetaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscExternalVoiceAssetMeta_H_
