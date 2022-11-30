
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MvsInvoiceResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MvsInvoiceResult_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  MvsInvoiceResult
    : public ModelBase
{
public:
    MvsInvoiceResult();
    virtual ~MvsInvoiceResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MvsInvoiceResult members

    /// <summary>
    /// 发票代码。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 发票号码。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 机打代码。 
    /// </summary>

    std::string getMachinePrintedCode() const;
    bool machinePrintedCodeIsSet() const;
    void unsetmachinePrintedCode();
    void setMachinePrintedCode(const std::string& value);

    /// <summary>
    /// 机打号码。 
    /// </summary>

    std::string getMachinePrintedNumber() const;
    bool machinePrintedNumberIsSet() const;
    void unsetmachinePrintedNumber();
    void setMachinePrintedNumber(const std::string& value);

    /// <summary>
    /// 开票日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 机器编号。 
    /// </summary>

    std::string getMachineNumber() const;
    bool machineNumberIsSet() const;
    void unsetmachineNumber();
    void setMachineNumber(const std::string& value);

    /// <summary>
    /// 购买方名称。 
    /// </summary>

    std::string getBuyerName() const;
    bool buyerNameIsSet() const;
    void unsetbuyerName();
    void setBuyerName(const std::string& value);

    /// <summary>
    /// 购买方身份证号码/组织机构代码。 
    /// </summary>

    std::string getBuyerOrganizationNumber() const;
    bool buyerOrganizationNumberIsSet() const;
    void unsetbuyerOrganizationNumber();
    void setBuyerOrganizationNumber(const std::string& value);

    /// <summary>
    /// 购买方纳税人识别号。 
    /// </summary>

    std::string getBuyerId() const;
    bool buyerIdIsSet() const;
    void unsetbuyerId();
    void setBuyerId(const std::string& value);

    /// <summary>
    /// 销货单位名称。 
    /// </summary>

    std::string getSellerName() const;
    bool sellerNameIsSet() const;
    void unsetsellerName();
    void setSellerName(const std::string& value);

    /// <summary>
    /// 销售方电话。 
    /// </summary>

    std::string getSellerPhone() const;
    bool sellerPhoneIsSet() const;
    void unsetsellerPhone();
    void setSellerPhone(const std::string& value);

    /// <summary>
    /// 销售方纳税人识别号。 
    /// </summary>

    std::string getSellerId() const;
    bool sellerIdIsSet() const;
    void unsetsellerId();
    void setSellerId(const std::string& value);

    /// <summary>
    /// 销售方账号。 
    /// </summary>

    std::string getSellerAccount() const;
    bool sellerAccountIsSet() const;
    void unsetsellerAccount();
    void setSellerAccount(const std::string& value);

    /// <summary>
    /// 销售方地址。 
    /// </summary>

    std::string getSellerAddress() const;
    bool sellerAddressIsSet() const;
    void unsetsellerAddress();
    void setSellerAddress(const std::string& value);

    /// <summary>
    /// 销售方开户行。 
    /// </summary>

    std::string getSellerBank() const;
    bool sellerBankIsSet() const;
    void unsetsellerBank();
    void setSellerBank(const std::string& value);

    /// <summary>
    /// 车辆类型。 
    /// </summary>

    std::string getVehicleType() const;
    bool vehicleTypeIsSet() const;
    void unsetvehicleType();
    void setVehicleType(const std::string& value);

    /// <summary>
    /// 厂牌型号。 
    /// </summary>

    std::string getBrandModel() const;
    bool brandModelIsSet() const;
    void unsetbrandModel();
    void setBrandModel(const std::string& value);

    /// <summary>
    /// 产地。 
    /// </summary>

    std::string getManufacturingLocation() const;
    bool manufacturingLocationIsSet() const;
    void unsetmanufacturingLocation();
    void setManufacturingLocation(const std::string& value);

    /// <summary>
    /// 合格证号。 
    /// </summary>

    std::string getQualityCertificate() const;
    bool qualityCertificateIsSet() const;
    void unsetqualityCertificate();
    void setQualityCertificate(const std::string& value);

    /// <summary>
    /// 进口证明书号。 
    /// </summary>

    std::string getImportCertificate() const;
    bool importCertificateIsSet() const;
    void unsetimportCertificate();
    void setImportCertificate(const std::string& value);

    /// <summary>
    /// 商检单号。 
    /// </summary>

    std::string getInspectionNumber() const;
    bool inspectionNumberIsSet() const;
    void unsetinspectionNumber();
    void setInspectionNumber(const std::string& value);

    /// <summary>
    /// 发动机号码。 
    /// </summary>

    std::string getEngineNumber() const;
    bool engineNumberIsSet() const;
    void unsetengineNumber();
    void setEngineNumber(const std::string& value);

    /// <summary>
    /// 车辆识别代号/车架号码。 
    /// </summary>

    std::string getVehicleIdentificationNumber() const;
    bool vehicleIdentificationNumberIsSet() const;
    void unsetvehicleIdentificationNumber();
    void setVehicleIdentificationNumber(const std::string& value);

    /// <summary>
    /// 吨位。 
    /// </summary>

    std::string getTonnage() const;
    bool tonnageIsSet() const;
    void unsettonnage();
    void setTonnage(const std::string& value);

    /// <summary>
    /// 限乘人数。 
    /// </summary>

    std::string getSeatingCapacity() const;
    bool seatingCapacityIsSet() const;
    void unsetseatingCapacity();
    void setSeatingCapacity(const std::string& value);

    /// <summary>
    /// 主管税务机关。 
    /// </summary>

    std::string getTaxAuthority() const;
    bool taxAuthorityIsSet() const;
    void unsettaxAuthority();
    void setTaxAuthority(const std::string& value);

    /// <summary>
    /// 主管税务机关代码。 
    /// </summary>

    std::string getTaxAuthorityCode() const;
    bool taxAuthorityCodeIsSet() const;
    void unsettaxAuthorityCode();
    void setTaxAuthorityCode(const std::string& value);

    /// <summary>
    /// 完税凭证号码。 
    /// </summary>

    std::string getTaxPaymentReceipt() const;
    bool taxPaymentReceiptIsSet() const;
    void unsettaxPaymentReceipt();
    void setTaxPaymentReceipt(const std::string& value);

    /// <summary>
    /// 增值税税率或征收率。 
    /// </summary>

    std::string getTaxRate() const;
    bool taxRateIsSet() const;
    void unsettaxRate();
    void setTaxRate(const std::string& value);

    /// <summary>
    /// 增值税税额。 
    /// </summary>

    std::string getTax() const;
    bool taxIsSet() const;
    void unsettax();
    void setTax(const std::string& value);

    /// <summary>
    /// 不含税价。 
    /// </summary>

    std::string getTaxExclusivePrice() const;
    bool taxExclusivePriceIsSet() const;
    void unsettaxExclusivePrice();
    void setTaxExclusivePrice(const std::string& value);

    /// <summary>
    /// 价税合计。 
    /// </summary>

    std::string getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(const std::string& value);

    /// <summary>
    /// 价税合计大写。 
    /// </summary>

    std::string getTotalChinese() const;
    bool totalChineseIsSet() const;
    void unsettotalChinese();
    void setTotalChinese(const std::string& value);

    /// <summary>
    /// 税控码。 
    /// </summary>

    std::string getFiscalCode() const;
    bool fiscalCodeIsSet() const;
    void unsetfiscalCode();
    void setFiscalCode(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string machinePrintedCode_;
    bool machinePrintedCodeIsSet_;
    std::string machinePrintedNumber_;
    bool machinePrintedNumberIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string machineNumber_;
    bool machineNumberIsSet_;
    std::string buyerName_;
    bool buyerNameIsSet_;
    std::string buyerOrganizationNumber_;
    bool buyerOrganizationNumberIsSet_;
    std::string buyerId_;
    bool buyerIdIsSet_;
    std::string sellerName_;
    bool sellerNameIsSet_;
    std::string sellerPhone_;
    bool sellerPhoneIsSet_;
    std::string sellerId_;
    bool sellerIdIsSet_;
    std::string sellerAccount_;
    bool sellerAccountIsSet_;
    std::string sellerAddress_;
    bool sellerAddressIsSet_;
    std::string sellerBank_;
    bool sellerBankIsSet_;
    std::string vehicleType_;
    bool vehicleTypeIsSet_;
    std::string brandModel_;
    bool brandModelIsSet_;
    std::string manufacturingLocation_;
    bool manufacturingLocationIsSet_;
    std::string qualityCertificate_;
    bool qualityCertificateIsSet_;
    std::string importCertificate_;
    bool importCertificateIsSet_;
    std::string inspectionNumber_;
    bool inspectionNumberIsSet_;
    std::string engineNumber_;
    bool engineNumberIsSet_;
    std::string vehicleIdentificationNumber_;
    bool vehicleIdentificationNumberIsSet_;
    std::string tonnage_;
    bool tonnageIsSet_;
    std::string seatingCapacity_;
    bool seatingCapacityIsSet_;
    std::string taxAuthority_;
    bool taxAuthorityIsSet_;
    std::string taxAuthorityCode_;
    bool taxAuthorityCodeIsSet_;
    std::string taxPaymentReceipt_;
    bool taxPaymentReceiptIsSet_;
    std::string taxRate_;
    bool taxRateIsSet_;
    std::string tax_;
    bool taxIsSet_;
    std::string taxExclusivePrice_;
    bool taxExclusivePriceIsSet_;
    std::string total_;
    bool totalIsSet_;
    std::string totalChinese_;
    bool totalChineseIsSet_;
    std::string fiscalCode_;
    bool fiscalCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MvsInvoiceResult_H_
