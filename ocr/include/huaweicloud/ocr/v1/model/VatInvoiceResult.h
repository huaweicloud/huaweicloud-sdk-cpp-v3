
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VatInvoiceResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VatInvoiceResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/ocr/v1/model/ItemList.h>
#include <huaweicloud/ocr/v1/model/PassengerTravelItemList.h>
#include <vector>
#include <huaweicloud/ocr/v1/model/BelongItemList.h>

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
    /// 增值税发票标题 
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 增值税发票类型，取值包括： - special: 增值税专用发票  - normal: 增值税普通发票  - electronic: 增值税电子普通发票  - special_electronic: 增值税电子专用发票  - toll: 增值税电子普通发票（通行费）  - roll: 增值税普通发票（卷票）  - fully_digitalized_special_electronic: 全电专用发票  - fully_digitalized_normal_electronic: 全电普通发票 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 增值税发票左上角标志。取值包含：通行费、代开、成品油、收购、机动车、旅客运输服务。 当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getInvoiceTag() const;
    bool invoiceTagIsSet() const;
    void unsetinvoiceTag();
    void setInvoiceTag(const std::string& value);

    /// <summary>
    /// 小计金额，当传入为全电发票时返回此字段。 
    /// </summary>

    std::string getSumAmount() const;
    bool sumAmountIsSet() const;
    void unsetsumAmount();
    void setSumAmount(const std::string& value);

    /// <summary>
    /// 小计税额，当传入为全电发票时返回此字段。 
    /// </summary>

    std::string getSumTax() const;
    bool sumTaxIsSet() const;
    void unsetsumTax();
    void setSumTax(const std::string& value);

    /// <summary>
    /// 发票联次。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(const std::string& value);

    /// <summary>
    /// 发票归属地。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getAttribution() const;
    bool attributionIsSet() const;
    void unsetattribution();
    void setAttribution(const std::string& value);

    /// <summary>
    /// 发票监制章。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
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
    /// 机打代码。 当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getPrintCode() const;
    bool printCodeIsSet() const;
    void unsetprintCode();
    void setPrintCode(const std::string& value);

    /// <summary>
    /// 机器编号。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getMachineNumber() const;
    bool machineNumberIsSet() const;
    void unsetmachineNumber();
    void setMachineNumber(const std::string& value);

    /// <summary>
    /// 机打号码。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
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
    /// 价税合计（大写）。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getTotalInWords() const;
    bool totalInWordsIsSet() const;
    void unsettotalInWords();
    void setTotalInWords(const std::string& value);

    /// <summary>
    /// 备注。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);

    /// <summary>
    /// 收款人。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getReceiver() const;
    bool receiverIsSet() const;
    void unsetreceiver();
    void setReceiver(const std::string& value);

    /// <summary>
    /// 复核。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getReviewer() const;
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::string& value);

    /// <summary>
    /// 开票人。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
    /// </summary>

    std::string getIssuer() const;
    bool issuerIsSet() const;
    void unsetissuer();
    void setIssuer(const std::string& value);

    /// <summary>
    /// 销售方发票专用章。  当\&quot;advanced_mode\&quot;设置为\&quot;true\&quot;时才返回。 
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
    /// 省。 
    /// </summary>

    std::string getProvince() const;
    bool provinceIsSet() const;
    void unsetprovince();
    void setProvince(const std::string& value);

    /// <summary>
    /// 市。 
    /// </summary>

    std::string getCity() const;
    bool cityIsSet() const;
    void unsetcity();
    void setCity(const std::string& value);

    /// <summary>
    /// 各个字段的置信度。 当“advanced_mode”设置为“true”时才返回。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);

    /// <summary>
    /// 文本框在原图位置。输出左上、右上、右下、左下四个点坐标。当\&quot;return_text_location\&quot;设置为“true”时才返回。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);

    /// <summary>
    /// 销货清单的购买方名称。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongBuyerName() const;
    bool belongBuyerNameIsSet() const;
    void unsetbelongBuyerName();
    void setBelongBuyerName(const std::string& value);

    /// <summary>
    /// 销货清单的销售方名称。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongSellerName() const;
    bool belongSellerNameIsSet() const;
    void unsetbelongSellerName();
    void setBelongSellerName(const std::string& value);

    /// <summary>
    /// 所属的增值税发票代码。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongVatCode() const;
    bool belongVatCodeIsSet() const;
    void unsetbelongVatCode();
    void setBelongVatCode(const std::string& value);

    /// <summary>
    /// 销货清单的开票号码。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongNumber() const;
    bool belongNumberIsSet() const;
    void unsetbelongNumber();
    void setBelongNumber(const std::string& value);

    /// <summary>
    /// 销货清单的总页码数。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongPages() const;
    bool belongPagesIsSet() const;
    void unsetbelongPages();
    void setBelongPages(const std::string& value);

    /// <summary>
    /// 销货清单的当前页码。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongCurrentPage() const;
    bool belongCurrentPageIsSet() const;
    void unsetbelongCurrentPage();
    void setBelongCurrentPage(const std::string& value);

    /// <summary>
    /// 销货清单的备注。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongRemarks() const;
    bool belongRemarksIsSet() const;
    void unsetbelongRemarks();
    void setBelongRemarks(const std::string& value);

    /// <summary>
    /// 销货清单的填开日期。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongIssueDate() const;
    bool belongIssueDateIsSet() const;
    void unsetbelongIssueDate();
    void setBelongIssueDate(const std::string& value);

    /// <summary>
    /// 是否是销货清单，可选值为： - true：输入图片是销货清单。 - false：输入图片不是销货清单。 
    /// </summary>

    bool isSalesMark() const;
    bool salesMarkIsSet() const;
    void unsetsalesMark();
    void setSalesMark(bool value);

    /// <summary>
    /// 销货清单的小计金额。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongSumAmount() const;
    bool belongSumAmountIsSet() const;
    void unsetbelongSumAmount();
    void setBelongSumAmount(const std::string& value);

    /// <summary>
    /// 销货清单的小计税额。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongSumTax() const;
    bool belongSumTaxIsSet() const;
    void unsetbelongSumTax();
    void setBelongSumTax(const std::string& value);

    /// <summary>
    /// 销货清单的总计或者合计金额。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongSubtotalAmount() const;
    bool belongSubtotalAmountIsSet() const;
    void unsetbelongSubtotalAmount();
    void setBelongSubtotalAmount(const std::string& value);

    /// <summary>
    /// 销货清单的总计税额。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongSubtotalTax() const;
    bool belongSubtotalTaxIsSet() const;
    void unsetbelongSubtotalTax();
    void setBelongSubtotalTax(const std::string& value);

    /// <summary>
    /// 销货清单的折扣金额。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongDiscountAmount() const;
    bool belongDiscountAmountIsSet() const;
    void unsetbelongDiscountAmount();
    void setBelongDiscountAmount(const std::string& value);

    /// <summary>
    /// 销货清单的折扣税额。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::string getBelongDiscountTax() const;
    bool belongDiscountTaxIsSet() const;
    void unsetbelongDiscountTax();
    void setBelongDiscountTax(const std::string& value);

    /// <summary>
    /// 销货清单的货物（劳务）名称列表。 当传入图片为发票销货清单时返回此字段。 
    /// </summary>

    std::vector<BelongItemList>& getBelongItemList();
    bool belongItemListIsSet() const;
    void unsetbelongItemList();
    void setBelongItemList(const std::vector<BelongItemList>& value);

    /// <summary>
    /// 旅客运输服务的出行信息列表。 当传入图片为旅客运输服务发票时返回此字段。 
    /// </summary>

    std::vector<PassengerTravelItemList>& getPassengerTravelItemList();
    bool passengerTravelItemListIsSet() const;
    void unsetpassengerTravelItemList();
    void setPassengerTravelItemList(const std::vector<PassengerTravelItemList>& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string invoiceTag_;
    bool invoiceTagIsSet_;
    std::string sumAmount_;
    bool sumAmountIsSet_;
    std::string sumTax_;
    bool sumTaxIsSet_;
    std::string serialNumber_;
    bool serialNumberIsSet_;
    std::string attribution_;
    bool attributionIsSet_;
    std::vector<std::string> supervisionSeal_;
    bool supervisionSealIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string printCode_;
    bool printCodeIsSet_;
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
    std::string province_;
    bool provinceIsSet_;
    std::string city_;
    bool cityIsSet_;
    Object confidence_;
    bool confidenceIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;
    std::string belongBuyerName_;
    bool belongBuyerNameIsSet_;
    std::string belongSellerName_;
    bool belongSellerNameIsSet_;
    std::string belongVatCode_;
    bool belongVatCodeIsSet_;
    std::string belongNumber_;
    bool belongNumberIsSet_;
    std::string belongPages_;
    bool belongPagesIsSet_;
    std::string belongCurrentPage_;
    bool belongCurrentPageIsSet_;
    std::string belongRemarks_;
    bool belongRemarksIsSet_;
    std::string belongIssueDate_;
    bool belongIssueDateIsSet_;
    bool salesMark_;
    bool salesMarkIsSet_;
    std::string belongSumAmount_;
    bool belongSumAmountIsSet_;
    std::string belongSumTax_;
    bool belongSumTaxIsSet_;
    std::string belongSubtotalAmount_;
    bool belongSubtotalAmountIsSet_;
    std::string belongSubtotalTax_;
    bool belongSubtotalTaxIsSet_;
    std::string belongDiscountAmount_;
    bool belongDiscountAmountIsSet_;
    std::string belongDiscountTax_;
    bool belongDiscountTaxIsSet_;
    std::vector<BelongItemList> belongItemList_;
    bool belongItemListIsSet_;
    std::vector<PassengerTravelItemList> passengerTravelItemList_;
    bool passengerTravelItemListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VatInvoiceResult_H_
