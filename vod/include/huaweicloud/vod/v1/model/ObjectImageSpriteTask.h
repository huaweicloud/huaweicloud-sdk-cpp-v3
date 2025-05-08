
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectImageSpriteTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectImageSpriteTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ObjectImageSpriteTask
    : public ModelBase
{
public:
    ObjectImageSpriteTask();
    virtual ~ObjectImageSpriteTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectImageSpriteTask members

    /// <summary>
    /// 采样类型，取值： - PERCENT：按百分比 - TIME：按时间间隔 
    /// </summary>

    std::string getSampleType() const;
    bool sampleTypeIsSet() const;
    void unsetsampleType();
    void setSampleType(const std::string& value);

    /// <summary>
    /// 采样间隔。 -当 sample_type 为 PERCENT 时，指定采样间隔的百分比，(0&lt;sample_interval&lt;&#x3D;100)。 -当 sample_type 为 TIME 时，指定采样间隔的时间，单位为秒(&gt;0)。 
    /// </summary>

    int32_t getSampleInterval() const;
    bool sampleIntervalIsSet() const;
    void unsetsampleInterval();
    void setSampleInterval(int32_t value);

    /// <summary>
    /// 雪碧图中小图的行数，行数*列数不得超过 100。
    /// </summary>

    int32_t getRowCount() const;
    bool rowCountIsSet() const;
    void unsetrowCount();
    void setRowCount(int32_t value);

    /// <summary>
    /// 雪碧图中小图的列数，行数*列数不得超过 100。
    /// </summary>

    int32_t getColumnCount() const;
    bool columnCountIsSet() const;
    void unsetcolumnCount();
    void setColumnCount(int32_t value);

    /// <summary>
    /// 雪碧图中小图的宽度（或长边）的最大值，取值范围：0 和 [96, 4096]，单位：px。 - 当 width、height 均为 0，则分辨率同源； - 当 width 为 0，Height 非 0，则 Width 按比例缩放； - 当 width 非 0，Height 为 0，则 Height 按比例缩放； - 当 width、Height 均非 0，则分辨率按用户指定 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 雪碧图中小图的高度（或短边）的最大值，取值范围：0 和 [96, 4096]，单位：px。 - 当 width、height 均为 0，则分辨率同源； - 当 width 为 0，height 非 0，则 width 按比例缩放； - 当 width 非 0，height 为 0，则 height 按比例缩放； - 当 width、height 均非 0，则分辨率按用户指定。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 分辨率自适应，可选值： - open：开启，此时，Width 代表视频的长边，Height 表示视频的短边； - close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。 
    /// </summary>

    std::string getResolutionAdaptive() const;
    bool resolutionAdaptiveIsSet() const;
    void unsetresolutionAdaptive();
    void setResolutionAdaptive(const std::string& value);

    /// <summary>
    /// 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式： - stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“； - black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。 - white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。 
    /// </summary>

    std::string getFillType() const;
    bool fillTypeIsSet() const;
    void unsetfillType();
    void setFillType(const std::string& value);

    /// <summary>
    /// 图片格式，取值为 jpg、png。默认为 jpg。
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 截取雪碧图后，雪碧图图片文件的输出文件名，如果不填，则默认为：{inputName}_imageSprite_{雪碧图id}_{number}.{format}.{雪碧图id}和{number}从0开始递增 
    /// </summary>

    std::string getOutputObjectName() const;
    bool outputObjectNameIsSet() const;
    void unsetoutputObjectName();
    void setOutputObjectName(const std::string& value);

    /// <summary>
    /// 截取雪碧图后，Web VTT 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：{inputName}_imageSprite_{雪碧图_id}.vtt 
    /// </summary>

    std::string getWebvttObjectName() const;
    bool webvttObjectNameIsSet() const;
    void unsetwebvttObjectName();
    void setWebvttObjectName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsInfo& value);


protected:
    std::string sampleType_;
    bool sampleTypeIsSet_;
    int32_t sampleInterval_;
    bool sampleIntervalIsSet_;
    int32_t rowCount_;
    bool rowCountIsSet_;
    int32_t columnCount_;
    bool columnCountIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string resolutionAdaptive_;
    bool resolutionAdaptiveIsSet_;
    std::string fillType_;
    bool fillTypeIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string outputObjectName_;
    bool outputObjectNameIsSet_;
    std::string webvttObjectName_;
    bool webvttObjectNameIsSet_;
    ObsInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectImageSpriteTask_H_
