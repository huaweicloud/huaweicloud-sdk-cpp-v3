
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyRequestBody_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  InsurancePolicyRequestBody
    : public ModelBase
{
public:
    InsurancePolicyRequestBody();
    virtual ~InsurancePolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InsurancePolicyRequestBody members

    /// <summary>
    /// 图像数据，base64编码，要求base64编码后大小不超过10MB。图片最小边不小于15px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF格式。  图片文件Base64编码字符串，点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 为Boolean类型，若不传该字段，默认不检测图像倾斜角度文字方向，为True时，会检测倾斜角度并矫正识别
    /// </summary>

    bool isDetectDirection() const;
    bool detectDirectionIsSet() const;
    void unsetdetectDirection();
    void setDetectDirection(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    bool detectDirection_;
    bool detectDirectionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyRequestBody_H_
