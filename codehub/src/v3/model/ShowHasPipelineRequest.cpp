

#include "huaweicloud/codehub/v3/model/ShowHasPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowHasPipelineRequest::ShowHasPipelineRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

ShowHasPipelineRequest::~ShowHasPipelineRequest() = default;

void ShowHasPipelineRequest::validate()
{
}

web::json::value ShowHasPipelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool ShowHasPipelineRequest::fromJson(const web::json::value& val)
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


std::string ShowHasPipelineRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ShowHasPipelineRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ShowHasPipelineRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ShowHasPipelineRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


