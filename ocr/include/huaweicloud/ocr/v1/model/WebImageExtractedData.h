
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageExtractedData_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageExtractedData_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/WebImageContactInfo.h>
#include <huaweicloud/ocr/v1/model/WebImageImageSize.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  WebImageExtractedData
    : public ModelBase
{
public:
    WebImageExtractedData();
    virtual ~WebImageExtractedData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WebImageExtractedData members

    /// <summary>
    /// 
    /// </summary>

    WebImageContactInfo getContactInfo() const;
    bool contactInfoIsSet() const;
    void unsetcontactInfo();
    void setContactInfo(const WebImageContactInfo& value);

    /// <summary>
    /// 
    /// </summary>

    WebImageImageSize getImageSize() const;
    bool imageSizeIsSet() const;
    void unsetimageSize();
    void setImageSize(const WebImageImageSize& value);


protected:
    WebImageContactInfo contactInfo_;
    bool contactInfoIsSet_;
    WebImageImageSize imageSize_;
    bool imageSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageExtractedData_H_
