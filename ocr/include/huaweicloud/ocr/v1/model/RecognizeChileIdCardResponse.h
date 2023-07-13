
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeChileIdCardResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeChileIdCardResponse_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/ChileIdCardResult.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeChileIdCardResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeChileIdCardResponse();
    virtual ~RecognizeChileIdCardResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeChileIdCardResponse members

    /// <summary>
    /// 
    /// </summary>

    ChileIdCardResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ChileIdCardResult& value);


protected:
    ChileIdCardResult result_;
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

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeChileIdCardResponse_H_
