

#include "huaweicloud/codeartspipeline/v2/model/ListPipelinesPage_highest_confidentiality.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelinesPage_highest_confidentiality::ListPipelinesPage_highest_confidentiality()
{
    id_ = "";
    idIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    reserve1_ = "";
    reserve1IsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    valueEn_ = "";
    valueEnIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
}

ListPipelinesPage_highest_confidentiality::~ListPipelinesPage_highest_confidentiality() = default;

void ListPipelinesPage_highest_confidentiality::validate()
{
}

web::json::value ListPipelinesPage_highest_confidentiality::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(reserve1IsSet_) {
        val[utility::conversions::to_string_t("reserve_1")] = ModelBase::toJson(reserve1_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(valueEnIsSet_) {
        val[utility::conversions::to_string_t("value_en")] = ModelBase::toJson(valueEn_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool ListPipelinesPage_highest_confidentiality::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserve1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::string ListPipelinesPage_highest_confidentiality::getId() const
{
    return id_;
}

void ListPipelinesPage_highest_confidentiality::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListPipelinesPage_highest_confidentiality::idIsSet() const
{
    return idIsSet_;
}

void ListPipelinesPage_highest_confidentiality::unsetid()
{
    idIsSet_ = false;
}

std::string ListPipelinesPage_highest_confidentiality::getCode() const
{
    return code_;
}

void ListPipelinesPage_highest_confidentiality::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListPipelinesPage_highest_confidentiality::codeIsSet() const
{
    return codeIsSet_;
}

void ListPipelinesPage_highest_confidentiality::unsetcode()
{
    codeIsSet_ = false;
}

std::string ListPipelinesPage_highest_confidentiality::getReserve1() const
{
    return reserve1_;
}

void ListPipelinesPage_highest_confidentiality::setReserve1(const std::string& value)
{
    reserve1_ = value;
    reserve1IsSet_ = true;
}

bool ListPipelinesPage_highest_confidentiality::reserve1IsSet() const
{
    return reserve1IsSet_;
}

void ListPipelinesPage_highest_confidentiality::unsetreserve1()
{
    reserve1IsSet_ = false;
}

std::string ListPipelinesPage_highest_confidentiality::getValue() const
{
    return value_;
}

void ListPipelinesPage_highest_confidentiality::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListPipelinesPage_highest_confidentiality::valueIsSet() const
{
    return valueIsSet_;
}

void ListPipelinesPage_highest_confidentiality::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ListPipelinesPage_highest_confidentiality::getValueEn() const
{
    return valueEn_;
}

void ListPipelinesPage_highest_confidentiality::setValueEn(const std::string& value)
{
    valueEn_ = value;
    valueEnIsSet_ = true;
}

bool ListPipelinesPage_highest_confidentiality::valueEnIsSet() const
{
    return valueEnIsSet_;
}

void ListPipelinesPage_highest_confidentiality::unsetvalueEn()
{
    valueEnIsSet_ = false;
}

int32_t ListPipelinesPage_highest_confidentiality::getSequence() const
{
    return sequence_;
}

void ListPipelinesPage_highest_confidentiality::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ListPipelinesPage_highest_confidentiality::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ListPipelinesPage_highest_confidentiality::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


