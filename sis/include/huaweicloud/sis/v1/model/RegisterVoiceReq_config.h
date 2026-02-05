
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceReq_config_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceReq_config_H_


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
/// 配置信息
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  RegisterVoiceReq_config
    : public ModelBase
{
public:
    RegisterVoiceReq_config();
    virtual ~RegisterVoiceReq_config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterVoiceReq_config members

    /// <summary>
    /// 注册声音的名称，不能以数字、下划线开头。仅包含大、小写英文字母、数字和下划线，且长度不超过20个字符。一个project id下的声音名称不能重复。
    /// </summary>

    std::string getVoiceName() const;
    bool voiceNameIsSet() const;
    void unsetvoiceName();
    void setVoiceName(const std::string& value);

    /// <summary>
    /// data中语音数据的语种，取值chinese、english。 默认是chinese。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string voiceName_;
    bool voiceNameIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceReq_config_H_
