

#include "huaweicloud/ocr/v1/model/BeneficiaryItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BeneficiaryItem::BeneficiaryItem()
{
    beneficiaryNameIsSet_ = false;
    beneficiaryTypeIsSet_ = false;
    beneficiaryOrderIsSet_ = false;
    beneficiaryShareIsSet_ = false;
}

BeneficiaryItem::~BeneficiaryItem() = default;

void BeneficiaryItem::validate()
{
}

web::json::value BeneficiaryItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beneficiaryNameIsSet_) {
        val[utility::conversions::to_string_t("beneficiary_name")] = ModelBase::toJson(beneficiaryName_);
    }
    if(beneficiaryTypeIsSet_) {
        val[utility::conversions::to_string_t("beneficiary_type")] = ModelBase::toJson(beneficiaryType_);
    }
    if(beneficiaryOrderIsSet_) {
        val[utility::conversions::to_string_t("beneficiary_order")] = ModelBase::toJson(beneficiaryOrder_);
    }
    if(beneficiaryShareIsSet_) {
        val[utility::conversions::to_string_t("beneficiary_share")] = ModelBase::toJson(beneficiaryShare_);
    }

    return val;
}

bool BeneficiaryItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("beneficiary_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beneficiary_name"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeneficiaryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beneficiary_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beneficiary_type"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeneficiaryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beneficiary_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beneficiary_order"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeneficiaryOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beneficiary_share"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beneficiary_share"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeneficiaryShare(refVal);
        }
    }
    return ok;
}


InsurancePolicyDetail BeneficiaryItem::getBeneficiaryName() const
{
    return beneficiaryName_;
}

void BeneficiaryItem::setBeneficiaryName(const InsurancePolicyDetail& value)
{
    beneficiaryName_ = value;
    beneficiaryNameIsSet_ = true;
}

bool BeneficiaryItem::beneficiaryNameIsSet() const
{
    return beneficiaryNameIsSet_;
}

void BeneficiaryItem::unsetbeneficiaryName()
{
    beneficiaryNameIsSet_ = false;
}

InsurancePolicyDetail BeneficiaryItem::getBeneficiaryType() const
{
    return beneficiaryType_;
}

void BeneficiaryItem::setBeneficiaryType(const InsurancePolicyDetail& value)
{
    beneficiaryType_ = value;
    beneficiaryTypeIsSet_ = true;
}

bool BeneficiaryItem::beneficiaryTypeIsSet() const
{
    return beneficiaryTypeIsSet_;
}

void BeneficiaryItem::unsetbeneficiaryType()
{
    beneficiaryTypeIsSet_ = false;
}

Object BeneficiaryItem::getBeneficiaryOrder() const
{
    return beneficiaryOrder_;
}

void BeneficiaryItem::setBeneficiaryOrder(const Object& value)
{
    beneficiaryOrder_ = value;
    beneficiaryOrderIsSet_ = true;
}

bool BeneficiaryItem::beneficiaryOrderIsSet() const
{
    return beneficiaryOrderIsSet_;
}

void BeneficiaryItem::unsetbeneficiaryOrder()
{
    beneficiaryOrderIsSet_ = false;
}

InsurancePolicyDetail BeneficiaryItem::getBeneficiaryShare() const
{
    return beneficiaryShare_;
}

void BeneficiaryItem::setBeneficiaryShare(const InsurancePolicyDetail& value)
{
    beneficiaryShare_ = value;
    beneficiaryShareIsSet_ = true;
}

bool BeneficiaryItem::beneficiaryShareIsSet() const
{
    return beneficiaryShareIsSet_;
}

void BeneficiaryItem::unsetbeneficiaryShare()
{
    beneficiaryShareIsSet_ = false;
}

}
}
}
}
}


