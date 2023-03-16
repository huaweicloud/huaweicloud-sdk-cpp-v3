
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MvsInvoiceResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MvsInvoiceResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
    /// 购买方名称、二手车买方单位/个人
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
    /// 购买方纳税人识别号、二手车买方单位代码/身份证号
    /// </summary>

    std::string getBuyerId() const;
    bool buyerIdIsSet() const;
    void unsetbuyerId();
    void setBuyerId(const std::string& value);

    /// <summary>
    /// 二手车买方单位/个人住址。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getBuyerAddress() const;
    bool buyerAddressIsSet() const;
    void unsetbuyerAddress();
    void setBuyerAddress(const std::string& value);

    /// <summary>
    /// 二手车买方单位/个人电话。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getBuyerPhone() const;
    bool buyerPhoneIsSet() const;
    void unsetbuyerPhone();
    void setBuyerPhone(const std::string& value);

    /// <summary>
    /// 销货单位名称、二手车卖方单位/个人
    /// </summary>

    std::string getSellerName() const;
    bool sellerNameIsSet() const;
    void unsetsellerName();
    void setSellerName(const std::string& value);

    /// <summary>
    /// 销售方电话、二手车卖方电话
    /// </summary>

    std::string getSellerPhone() const;
    bool sellerPhoneIsSet() const;
    void unsetsellerPhone();
    void setSellerPhone(const std::string& value);

    /// <summary>
    /// 销售方纳税人识别号、二手车卖方单位代码/身份证号
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
    /// 销售方地址、二手车卖方单位/个人地址
    /// </summary>

    std::string getSellerAddress() const;
    bool sellerAddressIsSet() const;
    void unsetsellerAddress();
    void setSellerAddress(const std::string& value);

    /// <summary>
    /// 二手车车牌照号。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getLicencePlateNumber() const;
    bool licencePlateNumberIsSet() const;
    void unsetlicencePlateNumber();
    void setLicencePlateNumber(const std::string& value);

    /// <summary>
    /// 二手车登记证号。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getRegistrationNumber() const;
    bool registrationNumberIsSet() const;
    void unsetregistrationNumber();
    void setRegistrationNumber(const std::string& value);

    /// <summary>
    /// 二手车转入地车管所名称。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getDeptMotorVehicles() const;
    bool deptMotorVehiclesIsSet() const;
    void unsetdeptMotorVehicles();
    void setDeptMotorVehicles(const std::string& value);

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
    /// 价税合计、二手车车价合计（小写）
    /// </summary>

    std::string getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(const std::string& value);

    /// <summary>
    /// 价税合计大写、二手车车价合计（大写）
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

    /// <summary>
    /// 二手车经营拍卖单位名称。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getAuctionOrgName() const;
    bool auctionOrgNameIsSet() const;
    void unsetauctionOrgName();
    void setAuctionOrgName(const std::string& value);

    /// <summary>
    /// 二手车经营拍卖单位地址。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getAuctionOrgAddress() const;
    bool auctionOrgAddressIsSet() const;
    void unsetauctionOrgAddress();
    void setAuctionOrgAddress(const std::string& value);

    /// <summary>
    /// 二手车经营拍卖单位纳税人识别号。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getAuctionOrgId() const;
    bool auctionOrgIdIsSet() const;
    void unsetauctionOrgId();
    void setAuctionOrgId(const std::string& value);

    /// <summary>
    /// 二手车经营拍卖单位银行和账号。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getAuctionOrgBankAccount() const;
    bool auctionOrgBankAccountIsSet() const;
    void unsetauctionOrgBankAccount();
    void setAuctionOrgBankAccount(const std::string& value);

    /// <summary>
    /// 二手车经营拍卖单位电话。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getAuctionOrgPhone() const;
    bool auctionOrgPhoneIsSet() const;
    void unsetauctionOrgPhone();
    void setAuctionOrgPhone(const std::string& value);

    /// <summary>
    /// 二手车市场名称。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getUsedVehicleMarketName() const;
    bool usedVehicleMarketNameIsSet() const;
    void unsetusedVehicleMarketName();
    void setUsedVehicleMarketName(const std::string& value);

    /// <summary>
    /// 二手车市场纳税人识别号。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getUsedVehicleMarketId() const;
    bool usedVehicleMarketIdIsSet() const;
    void unsetusedVehicleMarketId();
    void setUsedVehicleMarketId(const std::string& value);

    /// <summary>
    /// 二手车市场地址。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getUsedVehicleMarketAddress() const;
    bool usedVehicleMarketAddressIsSet() const;
    void unsetusedVehicleMarketAddress();
    void setUsedVehicleMarketAddress(const std::string& value);

    /// <summary>
    /// 二手车市场银行和账号。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getUsedVehicleMarketBankAccount() const;
    bool usedVehicleMarketBankAccountIsSet() const;
    void unsetusedVehicleMarketBankAccount();
    void setUsedVehicleMarketBankAccount(const std::string& value);

    /// <summary>
    /// 二手车市场电话。 当请求参数\&quot;tpye\&quot;设置为\&quot;auto\&quot;或“used”时才返回。 
    /// </summary>

    std::string getUsedVehicleMarketPhone() const;
    bool usedVehicleMarketPhoneIsSet() const;
    void unsetusedVehicleMarketPhone();
    void setUsedVehicleMarketPhone(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 开票人
    /// </summary>

    std::string getDrawerName() const;
    bool drawerNameIsSet() const;
    void unsetdrawerName();
    void setDrawerName(const std::string& value);

    /// <summary>
    /// 枚举值，机动车销售统一发票或者二手车销售统一发票。 当入参中包含type时返回。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 检测框对象，内部为字段-框坐标对。如 code:[[x0, y0],[x1,y1],[x2,y2],[x3,y3]], 点的顺序是左上角、右上角、右下角、左下角。如果原图找不到字段，返回空列表。
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);

    /// <summary>
    /// 字段文字内容置信度，内容为字段-字符置信度对,如code:0.9999。这个数值为字段中每个字符置信度，格式为fp32，保留四位。若字段不存在则返回0.0。
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


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
    std::string buyerAddress_;
    bool buyerAddressIsSet_;
    std::string buyerPhone_;
    bool buyerPhoneIsSet_;
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
    std::string licencePlateNumber_;
    bool licencePlateNumberIsSet_;
    std::string registrationNumber_;
    bool registrationNumberIsSet_;
    std::string deptMotorVehicles_;
    bool deptMotorVehiclesIsSet_;
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
    std::string auctionOrgName_;
    bool auctionOrgNameIsSet_;
    std::string auctionOrgAddress_;
    bool auctionOrgAddressIsSet_;
    std::string auctionOrgId_;
    bool auctionOrgIdIsSet_;
    std::string auctionOrgBankAccount_;
    bool auctionOrgBankAccountIsSet_;
    std::string auctionOrgPhone_;
    bool auctionOrgPhoneIsSet_;
    std::string usedVehicleMarketName_;
    bool usedVehicleMarketNameIsSet_;
    std::string usedVehicleMarketId_;
    bool usedVehicleMarketIdIsSet_;
    std::string usedVehicleMarketAddress_;
    bool usedVehicleMarketAddressIsSet_;
    std::string usedVehicleMarketBankAccount_;
    bool usedVehicleMarketBankAccountIsSet_;
    std::string usedVehicleMarketPhone_;
    bool usedVehicleMarketPhoneIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string drawerName_;
    bool drawerNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MvsInvoiceResult_H_
