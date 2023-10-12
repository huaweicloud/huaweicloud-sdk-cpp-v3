
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_TextWatermark_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_TextWatermark_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/mpc/v1/model/BasicWatermark.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  TextWatermark
    : public ModelBase
{
public:
    TextWatermark();
    virtual ~TextWatermark();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TextWatermark members

    /// <summary>
    /// 水印图片起点相对输出视频顶点的水平偏移量。  设置方法有如下两种：  - 整数型：表示图片起点水平偏移视频顶点的像素值，单位px。取值范围：[0，4096] - 小数型：表示图片起点相对于视频分辨率宽的水平偏移比率。取值范围：(0，1)，支持4位小数，如0.9999，超出部分系统自动丢弃。  示例：输出视频分辨率宽1920，设置“dx”为“0.1”，“referpos”为“TopRight”（右上角），则水印图片右上角到视频右顶点在水平方向上偏移距离为192。 
    /// </summary>

    std::string getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(const std::string& value);

    /// <summary>
    /// 水印图片起点相对输出视频顶点的垂直偏移量。  - 设置方法有如下两种：整数型：表示图片起点垂直偏移视频顶点的像素值，单位px。取值范围：[0，4096] - 小数型：表示图片起点相对于视频分辨率高的垂直偏移比率。取值范围：(0，1)，支持4位小数，如0.9999，超出部分系统自动丢弃。  示例：输出视频分辨率高1080，设置“dy”为“0.1”，“referpos”为“TopRight”（右上角），则水印图片右上角到视频右顶点在垂直方向上的偏移距离为108。 
    /// </summary>

    std::string getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(const std::string& value);

    /// <summary>
    /// 水印的位置。  取值如下： - TopRight：右上角。 - TopLeft：左上角。 - BottomRight：右下角。 - BottomLeft：左下角。 
    /// </summary>

    std::string getReferpos() const;
    bool referposIsSet() const;
    void unsetreferpos();
    void setReferpos(const std::string& value);

    /// <summary>
    /// 水印开始时间，与“timeline_duration”配合使用。  取值范围：数字。  单位：秒。 
    /// </summary>

    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);

    /// <summary>
    /// 水印持续时间，与“timeline_start”配合使用。  取值范围：[数字，ToEND]。“ToEND”表示持续到视频结束。  默认值：ToEND。 
    /// </summary>

    std::string getTimelineDuration() const;
    bool timelineDurationIsSet() const;
    void unsettimelineDuration();
    void setTimelineDuration(const std::string& value);

    /// <summary>
    /// 字体，当前支持fzyouh 
    /// </summary>

    std::string getFontName() const;
    bool fontNameIsSet() const;
    void unsetfontName();
    void setFontName(const std::string& value);

    /// <summary>
    /// 字体大小。  取值范围：[4, 120] 
    /// </summary>

    int32_t getFontSize() const;
    bool fontSizeIsSet() const;
    void unsetfontSize();
    void setFontSize(int32_t value);

    /// <summary>
    /// 字体颜色。 目前颜色支持 black，blue，white，green，red，yellow，brown，gold，pink，orange，purple。 
    /// </summary>

    std::string getFontColor() const;
    bool fontColorIsSet() const;
    void unsetfontColor();
    void setFontColor(const std::string& value);

    /// <summary>
    /// 水印叠加母体 取值如下： - input：水印叠加在输入片源上，转码输出后实际大小按图像等比例缩放 - output：水印叠加在转码输出文件上。 默认值：input 
    /// </summary>

    std::string getBase() const;
    bool baseIsSet() const;
    void unsetbase();
    void setBase(const std::string& value);


protected:
    std::string dx_;
    bool dxIsSet_;
    std::string dy_;
    bool dyIsSet_;
    std::string referpos_;
    bool referposIsSet_;
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineDuration_;
    bool timelineDurationIsSet_;
    std::string fontName_;
    bool fontNameIsSet_;
    int32_t fontSize_;
    bool fontSizeIsSet_;
    std::string fontColor_;
    bool fontColorIsSet_;
    std::string base_;
    bool baseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_TextWatermark_H_
