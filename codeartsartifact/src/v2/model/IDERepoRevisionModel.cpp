

#include "huaweicloud/codeartsartifact/v2/model/IDERepoRevisionModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




IDERepoRevisionModel::IDERepoRevisionModel()
{
    repositoryIds_ = "";
    repositoryIdsIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
}

IDERepoRevisionModel::~IDERepoRevisionModel() = default;

void IDERepoRevisionModel::validate()
{
}

web::json::value IDERepoRevisionModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdsIsSet_) {
        val[utility::conversions::to_string_t("repository_ids")] = ModelBase::toJson(repositoryIds_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }

    return val;
}
bool IDERepoRevisionModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    return ok;
}


std::string IDERepoRevisionModel::getRepositoryIds() const
{
    return repositoryIds_;
}

void IDERepoRevisionModel::setRepositoryIds(const std::string& value)
{
    repositoryIds_ = value;
    repositoryIdsIsSet_ = true;
}

bool IDERepoRevisionModel::repositoryIdsIsSet() const
{
    return repositoryIdsIsSet_;
}

void IDERepoRevisionModel::unsetrepositoryIds()
{
    repositoryIdsIsSet_ = false;
}

std::string IDERepoRevisionModel::getFormat() const
{
    return format_;
}

void IDERepoRevisionModel::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool IDERepoRevisionModel::formatIsSet() const
{
    return formatIsSet_;
}

void IDERepoRevisionModel::unsetformat()
{
    formatIsSet_ = false;
}

}
}
}
}
}


