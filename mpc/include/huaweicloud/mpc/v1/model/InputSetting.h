
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_InputSetting_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_InputSetting_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  InputSetting
    : public ModelBase
{
public:
    InputSetting();
    virtual ~InputSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputSetting members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 原视频的id,为整数类型数值字符串。用于匹配后面的布局配置。
    /// </summary>

    std::string getPaneId() const;
    bool paneIdIsSet() const;
    void unsetpaneId();
    void setPaneId(const std::string& value);

    /// <summary>
    /// 该视频采取的音频策略。DISCARD表示丢弃音频，合成的视频中不会出现该视频的音频。 RESERVE表示保留音频，合成的视频中会出现该视频音频。如果多个原视频配置了RESERVE，合成的视频文件的音频，是多个原 视频音频的混合。默认会丢弃音频。
    /// </summary>

    std::string getAudioPolicy() const;
    bool audioPolicyIsSet() const;
    void unsetaudioPolicy();
    void setAudioPolicy(const std::string& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    std::string paneId_;
    bool paneIdIsSet_;
    std::string audioPolicy_;
    bool audioPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_InputSetting_H_
