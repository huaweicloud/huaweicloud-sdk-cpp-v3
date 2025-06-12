
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowWelcomeSpeechSwitchResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowWelcomeSpeechSwitchResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowWelcomeSpeechSwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWelcomeSpeechSwitchResponse();
    virtual ~ShowWelcomeSpeechSwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWelcomeSpeechSwitchResponse members

    /// <summary>
    /// 欢迎词功能开关。
    /// </summary>

    bool isEnableWelcomeSpeech() const;
    bool enableWelcomeSpeechIsSet() const;
    void unsetenableWelcomeSpeech();
    void setEnableWelcomeSpeech(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    bool enableWelcomeSpeech_;
    bool enableWelcomeSpeechIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowWelcomeSpeechSwitchResponse_H_
