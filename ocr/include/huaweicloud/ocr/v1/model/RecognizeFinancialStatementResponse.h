
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeFinancialStatementResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeFinancialStatementResponse_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/FinancialStatementResult.h>
#include <string>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeFinancialStatementResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeFinancialStatementResponse();
    virtual ~RecognizeFinancialStatementResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecognizeFinancialStatementResponse members

    /// <summary>
    /// 
    /// </summary>

    FinancialStatementResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const FinancialStatementResult& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    FinancialStatementResult result_;
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

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeFinancialStatementResponse_H_
