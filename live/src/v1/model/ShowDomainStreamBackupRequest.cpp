

#include "huaweicloud/live/v1/model/ShowDomainStreamBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowDomainStreamBackupRequest::ShowDomainStreamBackupRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
}

ShowDomainStreamBackupRequest::~ShowDomainStreamBackupRequest() = default;

void ShowDomainStreamBackupRequest::validate()
{
}

web::json::value ShowDomainStreamBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }

    return val;
}
bool ShowDomainStreamBackupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    return ok;
}


std::string ShowDomainStreamBackupRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ShowDomainStreamBackupRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ShowDomainStreamBackupRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ShowDomainStreamBackupRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

}
}
}
}
}


