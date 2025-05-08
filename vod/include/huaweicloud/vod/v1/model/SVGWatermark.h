
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_SVGWatermark_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_SVGWatermark_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  SVGWatermark
    : public ModelBase
{
public:
    SVGWatermark();
    virtual ~SVGWatermark();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SVGWatermark members

    /// <summary>
    /// 水印图片起点相对输出视频顶点的水平偏移量。 设置方法有如下两种： 整数型：表示图片起点水平偏移视频顶点的像素值，单位px。取值范围：[0，4096] 小数型：表示图片起点相对于视频分辨率宽的水平偏移比率。取值范围：(0，1)，支持4位小数，如0.9999，超出部分系统自动丢弃。 
    /// </summary>

    std::string getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(const std::string& value);

    /// <summary>
    /// 水印图片起点相对输出视频顶点的垂直偏移量。 设置方法有如下两种： 整数型：表示图片起点水平偏移视频顶点的像素值，单位px。取值范围：[0，4096] 小数型：表示图片起点相对于视频分辨率宽的水平偏移比率。取值范围：(0，1)，支持4位小数，如0.9999，超出部分系统自动丢弃。 
    /// </summary>

    std::string getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(const std::string& value);

    /// <summary>
    /// 水印的位置。 取值如下： TopRight：右上角。 TopLeft：左上角。 BottomRight：右下角。 BottomLeft：左下角。 ClockWise：顺时针 AntiClockWise：逆时针 Random：随机跳转 
    /// </summary>

    std::string getReferpos() const;
    bool referposIsSet() const;
    void unsetreferpos();
    void setReferpos(const std::string& value);

    /// <summary>
    /// 水印开始时间，与“timeline_duration”配合使用。 
    /// </summary>

    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);

    /// <summary>
    /// 水印持续时间，与“timeline_start”配合使用。 取值范围：[数字，ToEND]。“ToEND”表示持续到视频结束。 默认值：ToEND。 
    /// </summary>

    std::string getTimelineDuration() const;
    bool timelineDurationIsSet() const;
    void unsettimelineDuration();
    void setTimelineDuration(const std::string& value);

    /// <summary>
    /// 随机时间最小值，单位：秒 
    /// </summary>

    float getRandomTimeMin() const;
    bool randomTimeMinIsSet() const;
    void unsetrandomTimeMin();
    void setRandomTimeMin(float value);

    /// <summary>
    /// 随机时间最大值，单位：秒 
    /// </summary>

    float getRandomTimeMax() const;
    bool randomTimeMaxIsSet() const;
    void unsetrandomTimeMax();
    void setRandomTimeMax(float value);

    /// <summary>
    /// 水印图片宽，值有两种形式： 整数型代水印图片宽的像素值，范围[8，4096]，单位px。 小数型代表相对输出视频分辨率宽的比率，范围(0,1)，支持4位小数，如0.9999，超出部分系统自动丢弃。 
    /// </summary>

    std::string getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(const std::string& value);

    /// <summary>
    /// 水印图片高，值有两种形式： 整数型代表水印图片高的像素值，范围[8，4096]，单位px。 小数型代表相对输出视频分辨率高的比率，范围(0，1)，支持4位小数，如0.9999，超出部分系统自动丢弃。 
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);


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
    float randomTimeMin_;
    bool randomTimeMinIsSet_;
    float randomTimeMax_;
    bool randomTimeMaxIsSet_;
    std::string width_;
    bool widthIsSet_;
    std::string height_;
    bool heightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_SVGWatermark_H_
