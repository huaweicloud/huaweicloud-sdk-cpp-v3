

#include "huaweicloud/projectman/v4/model/ListIssueRequestV4_custom_fields.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueRequestV4_custom_fields::ListIssueRequestV4_custom_fields()
{
    customField_ = "";
    customFieldIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ListIssueRequestV4_custom_fields::~ListIssueRequestV4_custom_fields() = default;

void ListIssueRequestV4_custom_fields::validate()
{
}

web::json::value ListIssueRequestV4_custom_fields::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customFieldIsSet_) {
        val[utility::conversions::to_string_t("custom_field")] = ModelBase::toJson(customField_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ListIssueRequestV4_custom_fields::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField(refVal);
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
    return ok;
}


std::string ListIssueRequestV4_custom_fields::getCustomField() const
{
    return customField_;
}

void ListIssueRequestV4_custom_fields::setCustomField(const std::string& value)
{
    customField_ = value;
    customFieldIsSet_ = true;
}

bool ListIssueRequestV4_custom_fields::customFieldIsSet() const
{
    return customFieldIsSet_;
}

void ListIssueRequestV4_custom_fields::unsetcustomField()
{
    customFieldIsSet_ = false;
}

std::string ListIssueRequestV4_custom_fields::getValue() const
{
    return value_;
}

void ListIssueRequestV4_custom_fields::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListIssueRequestV4_custom_fields::valueIsSet() const
{
    return valueIsSet_;
}

void ListIssueRequestV4_custom_fields::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


