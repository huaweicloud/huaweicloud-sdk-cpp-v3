
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscVoiceModelAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscVoiceModelAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/TtscExternalVoiceAssetMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 音色模型元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtscVoiceModelAssetMeta
    : public ModelBase
{
public:
    TtscVoiceModelAssetMeta();
    virtual ~TtscVoiceModelAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtscVoiceModelAssetMeta members

    /// <summary>
    /// 音色性别。 * UNKNOW：中性音色 * MALE：男性音色 * FEMALE：女性音色  默认UNKNOW。
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TtscExternalVoiceAssetMeta getExternalVoiceMeta() const;
    bool externalVoiceMetaIsSet() const;
    void unsetexternalVoiceMeta();
    void setExternalVoiceMeta(const TtscExternalVoiceAssetMeta& value);

    /// <summary>
    /// 音色语言。 * UNKNOW：未知 * CN：中文 * EN：英文 * GER：德语 * fr：法语 * Kr：韩语 * por：葡萄牙语 * JPN：日语 * Ita：意大利语 * ESP：西班牙语 * DBH：东北话 * GT：港台 * GXH：广西话 * HBH：湖北话 * SXH：陕西话 * SCH：四川话 * YY：粤语 * Russian: 俄罗斯语 * Filipino: 菲律宾语 * Dutch: 荷兰语 * Indonesian: 印尼语 * Vietnamese: 越南语 * Arabic: 阿拉伯语 * Turkish: 土耳其语 * Malay: 马来语 * Thai: 泰语 * Finnish: 芬兰语  默认UNKNOW。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 语速缩放比例
    /// </summary>

    float getSpeedRatio() const;
    bool speedRatioIsSet() const;
    void unsetspeedRatio();
    void setSpeedRatio(float value);

    /// <summary>
    /// 音量缩放比例
    /// </summary>

    float getVolumeRatio() const;
    bool volumeRatioIsSet() const;
    void unsetvolumeRatio();
    void setVolumeRatio(float value);


protected:
    std::string sex_;
    bool sexIsSet_;
    TtscExternalVoiceAssetMeta externalVoiceMeta_;
    bool externalVoiceMetaIsSet_;
    std::string language_;
    bool languageIsSet_;
    float speedRatio_;
    bool speedRatioIsSet_;
    float volumeRatio_;
    bool volumeRatioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscVoiceModelAssetMeta_H_
