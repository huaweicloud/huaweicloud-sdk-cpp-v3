
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_QuotaInvoiceResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_QuotaInvoiceResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  QuotaInvoiceResult
    : public ModelBase
{
public:
    QuotaInvoiceResult();
    virtual ~QuotaInvoiceResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaInvoiceResult members

    /// <summary>
    /// 发票号码。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 发票代码。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 地址。 
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// 发票金额。 
    /// </summary>

    std::string getAmount() const;
    bool amountIsSet() const;
    void unsetamount();
    void setAmount(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string number_;
    bool numberIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string amount_;
    bool amountIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_QuotaInvoiceResult_H_
