
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectThumbnailTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectThumbnailTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_VOD_V1_EXPORT  ObjectThumbnailTask
    : public ModelBase
{
public:
    ObjectThumbnailTask();
    virtual ~ObjectThumbnailTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectThumbnailTask members

    /// <summary>
    /// 采样类型。 取值如下： PERCENT：根据视频时长百分比间隔采样时的百分比值。 DOTS：指定时间点截图。选择同步截图时，需指定此类型。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 根据视频时长百分比间隔采样时的百分比值。 
    /// </summary>

    int32_t getPercent() const;
    bool percentIsSet() const;
    void unsetpercent();
    void setPercent(int32_t value);

    /// <summary>
    /// 指定时间截图的时间点数组 例如输入[1,3,5]，分别截取视频第1秒、第3秒、第5秒位置的图像帧 最多支持10个时间点 
    /// </summary>

    std::vector<int32_t>& getDots();
    bool dotsIsSet() const;
    void unsetdots();
    void setDots(std::vector<int32_t> value);

    /// <summary>
    /// 截图输出文件名。 - 如果只抽一张图（即：按DOTS方式，指定1个时间点）则按该指定文件名输出图片。 - 如果抽多张图（即：按DOTS方式指定多个时间点或按TIME间隔截图）则输出图片名在该指定文件名基础上在增加时间点（示例：output_filename_10.jpg）。 - 如果按照PERCENT截图则按照output_filename_0.jpg,output_filename_1.jpg顺序命名 
    /// </summary>

    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);

    /// <summary>
    /// 截图文件格式 取值如下：jpg、png 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式： - stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“； - black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。 - white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。 
    /// </summary>

    std::string getFillType() const;
    bool fillTypeIsSet() const;
    void unsetfillType();
    void setFillType(const std::string& value);

    /// <summary>
    /// 图片宽度 取值范围： - [96,3840] - 0：自适应，保持原有宽高 单位：px 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 图片高度 取值范围： - [96,2160] - 0：自适应，保持原有宽高 单位：px 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsInfo& value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t percent_;
    bool percentIsSet_;
    std::vector<int32_t> dots_;
    bool dotsIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string fillType_;
    bool fillTypeIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    ObsInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectThumbnailTask_H_
