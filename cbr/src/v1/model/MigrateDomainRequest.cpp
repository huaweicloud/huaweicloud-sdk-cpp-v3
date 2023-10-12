

#include "huaweicloud/cbr/v1/model/MigrateDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




MigrateDomainRequest::MigrateDomainRequest()
{
    bodyIsSet_ = false;
}

MigrateDomainRequest::~MigrateDomainRequest() = default;

void MigrateDomainRequest::validate()
{
}

web::json::value MigrateDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool MigrateDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DomainMigrate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DomainMigrate MigrateDomainRequest::getBody() const
{
    return body_;
}

void MigrateDomainRequest::setBody(const DomainMigrate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


