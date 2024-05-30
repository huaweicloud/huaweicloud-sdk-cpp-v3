

#include "huaweicloud/organizations/v1/model/EnablePolicyTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




EnablePolicyTypeRequest::EnablePolicyTypeRequest()
{
    bodyIsSet_ = false;
}

EnablePolicyTypeRequest::~EnablePolicyTypeRequest() = default;

void EnablePolicyTypeRequest::validate()
{
}

web::json::value EnablePolicyTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnablePolicyTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PolicyTypeReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PolicyTypeReqBody EnablePolicyTypeRequest::getBody() const
{
    return body_;
}

void EnablePolicyTypeRequest::setBody(const PolicyTypeReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnablePolicyTypeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnablePolicyTypeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


