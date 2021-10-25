
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeQualificationCertificateResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeQualificationCertificateResponse_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/QualificationCertificateResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeQualificationCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeQualificationCertificateResponse();
    virtual ~RecognizeQualificationCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeQualificationCertificateResponse members

    /// <summary>
    /// 
    /// </summary>

    QualificationCertificateResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const QualificationCertificateResult& value);


protected:
    QualificationCertificateResult result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeQualificationCertificateResponse_H_
