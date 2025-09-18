

#include "huaweicloud/projectman/v4/model/ListIssueCustomFieldsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueCustomFieldsRequestBody::ListIssueCustomFieldsRequestBody()
{
    customFieldsIsSet_ = false;
    namesIsSet_ = false;
    includedNotInUse_ = false;
    includedNotInUseIsSet_ = false;
}

ListIssueCustomFieldsRequestBody::~ListIssueCustomFieldsRequestBody() = default;

void ListIssueCustomFieldsRequestBody::validate()
{
}

web::json::value ListIssueCustomFieldsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }
    if(namesIsSet_) {
        val[utility::conversions::to_string_t("names")] = ModelBase::toJson(names_);
    }
    if(includedNotInUseIsSet_) {
        val[utility::conversions::to_string_t("included_not_in_use")] = ModelBase::toJson(includedNotInUse_);
    }

    return val;
}
bool ListIssueCustomFieldsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("included_not_in_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("included_not_in_use"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludedNotInUse(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListIssueCustomFieldsRequestBody::getCustomFields()
{
    return customFields_;
}

void ListIssueCustomFieldsRequestBody::setCustomFields(const std::vector<std::string>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool ListIssueCustomFieldsRequestBody::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void ListIssueCustomFieldsRequestBody::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

std::vector<std::string>& ListIssueCustomFieldsRequestBody::getNames()
{
    return names_;
}

void ListIssueCustomFieldsRequestBody::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool ListIssueCustomFieldsRequestBody::namesIsSet() const
{
    return namesIsSet_;
}

void ListIssueCustomFieldsRequestBody::unsetnames()
{
    namesIsSet_ = false;
}

bool ListIssueCustomFieldsRequestBody::isIncludedNotInUse() const
{
    return includedNotInUse_;
}

void ListIssueCustomFieldsRequestBody::setIncludedNotInUse(bool value)
{
    includedNotInUse_ = value;
    includedNotInUseIsSet_ = true;
}

bool ListIssueCustomFieldsRequestBody::includedNotInUseIsSet() const
{
    return includedNotInUseIsSet_;
}

void ListIssueCustomFieldsRequestBody::unsetincludedNotInUse()
{
    includedNotInUseIsSet_ = false;
}

}
}
}
}
}


