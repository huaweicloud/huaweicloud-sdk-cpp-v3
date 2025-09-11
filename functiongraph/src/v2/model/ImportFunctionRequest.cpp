

#include "huaweicloud/functiongraph/v2/model/ImportFunctionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ImportFunctionRequest::ImportFunctionRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ImportFunctionRequest::~ImportFunctionRequest() = default;

void ImportFunctionRequest::validate()
{
}

web::json::value ImportFunctionRequest::toJson() const
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
bool ImportFunctionRequest::fromJson(const web::json::value& val)
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
            ImportFunctionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportFunctionRequest::getContentType() const
{
    return contentType_;
}

void ImportFunctionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ImportFunctionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ImportFunctionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

ImportFunctionRequestBody ImportFunctionRequest::getBody() const
{
    return body_;
}

void ImportFunctionRequest::setBody(const ImportFunctionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportFunctionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportFunctionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


