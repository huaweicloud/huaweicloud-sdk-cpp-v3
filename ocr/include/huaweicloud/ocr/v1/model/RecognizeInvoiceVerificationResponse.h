
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeInvoiceVerificationResponse_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeInvoiceVerificationResponse_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  RecognizeInvoiceVerificationResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeInvoiceVerificationResponse();
    virtual ~RecognizeInvoiceVerificationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecognizeInvoiceVerificationResponse members

    /// <summary>
    /// 调用成功时表示调用结果，详情参见[响应参数](https://support.huaweicloud.com/api-ocr/ocr_03_0134.html#ocr_03_0134__table266mcpsimp)。  调用失败时无此字段。 依据发票类型不同，返回参数不同。 - 增值税发票   含增值税专用发票、增值税普通发票、增值税普通发票（卷式）、增值税电子专用发票、增值税电子普通发票、增值税电子普通发票（通行费）、区块链电子发票。 - 机动车销售统一发票 - 二手车销售统一发票 
    /// </summary>

    Object getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    Object result_;
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

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RecognizeInvoiceVerificationResponse_H_
