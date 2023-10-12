
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_MultiModalConfig_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_MultiModalConfig_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 多模态评测的配置
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  MultiModalConfig
    : public ModelBase
{
public:
    MultiModalConfig();
    virtual ~MultiModalConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MultiModalConfig members

    /// <summary>
    /// 视频的封装格式。不填写此字段，则默认为auto。注意不论何种格式，均要求帧率在25fps以上，清晰度在240*240以上。   auto  自动判断，系统会自动判断视频封装格式。  avi  avi封装格式。  mp4  mp4封装格式。  webm  webm封装格式。  mkv  mkv封装格式。  flv  flv封装格式。 
    /// </summary>

    std::string getVideoFormat() const;
    bool videoFormatIsSet() const;
    void unsetvideoFormat();
    void setVideoFormat(const std::string& value);

    /// <summary>
    /// 评测语言和口音。  en_gb 英语-英式口音。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 评测模式。  word 单词模式。  sentence 句子模式。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string videoFormat_;
    bool videoFormatIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_MultiModalConfig_H_
