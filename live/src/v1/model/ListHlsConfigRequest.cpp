

#include "huaweicloud/live/v1/model/ListHlsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListHlsConfigRequest::ListHlsConfigRequest()
{
    pushDomain_ = "";
    pushDomainIsSet_ = false;
}

ListHlsConfigRequest::~ListHlsConfigRequest() = default;

void ListHlsConfigRequest::validate()
{
}

web::json::value ListHlsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pushDomainIsSet_) {
        val[utility::conversions::to_string_t("push_domain")] = ModelBase::toJson(pushDomain_);
    }

    return val;
}
bool ListHlsConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("push_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushDomain(refVal);
        }
    }
    return ok;
}


std::string ListHlsConfigRequest::getPushDomain() const
{
    return pushDomain_;
}

void ListHlsConfigRequest::setPushDomain(const std::string& value)
{
    pushDomain_ = value;
    pushDomainIsSet_ = true;
}

bool ListHlsConfigRequest::pushDomainIsSet() const
{
    return pushDomainIsSet_;
}

void ListHlsConfigRequest::unsetpushDomain()
{
    pushDomainIsSet_ = false;
}

}
}
}
}
}


