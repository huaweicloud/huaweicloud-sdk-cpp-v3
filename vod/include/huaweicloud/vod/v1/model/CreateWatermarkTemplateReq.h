
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateWatermarkTemplateReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateWatermarkTemplateReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateWatermarkTemplateReq
    : public ModelBase
{
public:
    CreateWatermarkTemplateReq();
    virtual ~CreateWatermarkTemplateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateWatermarkTemplateReq members

    /// <summary>
    /// 水印模板名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 水印类型，当前只支持Image（图片水印）。
    /// </summary>

    std::string getWatermarkType() const;
    bool watermarkTypeIsSet() const;
    void unsetwatermarkType();
    void setWatermarkType(const std::string& value);

    /// <summary>
    /// type设置为Image时有效。  目前包括： - Original：只做简单缩放，不做其他处理 - Transparent：图片底色透明 - Grayed：彩色图片变灰
    /// </summary>

    std::string getImageProcess() const;
    bool imageProcessIsSet() const;
    void unsetimageProcess();
    void setImageProcess(const std::string& value);

    /// <summary>
    /// 水印图片相对输出视频的水平偏移量，默认值是0。
    /// </summary>

    std::string getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(const std::string& value);

    /// <summary>
    /// 水印图片相对输出视频的垂直偏移量，默认值是0。
    /// </summary>

    std::string getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(const std::string& value);

    /// <summary>
    /// 水印的位置。
    /// </summary>

    std::string getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(const std::string& value);

    /// <summary>
    /// 水印图片宽。
    /// </summary>

    std::string getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(const std::string& value);

    /// <summary>
    /// 水印图片高。
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);

    /// <summary>
    /// 水印开始时间，与\&quot;timeline_duration\&quot;配合使用。 取值范围:[0, END)。\&quot;END\&quot;表示视频结束时间。 单位:秒。 
    /// </summary>

    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);

    /// <summary>
    /// 水印持续时间，与\&quot;timeline_start\&quot;配合使用。 取值范围:(0,END-开始时间]。\&quot;END\&quot;表示视频结束时间。 单位:秒。 默认:END。 
    /// </summary>

    std::string getTimelineDuration() const;
    bool timelineDurationIsSet() const;
    void unsettimelineDuration();
    void setTimelineDuration(const std::string& value);

    /// <summary>
    /// 水印图片格式类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 水印图片MD5值。
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string watermarkType_;
    bool watermarkTypeIsSet_;
    std::string imageProcess_;
    bool imageProcessIsSet_;
    std::string dx_;
    bool dxIsSet_;
    std::string dy_;
    bool dyIsSet_;
    std::string position_;
    bool positionIsSet_;
    std::string width_;
    bool widthIsSet_;
    std::string height_;
    bool heightIsSet_;
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineDuration_;
    bool timelineDurationIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string md5_;
    bool md5IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateWatermarkTemplateReq_H_
