

#include "huaweicloud/ims/v2/model/ListOsVersionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListOsVersionsRequest::ListOsVersionsRequest()
{
    tag_ = "";
    tagIsSet_ = false;
}

ListOsVersionsRequest::~ListOsVersionsRequest() = default;

void ListOsVersionsRequest::validate()
{
}

web::json::value ListOsVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool ListOsVersionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}

std::string ListOsVersionsRequest::getTag() const
{
    return tag_;
}

void ListOsVersionsRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListOsVersionsRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListOsVersionsRequest::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


