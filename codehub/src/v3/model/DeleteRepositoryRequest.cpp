

#include "huaweicloud/codehub/v3/model/DeleteRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




DeleteRepositoryRequest::DeleteRepositoryRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

DeleteRepositoryRequest::~DeleteRepositoryRequest() = default;

void DeleteRepositoryRequest::validate()
{
}

web::json::value DeleteRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool DeleteRepositoryRequest::fromJson(const web::json::value& val)
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


std::string DeleteRepositoryRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void DeleteRepositoryRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool DeleteRepositoryRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void DeleteRepositoryRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


