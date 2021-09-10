
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_InvoiceVerificationRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_InvoiceVerificationRequestBody_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  InvoiceVerificationRequestBody
    : public ModelBase
{
public:
    InvoiceVerificationRequestBody();
    virtual ~InvoiceVerificationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InvoiceVerificationRequestBody members

    /// <summary>
    /// 发票代码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 发票号码
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 发票日期格式YYYY-MM-DD
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 校验码后六位  发票种类为增值税普通发票、增值税电子普通发票、增值税普通发票（卷式）、增值税电子普通发票（通行费）、区块链电子发票时此项不可为空（区块链电子发票验真时，填写的是5位校验码） 
    /// </summary>

    std::string getCheckCode() const;
    bool checkCodeIsSet() const;
    void unsetcheckCode();
    void setCheckCode(const std::string& value);

    /// <summary>
    /// 合计金额（不含税）  1.发票种类为增值税专用发票、增值税电子专用发票、机动车销售统一发票、二手车销售统一发票、区块链电子发票时不可为空； 2.增值税专用发票、增值税电子专用发票、机动车销售统一发票、区块链电子发票填写发票合计金额（不含税），二手车发票填写发票车价合计 
    /// </summary>

    std::string getSubtotalAmount() const;
    bool subtotalAmountIsSet() const;
    void unsetsubtotalAmount();
    void setSubtotalAmount(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string checkCode_;
    bool checkCodeIsSet_;
    std::string subtotalAmount_;
    bool subtotalAmountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_InvoiceVerificationRequestBody_H_
