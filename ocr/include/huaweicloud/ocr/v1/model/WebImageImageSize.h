
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageImageSize_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageImageSize_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_OCR_V1_EXPORT  WebImageImageSize
    : public ModelBase
{
public:
    WebImageImageSize();
    virtual ~WebImageImageSize();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WebImageImageSize members

    /// <summary>
    /// 传入image_size时的返回，为图像高度。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 传入image_size时的返回，为图像宽度。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


protected:
    int32_t height_;
    bool heightIsSet_;
    int32_t width_;
    bool widthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageImageSize_H_
