
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_BelongItemList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_BelongItemList_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  BelongItemList
    : public ModelBase
{
public:
    BelongItemList();
    virtual ~BelongItemList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BelongItemList members

    /// <summary>
    /// 货物或应税劳务、服务名称。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 序号。 
    /// </summary>

    std::string getItemNumber() const;
    bool itemNumberIsSet() const;
    void unsetitemNumber();
    void setItemNumber(const std::string& value);

    /// <summary>
    /// 规格型号。 
    /// </summary>

    std::string getSpecification() const;
    bool specificationIsSet() const;
    void unsetspecification();
    void setSpecification(const std::string& value);

    /// <summary>
    /// 单位。 
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// 数量。 
    /// </summary>

    std::string getQuantity() const;
    bool quantityIsSet() const;
    void unsetquantity();
    void setQuantity(const std::string& value);

    /// <summary>
    /// 单价。 
    /// </summary>

    std::string getUnitPrice() const;
    bool unitPriceIsSet() const;
    void unsetunitPrice();
    void setUnitPrice(const std::string& value);

    /// <summary>
    /// 金额。 
    /// </summary>

    std::string getAmount() const;
    bool amountIsSet() const;
    void unsetamount();
    void setAmount(const std::string& value);

    /// <summary>
    /// 税率。 
    /// </summary>

    std::string getTaxRate() const;
    bool taxRateIsSet() const;
    void unsettaxRate();
    void setTaxRate(const std::string& value);

    /// <summary>
    /// 税额。 
    /// </summary>

    std::string getTax() const;
    bool taxIsSet() const;
    void unsettax();
    void setTax(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string itemNumber_;
    bool itemNumberIsSet_;
    std::string specification_;
    bool specificationIsSet_;
    std::string unit_;
    bool unitIsSet_;
    std::string quantity_;
    bool quantityIsSet_;
    std::string unitPrice_;
    bool unitPriceIsSet_;
    std::string amount_;
    bool amountIsSet_;
    std::string taxRate_;
    bool taxRateIsSet_;
    std::string tax_;
    bool taxIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_BelongItemList_H_
