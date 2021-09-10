
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VatInvoiceResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VatInvoiceResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/ocr/v1/model/ItemList.h>
#include <vector>

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
class HUAWEICLOUD_OCR_V1_EXPORT  VatInvoiceResult
    : public ModelBase
{
public:
    VatInvoiceResult();
    virtual ~VatInvoiceResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VatInvoiceResult members

    /// <summary>
    /// 增值税发票类型，可选值包括：  - special: 增值税专用发票  - normal: 增值税普通发票  - electronic: 增值税电子普通发票 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 发票联次。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(const std::string& value);

    /// <summary>
    /// 发票归属地。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getAttribution() const;
    bool attributionIsSet() const;
    void unsetattribution();
    void setAttribution(const std::string& value);

    /// <summary>
    /// 发票监制章。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::vector<std::string>& getSupervisionSeal();
    bool supervisionSealIsSet() const;
    void unsetsupervisionSeal();
    void setSupervisionSeal(const std::vector<std::string>& value);

    /// <summary>
    /// 发票代码。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 机器编号。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getMachineNumber() const;
    bool machineNumberIsSet() const;
    void unsetmachineNumber();
    void setMachineNumber(const std::string& value);

    /// <summary>
    /// 机打号码。 当“advanced_mode”设置为“true”时才返回 
    /// </summary>

    std::string getPrintNumber() const;
    bool printNumberIsSet() const;
    void unsetprintNumber();
    void setPrintNumber(const std::string& value);

    /// <summary>
    /// 发票校验码，特定类型增值税发票内不存在该信息时返回空字符串。 
    /// </summary>

    std::string getCheckCode() const;
    bool checkCodeIsSet() const;
    void unsetcheckCode();
    void setCheckCode(const std::string& value);

    /// <summary>
    /// 发票号码。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 开票日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 密码区。 
    /// </summary>

    std::string getEncryptionBlock() const;
    bool encryptionBlockIsSet() const;
    void unsetencryptionBlock();
    void setEncryptionBlock(const std::string& value);

    /// <summary>
    /// 购买方名称。 
    /// </summary>

    std::string getBuyerName() const;
    bool buyerNameIsSet() const;
    void unsetbuyerName();
    void setBuyerName(const std::string& value);

    /// <summary>
    /// 购买方纳税人识别号。 
    /// </summary>

    std::string getBuyerId() const;
    bool buyerIdIsSet() const;
    void unsetbuyerId();
    void setBuyerId(const std::string& value);

    /// <summary>
    /// 购买方地址、电话。 
    /// </summary>

    std::string getBuyerAddress() const;
    bool buyerAddressIsSet() const;
    void unsetbuyerAddress();
    void setBuyerAddress(const std::string& value);

    /// <summary>
    /// 购买方开户行及帐号。 
    /// </summary>

    std::string getBuyerBank() const;
    bool buyerBankIsSet() const;
    void unsetbuyerBank();
    void setBuyerBank(const std::string& value);

    /// <summary>
    /// 销售方名称。 
    /// </summary>

    std::string getSellerName() const;
    bool sellerNameIsSet() const;
    void unsetsellerName();
    void setSellerName(const std::string& value);

    /// <summary>
    /// 销售方纳税人识别号。 
    /// </summary>

    std::string getSellerId() const;
    bool sellerIdIsSet() const;
    void unsetsellerId();
    void setSellerId(const std::string& value);

    /// <summary>
    /// 销售方地址、电话。 
    /// </summary>

    std::string getSellerAddress() const;
    bool sellerAddressIsSet() const;
    void unsetsellerAddress();
    void setSellerAddress(const std::string& value);

    /// <summary>
    /// 销售方开户行及帐号。 
    /// </summary>

    std::string getSellerBank() const;
    bool sellerBankIsSet() const;
    void unsetsellerBank();
    void setSellerBank(const std::string& value);

    /// <summary>
    /// 合计金额。 
    /// </summary>

    std::string getSubtotalAmount() const;
    bool subtotalAmountIsSet() const;
    void unsetsubtotalAmount();
    void setSubtotalAmount(const std::string& value);

    /// <summary>
    /// 合计税额。 
    /// </summary>

    std::string getSubtotalTax() const;
    bool subtotalTaxIsSet() const;
    void unsetsubtotalTax();
    void setSubtotalTax(const std::string& value);

    /// <summary>
    /// 价税合计。 
    /// </summary>

    std::string getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(const std::string& value);

    /// <summary>
    /// 价税合计（大写）。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getTotalInWords() const;
    bool totalInWordsIsSet() const;
    void unsettotalInWords();
    void setTotalInWords(const std::string& value);

    /// <summary>
    /// 备注。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);

    /// <summary>
    /// 收款人。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getReceiver() const;
    bool receiverIsSet() const;
    void unsetreceiver();
    void setReceiver(const std::string& value);

    /// <summary>
    /// 复核。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getReviewer() const;
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::string& value);

    /// <summary>
    /// 开票人。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::string getIssuer() const;
    bool issuerIsSet() const;
    void unsetissuer();
    void setIssuer(const std::string& value);

    /// <summary>
    /// 销售方发票专用章。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    std::vector<std::string>& getSellerSeal();
    bool sellerSealIsSet() const;
    void unsetsellerSeal();
    void setSellerSeal(const std::vector<std::string>& value);

    /// <summary>
    /// 货物或应税劳务列表。 
    /// </summary>

    std::vector<ItemList>& getItemList();
    bool itemListIsSet() const;
    void unsetitemList();
    void setItemList(const std::vector<ItemList>& value);

    /// <summary>
    /// 各个字段的置信度。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string serialNumber_;
    bool serialNumberIsSet_;
    std::string attribution_;
    bool attributionIsSet_;
    std::vector<std::string> supervisionSeal_;
    bool supervisionSealIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string machineNumber_;
    bool machineNumberIsSet_;
    std::string printNumber_;
    bool printNumberIsSet_;
    std::string checkCode_;
    bool checkCodeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string encryptionBlock_;
    bool encryptionBlockIsSet_;
    std::string buyerName_;
    bool buyerNameIsSet_;
    std::string buyerId_;
    bool buyerIdIsSet_;
    std::string buyerAddress_;
    bool buyerAddressIsSet_;
    std::string buyerBank_;
    bool buyerBankIsSet_;
    std::string sellerName_;
    bool sellerNameIsSet_;
    std::string sellerId_;
    bool sellerIdIsSet_;
    std::string sellerAddress_;
    bool sellerAddressIsSet_;
    std::string sellerBank_;
    bool sellerBankIsSet_;
    std::string subtotalAmount_;
    bool subtotalAmountIsSet_;
    std::string subtotalTax_;
    bool subtotalTaxIsSet_;
    std::string total_;
    bool totalIsSet_;
    std::string totalInWords_;
    bool totalInWordsIsSet_;
    std::string remarks_;
    bool remarksIsSet_;
    std::string receiver_;
    bool receiverIsSet_;
    std::string reviewer_;
    bool reviewerIsSet_;
    std::string issuer_;
    bool issuerIsSet_;
    std::vector<std::string> sellerSeal_;
    bool sellerSealIsSet_;
    std::vector<ItemList> itemList_;
    bool itemListIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VatInvoiceResult_H_
