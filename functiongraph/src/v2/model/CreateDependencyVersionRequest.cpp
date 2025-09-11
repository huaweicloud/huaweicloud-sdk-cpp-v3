

#include "huaweicloud/functiongraph/v2/model/CreateDependencyVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateDependencyVersionRequest::CreateDependencyVersionRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDependencyVersionRequest::~CreateDependencyVersionRequest() = default;

void CreateDependencyVersionRequest::validate()
{
}

web::json::value CreateDependencyVersionRequest::toJson() const
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
bool CreateDependencyVersionRequest::fromJson(const web::json::value& val)
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
            CreateDependencyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDependencyVersionRequest::getContentType() const
{
    return contentType_;
}

void CreateDependencyVersionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateDependencyVersionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateDependencyVersionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateDependencyRequestBody CreateDependencyVersionRequest::getBody() const
{
    return body_;
}

void CreateDependencyVersionRequest::setBody(const CreateDependencyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDependencyVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDependencyVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


