

#include "huaweicloud/eip/v3/model/ListPublicBorderGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListPublicBorderGroupsRequest::ListPublicBorderGroupsRequest()
{
    fields_ = "";
    fieldsIsSet_ = false;
}

ListPublicBorderGroupsRequest::~ListPublicBorderGroupsRequest() = default;

void ListPublicBorderGroupsRequest::validate()
{
}

web::json::value ListPublicBorderGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ListPublicBorderGroupsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListPublicBorderGroupsRequest::getFields() const
{
    return fields_;
}

void ListPublicBorderGroupsRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListPublicBorderGroupsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListPublicBorderGroupsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


