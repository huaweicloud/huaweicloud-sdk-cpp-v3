

#include "huaweicloud/lts/v2/model/ListLogGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogGroupsRequest::ListLogGroupsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListLogGroupsRequest::~ListLogGroupsRequest() = default;

void ListLogGroupsRequest::validate()
{
}

web::json::value ListLogGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListLogGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListLogGroupsRequest::getContentType() const
{
    return contentType_;
}

void ListLogGroupsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListLogGroupsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListLogGroupsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


