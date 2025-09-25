

#include "huaweicloud/codehub/v3/model/GetRepositoryByProjectIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




GetRepositoryByProjectIdRequest::GetRepositoryByProjectIdRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

GetRepositoryByProjectIdRequest::~GetRepositoryByProjectIdRequest() = default;

void GetRepositoryByProjectIdRequest::validate()
{
}

web::json::value GetRepositoryByProjectIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool GetRepositoryByProjectIdRequest::fromJson(const web::json::value& val)
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


std::string GetRepositoryByProjectIdRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void GetRepositoryByProjectIdRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool GetRepositoryByProjectIdRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void GetRepositoryByProjectIdRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


