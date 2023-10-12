
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEditingJobReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEditingJobReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/MultiConcatInfo.h>
#include <huaweicloud/mpc/v1/model/OutputSetting.h>
#include <huaweicloud/mpc/v1/model/ClipInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/ConcatInfo.h>
#include <huaweicloud/mpc/v1/model/ImageWatermarkSetting.h>
#include <huaweicloud/mpc/v1/model/MixInfo.h>
#include <huaweicloud/mpc/v1/model/EditSetting.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建剪辑任务
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CreateEditingJobReq
    : public ModelBase
{
public:
    CreateEditingJobReq();
    virtual ~CreateEditingJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEditingJobReq members

    /// <summary>
    /// 剪辑任务类型。取值如下：\&quot;CLIP\&quot;,\&quot;CONCAT\&quot;,\&quot;CONCATS\&quot;,\&quot;MIX\&quot;。
    /// </summary>

    std::vector<std::string>& getEditType();
    bool editTypeIsSet() const;
    void unseteditType();
    void setEditType(const std::vector<std::string>& value);

    /// <summary>
    /// 剪切信息
    /// </summary>

    std::vector<ClipInfo>& getClips();
    bool clipsIsSet() const;
    void unsetclips();
    void setClips(const std::vector<ClipInfo>& value);

    /// <summary>
    /// 多拼接任务信息，支持多个拼接输出，与concat参数只能二选一。 
    /// </summary>

    std::vector<MultiConcatInfo>& getConcats();
    bool concatsIsSet() const;
    void unsetconcats();
    void setConcats(const std::vector<MultiConcatInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    ConcatInfo getConcat() const;
    bool concatIsSet() const;
    void unsetconcat();
    void setConcat(const ConcatInfo& value);

    /// <summary>
    /// 
    /// </summary>

    MixInfo getMix() const;
    bool mixIsSet() const;
    void unsetmix();
    void setMix(const MixInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    OutputSetting getOutputSetting() const;
    bool outputSettingIsSet() const;
    void unsetoutputSetting();
    void setOutputSetting(const OutputSetting& value);

    /// <summary>
    /// 水印信息。
    /// </summary>

    std::vector<ImageWatermarkSetting>& getImageWatermarkSettings();
    bool imageWatermarkSettingsIsSet() const;
    void unsetimageWatermarkSettings();
    void setImageWatermarkSettings(const std::vector<ImageWatermarkSetting>& value);

    /// <summary>
    /// 媒体处理配置，当edit_type为空时该参数生效。会根据该参数配置，对input参数指定的源文件进行处理 
    /// </summary>

    std::vector<EditSetting>& getEditSettings();
    bool editSettingsIsSet() const;
    void unseteditSettings();
    void setEditSettings(const std::vector<EditSetting>& value);

    /// <summary>
    /// 用户自定义数据。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::vector<std::string> editType_;
    bool editTypeIsSet_;
    std::vector<ClipInfo> clips_;
    bool clipsIsSet_;
    std::vector<MultiConcatInfo> concats_;
    bool concatsIsSet_;
    ConcatInfo concat_;
    bool concatIsSet_;
    MixInfo mix_;
    bool mixIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    OutputSetting outputSetting_;
    bool outputSettingIsSet_;
    std::vector<ImageWatermarkSetting> imageWatermarkSettings_;
    bool imageWatermarkSettingsIsSet_;
    std::vector<EditSetting> editSettings_;
    bool editSettingsIsSet_;
    std::string userData_;
    bool userDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEditingJobReq_H_
