

#include "huaweicloud/functiongraph/v2/model/ListBridgeFunctionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListBridgeFunctionsRequest::ListBridgeFunctionsRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListBridgeFunctionsRequest::~ListBridgeFunctionsRequest() = default;

void ListBridgeFunctionsRequest::validate()
{
}

web::json::value ListBridgeFunctionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListBridgeFunctionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
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


std::string ListBridgeFunctionsRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListBridgeFunctionsRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListBridgeFunctionsRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListBridgeFunctionsRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListBridgeFunctionsRequest::getType() const
{
    return type_;
}

void ListBridgeFunctionsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListBridgeFunctionsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListBridgeFunctionsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListBridgeFunctionsRequest::getContentType() const
{
    return contentType_;
}

void ListBridgeFunctionsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListBridgeFunctionsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListBridgeFunctionsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


