

#include "huaweicloud/codehub/v3/model/ShowRepositoryByUuidRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowRepositoryByUuidRequest::ShowRepositoryByUuidRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

ShowRepositoryByUuidRequest::~ShowRepositoryByUuidRequest() = default;

void ShowRepositoryByUuidRequest::validate()
{
}

web::json::value ShowRepositoryByUuidRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool ShowRepositoryByUuidRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryByUuidRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ShowRepositoryByUuidRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ShowRepositoryByUuidRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ShowRepositoryByUuidRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


