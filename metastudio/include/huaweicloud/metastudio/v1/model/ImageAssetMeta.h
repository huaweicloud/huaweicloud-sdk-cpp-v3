
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ImageAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ImageAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 图片元数据
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ImageAssetMeta
    : public ModelBase
{
public:
    ImageAssetMeta();
    virtual ~ImageAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageAssetMeta members

    /// <summary>
    /// **参数解释**： 图片编码格式。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： 字符长度0-32位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// **参数解释**： 图片宽度。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// **参数解释**： 图片高度。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// **参数解释**： 图片大小。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// **参数解释**： 图片形态。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： * Horizontal：横向 * Vertical：纵向  **默认取值**： 不涉及。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 视频帧率。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： 字符长度0-32位。 **默认取值**： 不涉及
    /// </summary>

    std::string getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(const std::string& value);

    /// <summary>
    /// **参数解释**： 时长,单位秒。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);


protected:
    std::string codec_;
    bool codecIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string frameRate_;
    bool frameRateIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ImageAssetMeta_H_
