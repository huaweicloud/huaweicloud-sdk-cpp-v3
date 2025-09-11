

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionReservedInstancesCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionReservedInstancesCountRequest::UpdateFunctionReservedInstancesCountRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFunctionReservedInstancesCountRequest::~UpdateFunctionReservedInstancesCountRequest() = default;

void UpdateFunctionReservedInstancesCountRequest::validate()
{
}

web::json::value UpdateFunctionReservedInstancesCountRequest::toJson() const
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
bool UpdateFunctionReservedInstancesCountRequest::fromJson(const web::json::value& val)
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
            UpdateFunctionReservedInstancesCountRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionReservedInstancesCountRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateFunctionReservedInstancesCountRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateFunctionReservedInstancesCountRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateFunctionReservedInstancesCountRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateFunctionReservedInstancesCountRequest::getContentType() const
{
    return contentType_;
}

void UpdateFunctionReservedInstancesCountRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateFunctionReservedInstancesCountRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateFunctionReservedInstancesCountRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateFunctionReservedInstancesCountRequestBody UpdateFunctionReservedInstancesCountRequest::getBody() const
{
    return body_;
}

void UpdateFunctionReservedInstancesCountRequest::setBody(const UpdateFunctionReservedInstancesCountRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFunctionReservedInstancesCountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFunctionReservedInstancesCountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


