
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_WatermarkLocation_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_WatermarkLocation_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  WatermarkLocation
    : public ModelBase
{
public:
    WatermarkLocation();
    virtual ~WatermarkLocation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WatermarkLocation members

    /// <summary>
    /// 水印位置。  包含如下选项： - TOPLEFT：左上 - TOPRIGHT：右上 - BOTTOMLEFT：左下 - BOTTOMRIGHT：右下 - RANDOM：随机模式，图片水印将随机在视频流的左上、右上、左下、右下四个位置展示。
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// 水印相对输出视频的水平偏移量。 说明：值有两种形式： 1）整数型代表偏移像素，范围[1，4096]，单位px。 2）小数型代表水平偏移量与输出分辨率宽的比率，范围[0，1) 百分比限制最多保留小数点后4位
    /// </summary>

    double getXOffset() const;
    bool xOffsetIsSet() const;
    void unsetxOffset();
    void setXOffset(double value);

    /// <summary>
    /// 水印相对输出视频的垂直偏移量 说明: 值有两种形式： 1）整数型代表偏移像素，范围[1，4096]，单位px。 2）小数型代表垂直偏移量与输出分辨率高的比率，范围[0，1) 百分比限制最多保留小数点后4位
    /// </summary>

    double getYOffset() const;
    bool yOffsetIsSet() const;
    void unsetyOffset();
    void setYOffset(double value);


protected:
    std::string location_;
    bool locationIsSet_;
    double xOffset_;
    bool xOffsetIsSet_;
    double yOffset_;
    bool yOffsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_WatermarkLocation_H_
