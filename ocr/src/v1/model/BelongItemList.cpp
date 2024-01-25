

#include "huaweicloud/ocr/v1/model/BelongItemList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BelongItemList::BelongItemList()
{
    name_ = "";
    nameIsSet_ = false;
    itemNumber_ = "";
    itemNumberIsSet_ = false;
    specification_ = "";
    specificationIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    quantity_ = "";
    quantityIsSet_ = false;
    unitPrice_ = "";
    unitPriceIsSet_ = false;
    amount_ = "";
    amountIsSet_ = false;
    taxRate_ = "";
    taxRateIsSet_ = false;
    tax_ = "";
    taxIsSet_ = false;
}

BelongItemList::~BelongItemList() = default;

void BelongItemList::validate()
{
}

web::json::value BelongItemList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(itemNumberIsSet_) {
        val[utility::conversions::to_string_t("item_number")] = ModelBase::toJson(itemNumber_);
    }
    if(specificationIsSet_) {
        val[utility::conversions::to_string_t("specification")] = ModelBase::toJson(specification_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(quantityIsSet_) {
        val[utility::conversions::to_string_t("quantity")] = ModelBase::toJson(quantity_);
    }
    if(unitPriceIsSet_) {
        val[utility::conversions::to_string_t("unit_price")] = ModelBase::toJson(unitPrice_);
    }
    if(amountIsSet_) {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(amount_);
    }
    if(taxRateIsSet_) {
        val[utility::conversions::to_string_t("tax_rate")] = ModelBase::toJson(taxRate_);
    }
    if(taxIsSet_) {
        val[utility::conversions::to_string_t("tax")] = ModelBase::toJson(tax_);
    }

    return val;
}
bool BelongItemList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("specification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecification(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quantity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit_price"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_price"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitPrice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTax(refVal);
        }
    }
    return ok;
}


std::string BelongItemList::getName() const
{
    return name_;
}

void BelongItemList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BelongItemList::nameIsSet() const
{
    return nameIsSet_;
}

void BelongItemList::unsetname()
{
    nameIsSet_ = false;
}

std::string BelongItemList::getItemNumber() const
{
    return itemNumber_;
}

void BelongItemList::setItemNumber(const std::string& value)
{
    itemNumber_ = value;
    itemNumberIsSet_ = true;
}

bool BelongItemList::itemNumberIsSet() const
{
    return itemNumberIsSet_;
}

void BelongItemList::unsetitemNumber()
{
    itemNumberIsSet_ = false;
}

std::string BelongItemList::getSpecification() const
{
    return specification_;
}

void BelongItemList::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool BelongItemList::specificationIsSet() const
{
    return specificationIsSet_;
}

void BelongItemList::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string BelongItemList::getUnit() const
{
    return unit_;
}

void BelongItemList::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool BelongItemList::unitIsSet() const
{
    return unitIsSet_;
}

void BelongItemList::unsetunit()
{
    unitIsSet_ = false;
}

std::string BelongItemList::getQuantity() const
{
    return quantity_;
}

void BelongItemList::setQuantity(const std::string& value)
{
    quantity_ = value;
    quantityIsSet_ = true;
}

bool BelongItemList::quantityIsSet() const
{
    return quantityIsSet_;
}

void BelongItemList::unsetquantity()
{
    quantityIsSet_ = false;
}

std::string BelongItemList::getUnitPrice() const
{
    return unitPrice_;
}

void BelongItemList::setUnitPrice(const std::string& value)
{
    unitPrice_ = value;
    unitPriceIsSet_ = true;
}

bool BelongItemList::unitPriceIsSet() const
{
    return unitPriceIsSet_;
}

void BelongItemList::unsetunitPrice()
{
    unitPriceIsSet_ = false;
}

std::string BelongItemList::getAmount() const
{
    return amount_;
}

void BelongItemList::setAmount(const std::string& value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool BelongItemList::amountIsSet() const
{
    return amountIsSet_;
}

void BelongItemList::unsetamount()
{
    amountIsSet_ = false;
}

std::string BelongItemList::getTaxRate() const
{
    return taxRate_;
}

void BelongItemList::setTaxRate(const std::string& value)
{
    taxRate_ = value;
    taxRateIsSet_ = true;
}

bool BelongItemList::taxRateIsSet() const
{
    return taxRateIsSet_;
}

void BelongItemList::unsettaxRate()
{
    taxRateIsSet_ = false;
}

std::string BelongItemList::getTax() const
{
    return tax_;
}

void BelongItemList::setTax(const std::string& value)
{
    tax_ = value;
    taxIsSet_ = true;
}

bool BelongItemList::taxIsSet() const
{
    return taxIsSet_;
}

void BelongItemList::unsettax()
{
    taxIsSet_ = false;
}

}
}
}
}
}


