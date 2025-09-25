

#include "huaweicloud/codehub/v3/model/ShowMasterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowMasterRequest::ShowMasterRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

ShowMasterRequest::~ShowMasterRequest() = default;

void ShowMasterRequest::validate()
{
}

web::json::value ShowMasterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool ShowMasterRequest::fromJson(const web::json::value& val)
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


std::string ShowMasterRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ShowMasterRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ShowMasterRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ShowMasterRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


