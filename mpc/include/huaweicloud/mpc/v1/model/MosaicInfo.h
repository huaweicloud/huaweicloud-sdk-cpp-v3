
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MosaicInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MosaicInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  MosaicInfo
    : public ModelBase
{
public:
    MosaicInfo();
    virtual ~MosaicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MosaicInfo members

    /// <summary>
    /// 马赛克开始时间，与“timeline_duration”配合使用。  取值范围：数字。  单位：秒。 
    /// </summary>

    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);

    /// <summary>
    /// 马赛克持续时间，与“timeline_start”配合使用。  取值范围：[数字，ToEND]。“ToEND”表示持续到视频结束。  默认值：ToEND。 
    /// </summary>

    std::string getTimelineDuration() const;
    bool timelineDurationIsSet() const;
    void unsettimelineDuration();
    void setTimelineDuration(const std::string& value);

    /// <summary>
    /// 马赛克起点相对输出视频顶点的水平偏移量。  设置方法有如下两种：  - 整数型：表示马赛克起点水平偏移视频顶点的像素值，单位px。取值范围：[0，4096] - 小数型：表示马赛克起点相对于视频分辨率宽的水平偏移比率。取值范围：(0，1)，支持4位小数，如0.9999。  示例：输出视频分辨率宽1920，设置“dx”为“0.1”，“referpos”为“TopRight”（右上角），则马赛克右上角到视频右顶点在水平方向上偏移距离为192。 
    /// </summary>

    std::string getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(const std::string& value);

    /// <summary>
    /// 马赛克起点相对输出视频顶点的垂直偏移量。  - 设置方法有如下两种：整数型：表示马赛克起点垂直偏移视频顶点的像素值，单位px。取值范围：[0，4096] - 小数型：表示马赛克起点相对于视频分辨率高的垂直偏移比率。取值范围：(0，1)，支持4位小数，如0.9999。  示例：输出视频分辨率高1080，设置“dy”为“0.1”，“referpos”为“TopRight”（右上角），则马赛克右上角到视频右顶点在垂直方向上的偏移距离为108。 
    /// </summary>

    std::string getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(const std::string& value);

    /// <summary>
    /// 马赛克宽，值有两种形式： - 整数型代马赛克宽的像素值，范围[8，4096]，单位px。 - 小数型代表相对输出视频分辨率宽的比率，范围(0,1)，支持4位小数，如0.9999。 
    /// </summary>

    std::string getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(const std::string& value);

    /// <summary>
    /// 马赛克高，值有两种形式： - 整数型代表马赛克的像素值，范围[8，4096]，单位px。 - 小数型代表相对输出视频分辨率高的比率，范围(0，1)，支持4位小数，如0.9999。 
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);


protected:
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineDuration_;
    bool timelineDurationIsSet_;
    std::string dx_;
    bool dxIsSet_;
    std::string dy_;
    bool dyIsSet_;
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

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MosaicInfo_H_
