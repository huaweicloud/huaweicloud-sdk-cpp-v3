
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiConcatInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiConcatInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/AvParameters.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/ImageWatermarkSetting.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  MultiConcatInfo
    : public ModelBase
{
public:
    MultiConcatInfo();
    virtual ~MultiConcatInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MultiConcatInfo members

    /// <summary>
    /// 拼接任务输入源地址。
    /// </summary>

    std::vector<ObsObjInfo>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<ObsObjInfo>& value);

    /// <summary>
    /// 拼接完成后转码对应的转码模板ID 
    /// </summary>

    std::vector<int32_t>& getTransTemplateIds();
    bool transTemplateIdsIsSet() const;
    void unsettransTemplateIds();
    void setTransTemplateIds(std::vector<int32_t> value);

    /// <summary>
    /// 转码参数。 设置“trans_template_id”和此参数，则优先使用此参数进行转码。 
    /// </summary>

    std::vector<AvParameters>& getAvParameters();
    bool avParametersIsSet() const;
    void unsetavParameters();
    void setAvParameters(const std::vector<AvParameters>& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 水印信息。
    /// </summary>

    std::vector<ImageWatermarkSetting>& getImageWatermarkSettings();
    bool imageWatermarkSettingsIsSet() const;
    void unsetimageWatermarkSettings();
    void setImageWatermarkSettings(const std::vector<ImageWatermarkSetting>& value);


protected:
    std::vector<ObsObjInfo> inputs_;
    bool inputsIsSet_;
    std::vector<int32_t> transTemplateIds_;
    bool transTemplateIdsIsSet_;
    std::vector<AvParameters> avParameters_;
    bool avParametersIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::vector<ImageWatermarkSetting> imageWatermarkSettings_;
    bool imageWatermarkSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiConcatInfo_H_
