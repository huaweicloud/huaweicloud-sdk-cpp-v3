
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_Thumbnail_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_Thumbnail_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 截图参数
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  Thumbnail
    : public ModelBase
{
public:
    Thumbnail();
    virtual ~Thumbnail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Thumbnail members

    /// <summary>
    /// 截图类型。  取值如下： - time：每次进行截图的间隔时间。 - dots: 按照指定的时间点截图。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **type**取值为time时必填。根据时间间隔采样时的时间间隔值。  取值范围：[1,12]之间的整数。  单位：秒。
    /// </summary>

    int32_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int32_t value);

    /// <summary>
    /// **type**取值为dots时必填。指定时间截图时的时间点数组。
    /// </summary>

    std::vector<int32_t>& getDots();
    bool dotsIsSet() const;
    void unsetdots();
    void setDots(std::vector<int32_t> value);

    /// <summary>
    /// 该值表示指定第几张截图作为封面。  默认值：1。
    /// </summary>

    int32_t getCoverPosition() const;
    bool coverPositionIsSet() const;
    void unsetcoverPosition();
    void setCoverPosition(int32_t value);

    /// <summary>
    /// 截图文件格式。  取值如下： - 1：jpg。  默认值：1 。
    /// </summary>

    int32_t getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(int32_t value);

    /// <summary>
    /// 纵横比，图像缩放方式。  取值如下： - 0：自适应（保持原有宽高比）。 - 1：16:9。  默认值：0。
    /// </summary>

    int32_t getAspectRatio() const;
    bool aspectRatioIsSet() const;
    void unsetaspectRatio();
    void setAspectRatio(int32_t value);

    /// <summary>
    /// 截图最长边的尺寸。  单位：像素。  宽边尺寸按照该尺寸与原始视频像素等比缩放计算。
    /// </summary>

    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetmaxLength();
    void setMaxLength(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t time_;
    bool timeIsSet_;
    std::vector<int32_t> dots_;
    bool dotsIsSet_;
    int32_t coverPosition_;
    bool coverPositionIsSet_;
    int32_t format_;
    bool formatIsSet_;
    int32_t aspectRatio_;
    bool aspectRatioIsSet_;
    int32_t maxLength_;
    bool maxLengthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_Thumbnail_H_
