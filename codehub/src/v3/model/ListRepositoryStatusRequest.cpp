

#include "huaweicloud/codehub/v3/model/ListRepositoryStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListRepositoryStatusRequest::ListRepositoryStatusRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

ListRepositoryStatusRequest::~ListRepositoryStatusRequest() = default;

void ListRepositoryStatusRequest::validate()
{
}

web::json::value ListRepositoryStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool ListRepositoryStatusRequest::fromJson(const web::json::value& val)
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


std::string ListRepositoryStatusRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ListRepositoryStatusRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ListRepositoryStatusRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ListRepositoryStatusRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


