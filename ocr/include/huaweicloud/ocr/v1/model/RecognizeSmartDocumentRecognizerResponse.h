
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeSmartDocumentRecognizerResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeSmartDocumentRecognizerResponse_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerResult.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeSmartDocumentRecognizerResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeSmartDocumentRecognizerResponse();
    virtual ~RecognizeSmartDocumentRecognizerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecognizeSmartDocumentRecognizerResponse members

    /// <summary>
    /// 调用成功时返回的结果列表，按页面顺序返回，列表第一项为第一页识别结果，依次类推。 调用失败时无此字段。 
    /// </summary>

    std::vector<SmartDocumentRecognizerResult>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<SmartDocumentRecognizerResult>& value);


protected:
    std::vector<SmartDocumentRecognizerResult> result_;
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

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeSmartDocumentRecognizerResponse_H_
