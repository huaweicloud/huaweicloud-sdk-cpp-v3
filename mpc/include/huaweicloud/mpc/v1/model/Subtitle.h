
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_Subtitle_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_Subtitle_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/MulInputFileInfo.h>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  Subtitle
    : public ModelBase
{
public:
    Subtitle();
    virtual ~Subtitle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Subtitle members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 多字幕文件地址。 
    /// </summary>

    std::vector<MulInputFileInfo>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<MulInputFileInfo>& value);

    /// <summary>
    /// 字幕类型。取值如下：  - 0，表示不输出字幕 - 1，表示外部字幕文件嵌入视频流 - 2，表示输出WebVTT格式字幕 
    /// </summary>

    int32_t getSubtitleType() const;
    bool subtitleTypeIsSet() const;
    void unsetsubtitleType();
    void setSubtitleType(int32_t value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    std::vector<MulInputFileInfo> inputs_;
    bool inputsIsSet_;
    int32_t subtitleType_;
    bool subtitleTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_Subtitle_H_
