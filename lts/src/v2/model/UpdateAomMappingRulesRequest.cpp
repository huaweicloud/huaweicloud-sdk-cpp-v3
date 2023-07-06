

#include "huaweicloud/lts/v2/model/UpdateAomMappingRulesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateAomMappingRulesRequest::UpdateAomMappingRulesRequest()
{
    bodyIsSet_ = false;
}

UpdateAomMappingRulesRequest::~UpdateAomMappingRulesRequest() = default;

void UpdateAomMappingRulesRequest::validate()
{
}

web::json::value UpdateAomMappingRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateAomMappingRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAomMappingRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

UpdateAomMappingRequest UpdateAomMappingRulesRequest::getBody() const
{
    return body_;
}

void UpdateAomMappingRulesRequest::setBody(const UpdateAomMappingRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAomMappingRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAomMappingRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


