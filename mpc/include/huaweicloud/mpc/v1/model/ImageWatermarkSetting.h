
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageWatermarkSetting_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageWatermarkSetting_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  ImageWatermarkSetting
    : public ModelBase
{
public:
    ImageWatermarkSetting();
    virtual ~ImageWatermarkSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageWatermarkSetting members

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
    /// 对应拼接列表中第几个片段打水印，从0开始，\&quot;0表示第1个，“1”表示第二个，不带或填\&quot;ALL\&quot;表示所有拼接片源打水印。 
    /// </summary>

    std::string getOverlayInput() const;
    bool overlayInputIsSet() const;
    void unsetoverlayInput();
    void setOverlayInput(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 水印叠加母体  取值如下： - input ：水印叠加在输入片源上，转码输出后实际大小按图像等比例缩放 - output ：水印叠加在转码输出文件上。 
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
    std::string overlayInput_;
    bool overlayInputIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    std::string base_;
    bool baseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageWatermarkSetting_H_
