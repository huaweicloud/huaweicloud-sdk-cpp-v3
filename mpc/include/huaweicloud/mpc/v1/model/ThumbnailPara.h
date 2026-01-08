
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbnailPara_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbnailPara_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  ThumbnailPara
    : public ModelBase
{
public:
    ThumbnailPara();
    virtual ~ThumbnailPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThumbnailPara members

    /// <summary>
    /// 采样类型。  取值如下： - \&quot;TIME\&quot;：根据时间间隔采样截图。 - \&quot;DOTS\&quot;：指定时间点截图。选择同步截图时，需指定此类型。 - \&quot;DOTS_MS\&quot;：同步截图指定时间点毫秒值。  默认值：\&quot;TIME\&quot; 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 黑点比例大于等于此值认为是黑帧。 
    /// </summary>

    int32_t getAmount() const;
    bool amountIsSet() const;
    void unsetamount();
    void setAmount(int32_t value);

    /// <summary>
    /// 像素值小于此值认为是黑点。 
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// 采样截图的时间间隔值。  默认值：12。  单位：秒 
    /// </summary>

    int32_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int32_t value);

    /// <summary>
    /// 采样类型为“TIME”模式的开始时间，和“time”配合使用。  默认值：0。  单位：秒。 
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);

    /// <summary>
    /// 采样类型为“TIME”模式的持续时间，和“time”、“start_time”配合使用，表示从视频文件的第“start_time”开始，持续时间为“duration”，每间隔“time”生成一张截图。 取值范围：[数字，ToEND]。“ToEND”表示持续到视频结束。  默认值： ToEND。  单位：秒。 &gt; “duration”必须大于等0，若设置为0，则截图持续时间从“start_time”到视频结束。 
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 指定时间截图时的时间点数组，最多支持10个。 
    /// </summary>

    std::vector<int32_t>& getDots();
    bool dotsIsSet() const;
    void unsetdots();
    void setDots(std::vector<int32_t> value);

    /// <summary>
    /// 同步截图下，指定时间截图的时间点数组，单位毫秒  例如输入[1000]，截取视频第1000毫秒位置的图像帧，仅支持一个时间点 
    /// </summary>

    std::vector<int32_t>& getDotsMs();
    bool dotsMsIsSet() const;
    void unsetdotsMs();
    void setDotsMs(std::vector<int32_t> value);

    /// <summary>
    /// 截图输出文件名。  - 如果只抽一张图（即：按DOTS方式，指定1个时间点）则按该指定文件名输出图片。  - 如果抽多张图（即：按DOTS方式指定多个时间点或按TIME间隔截图）则输出图片名在该指定文件名基础上在增加时间点（示例：output_filename_10.jpg）。  - 如果指定了压缩抽帧图片生成tar包，则tar包按该指定文件名输出。 
    /// </summary>

    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);

    /// <summary>
    /// 截图文件格式。  取值如下：  1：表示jpg格式 
    /// </summary>

    int32_t getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(int32_t value);

    /// <summary>
    /// 图片宽度  取值范围：(96,3840]  单位：px 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 图片高度  取值范围：(96,2160]  单位：px 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 截图最长边的尺寸。宽边尺寸按照该尺寸与原始视频像素等比缩放计算。   取值范围：[240,3840]  默认值：480  单位：像素  &gt; 该参数和width/height选择使用，以width/height优先，若width/height都不等于0，则图片尺寸按width/height得出；反之，则图片尺寸按 max_length 得出。  &gt; 若该参数和width/height都未选择，则按源片源宽高输出截图 
    /// </summary>

    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetmaxLength();
    void setMaxLength(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t amount_;
    bool amountIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;
    int32_t time_;
    bool timeIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::vector<int32_t> dots_;
    bool dotsIsSet_;
    std::vector<int32_t> dotsMs_;
    bool dotsMsIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;
    int32_t format_;
    bool formatIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t maxLength_;
    bool maxLengthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbnailPara_H_
