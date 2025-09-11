

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionCodeRequest::UpdateFunctionCodeRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFunctionCodeRequest::~UpdateFunctionCodeRequest() = default;

void UpdateFunctionCodeRequest::validate()
{
}

web::json::value UpdateFunctionCodeRequest::toJson() const
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
bool UpdateFunctionCodeRequest::fromJson(const web::json::value& val)
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
            UpdateFunctionCodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionCodeRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateFunctionCodeRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateFunctionCodeRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateFunctionCodeRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateFunctionCodeRequest::getContentType() const
{
    return contentType_;
}

void UpdateFunctionCodeRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateFunctionCodeRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateFunctionCodeRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateFunctionCodeRequestBody UpdateFunctionCodeRequest::getBody() const
{
    return body_;
}

void UpdateFunctionCodeRequest::setBody(const UpdateFunctionCodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFunctionCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFunctionCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


