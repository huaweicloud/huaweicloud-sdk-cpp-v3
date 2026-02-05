
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceResponseBody_result_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceResponseBody_result_H_


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
/// 注册声音响应。
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  RegisterVoiceResponseBody_result
    : public ModelBase
{
public:
    RegisterVoiceResponseBody_result();
    virtual ~RegisterVoiceResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterVoiceResponseBody_result members

    /// <summary>
    /// 注册声音的名称。
    /// </summary>

    std::string getVoiceName() const;
    bool voiceNameIsSet() const;
    void unsetvoiceName();
    void setVoiceName(const std::string& value);


protected:
    std::string voiceName_;
    bool voiceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceResponseBody_result_H_
