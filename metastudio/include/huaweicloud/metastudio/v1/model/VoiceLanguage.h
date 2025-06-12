
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceLanguage_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceLanguage_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VoiceLanguage
: public ModelBase
{
public:
    VoiceLanguage();
    virtual ~VoiceLanguage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eVoiceLanguage 
    {
        VoiceLanguage_UNKNOW,
        VoiceLanguage_CN,
        VoiceLanguage_EN,
        VoiceLanguage_GER,
        VoiceLanguage_fr,
        VoiceLanguage_Kr,
        VoiceLanguage_por,
        VoiceLanguage_JPN,
        VoiceLanguage_Ita,
        VoiceLanguage_ESP,
        VoiceLanguage_DBH,
        VoiceLanguage_GT,
        VoiceLanguage_GXH,
        VoiceLanguage_HBH,
        VoiceLanguage_SXH,
        VoiceLanguage_SCH,
        VoiceLanguage_YY,
        VoiceLanguage_Russian,
        VoiceLanguage_Filipino,
        VoiceLanguage_Dutch,
        VoiceLanguage_Indonesian,
        VoiceLanguage_Vietnamese,
        VoiceLanguage_Arabic,
        VoiceLanguage_Turkish,
        VoiceLanguage_Malay,
        VoiceLanguage_Thai,
        VoiceLanguage_Finnish,
    };

    eVoiceLanguage getValue() const;
    void setValue(eVoiceLanguage const value);

protected:
    eVoiceLanguage value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceLanguage_H_
