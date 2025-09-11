

#include "huaweicloud/functiongraph/v2/model/CreateFunctionAppRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionAppRequest::CreateFunctionAppRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFunctionAppRequest::~CreateFunctionAppRequest() = default;

void CreateFunctionAppRequest::validate()
{
}

web::json::value CreateFunctionAppRequest::toJson() const
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
bool CreateFunctionAppRequest::fromJson(const web::json::value& val)
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
            CreateFunctionAppRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionAppRequest::getContentType() const
{
    return contentType_;
}

void CreateFunctionAppRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateFunctionAppRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateFunctionAppRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateFunctionAppRequestBody CreateFunctionAppRequest::getBody() const
{
    return body_;
}

void CreateFunctionAppRequest::setBody(const CreateFunctionAppRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFunctionAppRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFunctionAppRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


