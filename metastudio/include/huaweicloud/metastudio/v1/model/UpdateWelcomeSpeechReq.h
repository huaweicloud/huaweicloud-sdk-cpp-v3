
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateWelcomeSpeechReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateWelcomeSpeechReq_H_


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
/// 修改欢迎词请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateWelcomeSpeechReq
    : public ModelBase
{
public:
    UpdateWelcomeSpeechReq();
    virtual ~UpdateWelcomeSpeechReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWelcomeSpeechReq members

    /// <summary>
    /// 欢迎词。
    /// </summary>

    std::string getWelcomeSpeech() const;
    bool welcomeSpeechIsSet() const;
    void unsetwelcomeSpeech();
    void setWelcomeSpeech(const std::string& value);

    /// <summary>
    /// 欢迎词功能开关。
    /// </summary>

    bool isEnableWelcomeSpeech() const;
    bool enableWelcomeSpeechIsSet() const;
    void unsetenableWelcomeSpeech();
    void setEnableWelcomeSpeech(bool value);


protected:
    std::string welcomeSpeech_;
    bool welcomeSpeechIsSet_;
    bool enableWelcomeSpeech_;
    bool enableWelcomeSpeechIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateWelcomeSpeechReq_H_
