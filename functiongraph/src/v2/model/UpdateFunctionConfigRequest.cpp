

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionConfigRequest::UpdateFunctionConfigRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFunctionConfigRequest::~UpdateFunctionConfigRequest() = default;

void UpdateFunctionConfigRequest::validate()
{
}

web::json::value UpdateFunctionConfigRequest::toJson() const
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
bool UpdateFunctionConfigRequest::fromJson(const web::json::value& val)
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
            UpdateFunctionConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionConfigRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateFunctionConfigRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateFunctionConfigRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateFunctionConfigRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateFunctionConfigRequest::getContentType() const
{
    return contentType_;
}

void UpdateFunctionConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateFunctionConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateFunctionConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateFunctionConfigRequestBody UpdateFunctionConfigRequest::getBody() const
{
    return body_;
}

void UpdateFunctionConfigRequest::setBody(const UpdateFunctionConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFunctionConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFunctionConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


