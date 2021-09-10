
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeBusinessLicenseRequest_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeBusinessLicenseRequest_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/BusinessLicenseRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeBusinessLicenseRequest
    : public ModelBase
{
public:
    RecognizeBusinessLicenseRequest();
    virtual ~RecognizeBusinessLicenseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeBusinessLicenseRequest members

    /// <summary>
    /// 
    /// </summary>

    BusinessLicenseRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BusinessLicenseRequestBody& value);


protected:
    BusinessLicenseRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RecognizeBusinessLicenseRequest& dereference_from_shared_ptr(std::shared_ptr<RecognizeBusinessLicenseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeBusinessLicenseRequest_H_
