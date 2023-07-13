

#include "huaweicloud/ocr/v1/model/InsurantItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




InsurantItem::InsurantItem()
{
    insurantNameIsSet_ = false;
    insurantSexIsSet_ = false;
    insurantBirthdayIsSet_ = false;
    insurantIdTypeIsSet_ = false;
    insurantIdNumberIsSet_ = false;
}

InsurantItem::~InsurantItem() = default;

void InsurantItem::validate()
{
}

web::json::value InsurantItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(insurantNameIsSet_) {
        val[utility::conversions::to_string_t("insurant_name")] = ModelBase::toJson(insurantName_);
    }
    if(insurantSexIsSet_) {
        val[utility::conversions::to_string_t("insurant_sex")] = ModelBase::toJson(insurantSex_);
    }
    if(insurantBirthdayIsSet_) {
        val[utility::conversions::to_string_t("insurant_birthday")] = ModelBase::toJson(insurantBirthday_);
    }
    if(insurantIdTypeIsSet_) {
        val[utility::conversions::to_string_t("insurant_id_type")] = ModelBase::toJson(insurantIdType_);
    }
    if(insurantIdNumberIsSet_) {
        val[utility::conversions::to_string_t("insurant_id_number")] = ModelBase::toJson(insurantIdNumber_);
    }

    return val;
}

bool InsurantItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("insurant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurant_name"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurant_sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurant_sex"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurantSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurant_birthday"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurant_birthday"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurantBirthday(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurant_id_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurant_id_type"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurantIdType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurant_id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurant_id_number"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurantIdNumber(refVal);
        }
    }
    return ok;
}

InsurancePolicyDetail InsurantItem::getInsurantName() const
{
    return insurantName_;
}

void InsurantItem::setInsurantName(const InsurancePolicyDetail& value)
{
    insurantName_ = value;
    insurantNameIsSet_ = true;
}

bool InsurantItem::insurantNameIsSet() const
{
    return insurantNameIsSet_;
}

void InsurantItem::unsetinsurantName()
{
    insurantNameIsSet_ = false;
}

InsurancePolicyDetail InsurantItem::getInsurantSex() const
{
    return insurantSex_;
}

void InsurantItem::setInsurantSex(const InsurancePolicyDetail& value)
{
    insurantSex_ = value;
    insurantSexIsSet_ = true;
}

bool InsurantItem::insurantSexIsSet() const
{
    return insurantSexIsSet_;
}

void InsurantItem::unsetinsurantSex()
{
    insurantSexIsSet_ = false;
}

InsurancePolicyDetail InsurantItem::getInsurantBirthday() const
{
    return insurantBirthday_;
}

void InsurantItem::setInsurantBirthday(const InsurancePolicyDetail& value)
{
    insurantBirthday_ = value;
    insurantBirthdayIsSet_ = true;
}

bool InsurantItem::insurantBirthdayIsSet() const
{
    return insurantBirthdayIsSet_;
}

void InsurantItem::unsetinsurantBirthday()
{
    insurantBirthdayIsSet_ = false;
}

InsurancePolicyDetail InsurantItem::getInsurantIdType() const
{
    return insurantIdType_;
}

void InsurantItem::setInsurantIdType(const InsurancePolicyDetail& value)
{
    insurantIdType_ = value;
    insurantIdTypeIsSet_ = true;
}

bool InsurantItem::insurantIdTypeIsSet() const
{
    return insurantIdTypeIsSet_;
}

void InsurantItem::unsetinsurantIdType()
{
    insurantIdTypeIsSet_ = false;
}

InsurancePolicyDetail InsurantItem::getInsurantIdNumber() const
{
    return insurantIdNumber_;
}

void InsurantItem::setInsurantIdNumber(const InsurancePolicyDetail& value)
{
    insurantIdNumber_ = value;
    insurantIdNumberIsSet_ = true;
}

bool InsurantItem::insurantIdNumberIsSet() const
{
    return insurantIdNumberIsSet_;
}

void InsurantItem::unsetinsurantIdNumber()
{
    insurantIdNumberIsSet_ = false;
}

}
}
}
}
}


