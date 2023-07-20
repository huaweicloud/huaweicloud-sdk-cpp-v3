

#include "huaweicloud/gaussdbfornosql/v3/model/CompareConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CompareConfigurationRequest::CompareConfigurationRequest()
{
    bodyIsSet_ = false;
}

CompareConfigurationRequest::~CompareConfigurationRequest() = default;

void CompareConfigurationRequest::validate()
{
}

web::json::value CompareConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CompareConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CompareConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CompareConfigurationRequestBody CompareConfigurationRequest::getBody() const
{
    return body_;
}

void CompareConfigurationRequest::setBody(const CompareConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CompareConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CompareConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


