

#include "huaweicloud/functiongraph/v2/model/CreateFunctionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionRequest::CreateFunctionRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFunctionRequest::~CreateFunctionRequest() = default;

void CreateFunctionRequest::validate()
{
}

web::json::value CreateFunctionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateFunctionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateFunctionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionRequest::getContentType() const
{
    return contentType_;
}

void CreateFunctionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateFunctionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateFunctionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateFunctionRequestBody CreateFunctionRequest::getBody() const
{
    return body_;
}

void CreateFunctionRequest::setBody(const CreateFunctionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFunctionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFunctionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


