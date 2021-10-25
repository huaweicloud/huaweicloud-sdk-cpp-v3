
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeQualificationCertificateRequest_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeQualificationCertificateRequest_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/QualificationCertificateRequestBody.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeQualificationCertificateRequest
    : public ModelBase
{
public:
    RecognizeQualificationCertificateRequest();
    virtual ~RecognizeQualificationCertificateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeQualificationCertificateRequest members

    /// <summary>
    /// 
    /// </summary>

    QualificationCertificateRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QualificationCertificateRequestBody& value);


protected:
    QualificationCertificateRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RecognizeQualificationCertificateRequest& dereference_from_shared_ptr(std::shared_ptr<RecognizeQualificationCertificateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeQualificationCertificateRequest_H_
