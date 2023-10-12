

#include "huaweicloud/lts/v2/model/DeleteAomMappingRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteAomMappingRulesResponse::DeleteAomMappingRulesResponse()
{
    bodyIsSet_ = false;
}

DeleteAomMappingRulesResponse::~DeleteAomMappingRulesResponse() = default;

void DeleteAomMappingRulesResponse::validate()
{
}

web::json::value DeleteAomMappingRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAomMappingRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteAomMappingRulesResponse::getBody()
{
    return body_;
}

void DeleteAomMappingRulesResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAomMappingRulesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAomMappingRulesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


