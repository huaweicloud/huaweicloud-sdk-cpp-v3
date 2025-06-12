
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartImageLayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartImageLayerConfig_H_


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
/// 素材图片图层配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartImageLayerConfig
    : public ModelBase
{
public:
    SmartImageLayerConfig();
    virtual ~SmartImageLayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartImageLayerConfig members

    /// <summary>
    /// 图片文件的URL。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 图片显示时长，单位s。  显示时长规则为，若携带reply_texts、reply_audios，则与播放语音内容时长保持一致。若未携带，则与匹配的关键词语音内容时长保持一致。
    /// </summary>

    int32_t getDisplayDuration() const;
    bool displayDurationIsSet() const;
    void unsetdisplayDuration();
    void setDisplayDuration(int32_t value);


protected:
    std::string imageUrl_;
    bool imageUrlIsSet_;
    int32_t displayDuration_;
    bool displayDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartImageLayerConfig_H_
