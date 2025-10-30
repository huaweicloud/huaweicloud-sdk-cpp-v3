
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_WordWaterMarkInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_WordWaterMarkInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  WordWaterMarkInfo
    : public ModelBase
{
public:
    WordWaterMarkInfo();
    virtual ~WordWaterMarkInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WordWaterMarkInfo members

    /// <summary>
    /// 水印文字内容，必填 字幕内容1-64 type为1或2时必填，type为0时非必填
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 参数校验：首位为#、除#外为6位或8位，每位字符由 0-9、a~f、A~F 组成【务必校验，错误时转码默认白色】
    /// </summary>

    std::string getFontColor() const;
    bool fontColorIsSet() const;
    void unsetfontColor();
    void setFontColor(const std::string& value);

    /// <summary>
    /// 字体大小
    /// </summary>

    int32_t getFontSize() const;
    bool fontSizeIsSet() const;
    void unsetfontSize();
    void setFontSize(int32_t value);

    /// <summary>
    /// 字体，缺省值 空，可选值：harmonyRegular（鸿蒙）、douyu2.0（斗鱼追光体）
    /// </summary>

    std::string getFont() const;
    bool fontIsSet() const;
    void unsetfont();
    void setFont(const std::string& value);

    /// <summary>
    /// 时区，【取值参考 UTC-1200 至 UTC+1200，前三位UTC，第四位+或-，五六位表示小时，七八位固定00】
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 缺省值 none，参数校验：首位为#、除#外为6位或8位，每位字符由 0-9、a~f、A~F 组成【务必校验，错误时转码默认黑色】
    /// </summary>

    std::string getShadowColor() const;
    bool shadowColorIsSet() const;
    void unsetshadowColor();
    void setShadowColor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WatermarkLocation getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const WatermarkLocation& value);


protected:
    std::string format_;
    bool formatIsSet_;
    std::string fontColor_;
    bool fontColorIsSet_;
    int32_t fontSize_;
    bool fontSizeIsSet_;
    std::string font_;
    bool fontIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::string shadowColor_;
    bool shadowColorIsSet_;
    WatermarkLocation location_;
    bool locationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_WordWaterMarkInfo_H_
