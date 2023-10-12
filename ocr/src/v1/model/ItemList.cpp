

#include "huaweicloud/ocr/v1/model/ItemList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ItemList::ItemList()
{
    name_ = "";
    nameIsSet_ = false;
    specification_ = "";
    specificationIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    quantity_ = "";
    quantityIsSet_ = false;
    unitPrice_ = "";
    unitPriceIsSet_ = false;
    licensePlateNumber_ = "";
    licensePlateNumberIsSet_ = false;
    amount_ = "";
    amountIsSet_ = false;
    taxRate_ = "";
    taxRateIsSet_ = false;
    tax_ = "";
    taxIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    vehicleType_ = "";
    vehicleTypeIsSet_ = false;
}

ItemList::~ItemList() = default;

void ItemList::validate()
{
}

web::json::value ItemList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(licensePlateNumberIsSet_) {
        val[utility::conversions::to_string_t("license_plate_number")] = ModelBase::toJson(licensePlateNumber_);
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
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(vehicleTypeIsSet_) {
        val[utility::conversions::to_string_t("vehicle_type")] = ModelBase::toJson(vehicleType_);
    }

    return val;
}
bool ItemList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("license_plate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("license_plate_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLicensePlateNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleType(refVal);
        }
    }
    return ok;
}


std::string ItemList::getName() const
{
    return name_;
}

void ItemList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ItemList::nameIsSet() const
{
    return nameIsSet_;
}

void ItemList::unsetname()
{
    nameIsSet_ = false;
}

std::string ItemList::getSpecification() const
{
    return specification_;
}

void ItemList::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool ItemList::specificationIsSet() const
{
    return specificationIsSet_;
}

void ItemList::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string ItemList::getUnit() const
{
    return unit_;
}

void ItemList::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ItemList::unitIsSet() const
{
    return unitIsSet_;
}

void ItemList::unsetunit()
{
    unitIsSet_ = false;
}

std::string ItemList::getQuantity() const
{
    return quantity_;
}

void ItemList::setQuantity(const std::string& value)
{
    quantity_ = value;
    quantityIsSet_ = true;
}

bool ItemList::quantityIsSet() const
{
    return quantityIsSet_;
}

void ItemList::unsetquantity()
{
    quantityIsSet_ = false;
}

std::string ItemList::getUnitPrice() const
{
    return unitPrice_;
}

void ItemList::setUnitPrice(const std::string& value)
{
    unitPrice_ = value;
    unitPriceIsSet_ = true;
}

bool ItemList::unitPriceIsSet() const
{
    return unitPriceIsSet_;
}

void ItemList::unsetunitPrice()
{
    unitPriceIsSet_ = false;
}

std::string ItemList::getLicensePlateNumber() const
{
    return licensePlateNumber_;
}

void ItemList::setLicensePlateNumber(const std::string& value)
{
    licensePlateNumber_ = value;
    licensePlateNumberIsSet_ = true;
}

bool ItemList::licensePlateNumberIsSet() const
{
    return licensePlateNumberIsSet_;
}

void ItemList::unsetlicensePlateNumber()
{
    licensePlateNumberIsSet_ = false;
}

std::string ItemList::getAmount() const
{
    return amount_;
}

void ItemList::setAmount(const std::string& value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool ItemList::amountIsSet() const
{
    return amountIsSet_;
}

void ItemList::unsetamount()
{
    amountIsSet_ = false;
}

std::string ItemList::getTaxRate() const
{
    return taxRate_;
}

void ItemList::setTaxRate(const std::string& value)
{
    taxRate_ = value;
    taxRateIsSet_ = true;
}

bool ItemList::taxRateIsSet() const
{
    return taxRateIsSet_;
}

void ItemList::unsettaxRate()
{
    taxRateIsSet_ = false;
}

std::string ItemList::getTax() const
{
    return tax_;
}

void ItemList::setTax(const std::string& value)
{
    tax_ = value;
    taxIsSet_ = true;
}

bool ItemList::taxIsSet() const
{
    return taxIsSet_;
}

void ItemList::unsettax()
{
    taxIsSet_ = false;
}

std::string ItemList::getEndDate() const
{
    return endDate_;
}

void ItemList::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ItemList::endDateIsSet() const
{
    return endDateIsSet_;
}

void ItemList::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string ItemList::getStartDate() const
{
    return startDate_;
}

void ItemList::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ItemList::startDateIsSet() const
{
    return startDateIsSet_;
}

void ItemList::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ItemList::getVehicleType() const
{
    return vehicleType_;
}

void ItemList::setVehicleType(const std::string& value)
{
    vehicleType_ = value;
    vehicleTypeIsSet_ = true;
}

bool ItemList::vehicleTypeIsSet() const
{
    return vehicleTypeIsSet_;
}

void ItemList::unsetvehicleType()
{
    vehicleTypeIsSet_ = false;
}

}
}
}
}
}


