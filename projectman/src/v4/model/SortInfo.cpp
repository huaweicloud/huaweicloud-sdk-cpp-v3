

#include "huaweicloud/projectman/v4/model/SortInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SortInfo::SortInfo()
{
    asc_ = false;
    ascIsSet_ = false;
    field_ = "";
    fieldIsSet_ = false;
}

SortInfo::~SortInfo() = default;

void SortInfo::validate()
{
}

web::json::value SortInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ascIsSet_) {
        val[utility::conversions::to_string_t("asc")] = ModelBase::toJson(asc_);
    }
    if(fieldIsSet_) {
        val[utility::conversions::to_string_t("field")] = ModelBase::toJson(field_);
    }

    return val;
}
bool SortInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setField(refVal);
        }
    }
    return ok;
}


bool SortInfo::isAsc() const
{
    return asc_;
}

void SortInfo::setAsc(bool value)
{
    asc_ = value;
    ascIsSet_ = true;
}

bool SortInfo::ascIsSet() const
{
    return ascIsSet_;
}

void SortInfo::unsetasc()
{
    ascIsSet_ = false;
}

std::string SortInfo::getField() const
{
    return field_;
}

void SortInfo::setField(const std::string& value)
{
    field_ = value;
    fieldIsSet_ = true;
}

bool SortInfo::fieldIsSet() const
{
    return fieldIsSet_;
}

void SortInfo::unsetfield()
{
    fieldIsSet_ = false;
}

}
}
}
}
}


