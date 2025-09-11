

#include "huaweicloud/functiongraph/v2/model/ListBridgeVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListBridgeVersionsRequest::ListBridgeVersionsRequest()
{
    type_ = "";
    typeIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListBridgeVersionsRequest::~ListBridgeVersionsRequest() = default;

void ListBridgeVersionsRequest::validate()
{
}

web::json::value ListBridgeVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListBridgeVersionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
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


std::string ListBridgeVersionsRequest::getType() const
{
    return type_;
}

void ListBridgeVersionsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListBridgeVersionsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListBridgeVersionsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListBridgeVersionsRequest::getContentType() const
{
    return contentType_;
}

void ListBridgeVersionsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListBridgeVersionsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListBridgeVersionsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


