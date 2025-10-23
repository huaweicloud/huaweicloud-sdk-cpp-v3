

#include "huaweicloud/codehub/v4/model/ExportTenantRepositoryBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ExportTenantRepositoryBody::ExportTenantRepositoryBody()
{
    repositoryIdsIsSet_ = false;
}

ExportTenantRepositoryBody::~ExportTenantRepositoryBody() = default;

void ExportTenantRepositoryBody::validate()
{
}

web::json::value ExportTenantRepositoryBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdsIsSet_) {
        val[utility::conversions::to_string_t("repository_ids")] = ModelBase::toJson(repositoryIds_);
    }

    return val;
}
bool ExportTenantRepositoryBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryIds(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& ExportTenantRepositoryBody::getRepositoryIds()
{
    return repositoryIds_;
}

void ExportTenantRepositoryBody::setRepositoryIds(std::vector<int32_t> value)
{
    repositoryIds_ = value;
    repositoryIdsIsSet_ = true;
}

bool ExportTenantRepositoryBody::repositoryIdsIsSet() const
{
    return repositoryIdsIsSet_;
}

void ExportTenantRepositoryBody::unsetrepositoryIds()
{
    repositoryIdsIsSet_ = false;
}

}
}
}
}
}


