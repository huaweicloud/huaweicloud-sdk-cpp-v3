
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_WatermarkRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_WatermarkRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <huaweicloud/vod/v1/model/TextWatermark.h>
#include <huaweicloud/vod/v1/model/SVGWatermark.h>
#include <string>
#include <huaweicloud/vod/v1/model/ImageWatermark.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  WatermarkRequest
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
    /// 水印模板ID 
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ImageWatermark getImageWatermark() const;
    bool imageWatermarkIsSet() const;
    void unsetimageWatermark();
    void setImageWatermark(const ImageWatermark& value);

    /// <summary>
    /// 文字水印内容，内容需做Base64编码，若类型为文字水印 (type字段为Text)，则此配置项不能为空 
    /// </summary>

    std::string getTextContext() const;
    bool textContextIsSet() const;
    void unsettextContext();
    void setTextContext(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TextWatermark getTextWatermark() const;
    bool textWatermarkIsSet() const;
    void unsettextWatermark();
    void setTextWatermark(const TextWatermark& value);

    /// <summary>
    /// svg水印的内容 
    /// </summary>

    std::string getSvgContext() const;
    bool svgContextIsSet() const;
    void unsetsvgContext();
    void setSvgContext(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SVGWatermark getSvgWatermark() const;
    bool svgWatermarkIsSet() const;
    void unsetsvgWatermark();
    void setSvgWatermark(const SVGWatermark& value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    ObsInfo input_;
    bool inputIsSet_;
    ImageWatermark imageWatermark_;
    bool imageWatermarkIsSet_;
    std::string textContext_;
    bool textContextIsSet_;
    TextWatermark textWatermark_;
    bool textWatermarkIsSet_;
    std::string svgContext_;
    bool svgContextIsSet_;
    SVGWatermark svgWatermark_;
    bool svgWatermarkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_WatermarkRequest_H_
