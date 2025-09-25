

#include "huaweicloud/codehub/v3/model/Repository.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




Repository::Repository()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

Repository::~Repository() = default;

void Repository::validate()
{
}

web::json::value Repository::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool Repository::fromJson(const web::json::value& val)
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


std::string Repository::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void Repository::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool Repository::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void Repository::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


