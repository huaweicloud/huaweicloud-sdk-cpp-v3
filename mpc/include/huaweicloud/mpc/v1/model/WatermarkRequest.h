
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_WatermarkRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_WatermarkRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ImageWatermark.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/TextWatermark.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  WatermarkRequest
    : public ModelBase
{
public:
    WatermarkRequest();
    virtual ~WatermarkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WatermarkRequest members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 水印模板。可通过新建水印模板接口创建水印模板。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 文字水印内容，内容需做Base64编码，若类型为文字水印 (type字段为Text)，则此配置项不能为空  示例：若想添加文字水印“测试文字水印”，那么Content的值为：5rWL6K+V5paH5a2X5rC05Y2w 
    /// </summary>

    std::string getTextContext() const;
    bool textContextIsSet() const;
    void unsettextContext();
    void setTextContext(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ImageWatermark getImageWatermark() const;
    bool imageWatermarkIsSet() const;
    void unsetimageWatermark();
    void setImageWatermark(const ImageWatermark& value);

    /// <summary>
    /// 
    /// </summary>

    TextWatermark getTextWatermark() const;
    bool textWatermarkIsSet() const;
    void unsettextWatermark();
    void setTextWatermark(const TextWatermark& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string textContext_;
    bool textContextIsSet_;
    ImageWatermark imageWatermark_;
    bool imageWatermarkIsSet_;
    TextWatermark textWatermark_;
    bool textWatermarkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_WatermarkRequest_H_
