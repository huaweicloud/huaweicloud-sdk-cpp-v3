

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionMaxInstanceConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionMaxInstanceConfigRequest::UpdateFunctionMaxInstanceConfigRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFunctionMaxInstanceConfigRequest::~UpdateFunctionMaxInstanceConfigRequest() = default;

void UpdateFunctionMaxInstanceConfigRequest::validate()
{
}

web::json::value UpdateFunctionMaxInstanceConfigRequest::toJson() const
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
bool UpdateFunctionMaxInstanceConfigRequest::fromJson(const web::json::value& val)
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
            UpdateFunctionMaxInstanceConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionMaxInstanceConfigRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateFunctionMaxInstanceConfigRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateFunctionMaxInstanceConfigRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigRequest::getContentType() const
{
    return contentType_;
}

void UpdateFunctionMaxInstanceConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateFunctionMaxInstanceConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateFunctionMaxInstanceConfigRequestBody UpdateFunctionMaxInstanceConfigRequest::getBody() const
{
    return body_;
}

void UpdateFunctionMaxInstanceConfigRequest::setBody(const UpdateFunctionMaxInstanceConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFunctionMaxInstanceConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


