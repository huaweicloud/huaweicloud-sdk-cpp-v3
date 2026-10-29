

#include "huaweicloud/codeartscheck/v2/model/UpdateCodeGateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateCodeGateRequest::UpdateCodeGateRequest()
{
    operator_ = "";
    operatorIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateCodeGateRequest::~UpdateCodeGateRequest() = default;

void UpdateCodeGateRequest::validate()
{
}

web::json::value UpdateCodeGateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateCodeGateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateCodeGateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateCodeGateRequest::getOperator() const
{
    return operator_;
}

void UpdateCodeGateRequest::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool UpdateCodeGateRequest::operatorIsSet() const
{
    return operatorIsSet_;
}

void UpdateCodeGateRequest::unsetoperator()
{
    operatorIsSet_ = false;
}

UpdateCodeGateRequestBody UpdateCodeGateRequest::getBody() const
{
    return body_;
}

void UpdateCodeGateRequest::setBody(const UpdateCodeGateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCodeGateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCodeGateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


