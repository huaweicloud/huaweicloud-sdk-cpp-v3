

#include "huaweicloud/gaussdb/v3/model/ModifyProxyConsistRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyProxyConsistRequest::ModifyProxyConsistRequest()
{
    sessionConsistence_ = "";
    sessionConsistenceIsSet_ = false;
}

ModifyProxyConsistRequest::~ModifyProxyConsistRequest() = default;

void ModifyProxyConsistRequest::validate()
{
}

web::json::value ModifyProxyConsistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionConsistenceIsSet_) {
        val[utility::conversions::to_string_t("session_consistence")] = ModelBase::toJson(sessionConsistence_);
    }

    return val;
}

bool ModifyProxyConsistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("session_consistence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_consistence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionConsistence(refVal);
        }
    }
    return ok;
}

std::string ModifyProxyConsistRequest::getSessionConsistence() const
{
    return sessionConsistence_;
}

void ModifyProxyConsistRequest::setSessionConsistence(const std::string& value)
{
    sessionConsistence_ = value;
    sessionConsistenceIsSet_ = true;
}

bool ModifyProxyConsistRequest::sessionConsistenceIsSet() const
{
    return sessionConsistenceIsSet_;
}

void ModifyProxyConsistRequest::unsetsessionConsistence()
{
    sessionConsistenceIsSet_ = false;
}

}
}
}
}
}


