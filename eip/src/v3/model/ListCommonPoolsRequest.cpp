

#include "huaweicloud/eip/v3/model/ListCommonPoolsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListCommonPoolsRequest::ListCommonPoolsRequest()
{
    fields_ = "";
    fieldsIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
}

ListCommonPoolsRequest::~ListCommonPoolsRequest() = default;

void ListCommonPoolsRequest::validate()
{
}

web::json::value ListCommonPoolsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }

    return val;
}

bool ListCommonPoolsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    return ok;
}


std::string ListCommonPoolsRequest::getFields() const
{
    return fields_;
}

void ListCommonPoolsRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListCommonPoolsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListCommonPoolsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListCommonPoolsRequest::getName() const
{
    return name_;
}

void ListCommonPoolsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListCommonPoolsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListCommonPoolsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListCommonPoolsRequest::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListCommonPoolsRequest::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListCommonPoolsRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListCommonPoolsRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


