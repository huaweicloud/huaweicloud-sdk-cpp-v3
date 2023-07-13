

#include "huaweicloud/cbr/v1/model/MigrateDomainResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




MigrateDomainResponse::MigrateDomainResponse()
{
    bodyIsSet_ = false;
}

MigrateDomainResponse::~MigrateDomainResponse() = default;

void MigrateDomainResponse::validate()
{
}

web::json::value MigrateDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool MigrateDomainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::map<std::string, std::string>& MigrateDomainResponse::getBody()
{
    return body_;
}

void MigrateDomainResponse::setBody(const std::map<std::string, std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateDomainResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateDomainResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


