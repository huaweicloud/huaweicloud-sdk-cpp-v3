

#include "huaweicloud/codehub/v3/model/ShowStatisticalDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowStatisticalDataRequest::ShowStatisticalDataRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

ShowStatisticalDataRequest::~ShowStatisticalDataRequest() = default;

void ShowStatisticalDataRequest::validate()
{
}

web::json::value ShowStatisticalDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool ShowStatisticalDataRequest::fromJson(const web::json::value& val)
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


std::string ShowStatisticalDataRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ShowStatisticalDataRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ShowStatisticalDataRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ShowStatisticalDataRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


