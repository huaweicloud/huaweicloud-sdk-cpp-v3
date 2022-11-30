
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordRequestBody_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  PcrTestRecordRequestBody
    : public ModelBase
{
public:
    PcrTestRecordRequestBody();
    virtual ~PcrTestRecordRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PcrTestRecordRequestBody members

    /// <summary>
    /// 图像数据，base64编码，图片尺寸不小于15×15像素，最长边不超过8192像素，支持JPG/PNG/BMP/TIFF格式。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一  图片的URL路径，目前仅支持华为云上OBS提供的匿名公开授权访问的URL以及公网URL。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 校正图片的倾斜角度开关，可选值如下所示：  - true：校正图片的倾斜角度  - false：不校正图片的倾斜角度  支持任意角度的校正，未传入该参数时默认为“false”。 
    /// </summary>

    bool isDetectDirection() const;
    bool detectDirectionIsSet() const;
    void unsetdetectDirection();
    void setDetectDirection(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool detectDirection_;
    bool detectDirectionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordRequestBody_H_
