

#include "huaweicloud/live/v1/model/DeleteSnapshotConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteSnapshotConfigRequest::DeleteSnapshotConfigRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
}

DeleteSnapshotConfigRequest::~DeleteSnapshotConfigRequest() = default;

void DeleteSnapshotConfigRequest::validate()
{
}

web::json::value DeleteSnapshotConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }

    return val;
}

bool DeleteSnapshotConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    return ok;
}


std::string DeleteSnapshotConfigRequest::getDomain() const
{
    return domain_;
}

void DeleteSnapshotConfigRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteSnapshotConfigRequest::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteSnapshotConfigRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string DeleteSnapshotConfigRequest::getAppName() const
{
    return appName_;
}

void DeleteSnapshotConfigRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool DeleteSnapshotConfigRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void DeleteSnapshotConfigRequest::unsetappName()
{
    appNameIsSet_ = false;
}

}
}
}
}
}


