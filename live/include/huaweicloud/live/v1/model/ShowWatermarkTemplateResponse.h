
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowWatermarkTemplateResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowWatermarkTemplateResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/WordWaterMarkInfo.h>
#include <string>
#include <huaweicloud/live/v1/model/WatermarkLocation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowWatermarkTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWatermarkTemplateResponse();
    virtual ~ShowWatermarkTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWatermarkTemplateResponse members

    /// <summary>
    /// 水印模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 水印类型，0图片，1文字,2图文共存
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 模板注释
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 图片下载路径 校验规则：图片URL长度大于0，最大长度2048，能够正常按URL格式解析，必须是 http 或 https 协议。（OTT 场景限制只支持https） 图片格式: .png/.jpg/.PNG/.JPG结尾
    /// </summary>

    std::string getPictureUrl() const;
    bool pictureUrlIsSet() const;
    void unsetpictureUrl();
    void setPictureUrl(const std::string& value);

    /// <summary>
    /// 1）整数型代表水印图片宽的像素值，范围0或[8，4096]，单位px。 2）小数型代表相对输出视频分辨率宽的比率，范围[0,1) 建议宽高只设置一项，另外一项会自适应缩放，避免变形。宽高全部设置为0表示水印图片原始宽高 百分比限制最多保留小数点后4位，width和height 只支持同时为像素或是百分比，不支持一个像素，一个百分比
    /// </summary>

    double getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(double value);

    /// <summary>
    /// 水印图片高，值有两种形式： 1）整数型代表水印图片高的像素值，范围0或[8，4096]，单位px。 2）小数型代表相对输出视频分辨率高的比率，范围[0，1) 建议宽高只设置一项，另外一项会自适应缩放，避免变形。宽高全部设置为0表示水印图片原始宽高 百分比限制最多保留小数点后4位，width和height 只支持同时为像素或是百分比，不支持一个像素，一个百分比
    /// </summary>

    double getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(double value);

    /// <summary>
    /// 
    /// </summary>

    WatermarkLocation getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const WatermarkLocation& value);

    /// <summary>
    /// 
    /// </summary>

    WordWaterMarkInfo getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const WordWaterMarkInfo& value);

    /// <summary>
    /// 业务属性，cloud_live：云直播，默认值；media_live：媒体直播，不支持修改
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string pictureUrl_;
    bool pictureUrlIsSet_;
    double width_;
    bool widthIsSet_;
    double height_;
    bool heightIsSet_;
    WatermarkLocation location_;
    bool locationIsSet_;
    WordWaterMarkInfo text_;
    bool textIsSet_;
    std::string scene_;
    bool sceneIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowWatermarkTemplateResponse_H_
