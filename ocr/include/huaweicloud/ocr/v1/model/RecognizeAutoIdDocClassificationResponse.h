
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeAutoIdDocClassificationResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeAutoIdDocClassificationResponse_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/AutoIdDocClassificationResult.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeAutoIdDocClassificationResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeAutoIdDocClassificationResponse();
    virtual ~RecognizeAutoIdDocClassificationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecognizeAutoIdDocClassificationResponse members

    /// <summary>
    /// 
    /// </summary>

    AutoIdDocClassificationResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const AutoIdDocClassificationResult& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    AutoIdDocClassificationResult result_;
    bool resultIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeAutoIdDocClassificationResponse_H_
