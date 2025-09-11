

#include "huaweicloud/functiongraph/v2/model/CreateEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateEventRequest::CreateEventRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateEventRequest::~CreateEventRequest() = default;

void CreateEventRequest::validate()
{
}

web::json::value CreateEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateEventRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateEventRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateEventRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void CreateEventRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool CreateEventRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void CreateEventRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string CreateEventRequest::getContentType() const
{
    return contentType_;
}

void CreateEventRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateEventRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateEventRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateEventRequestBody CreateEventRequest::getBody() const
{
    return body_;
}

void CreateEventRequest::setBody(const CreateEventRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


