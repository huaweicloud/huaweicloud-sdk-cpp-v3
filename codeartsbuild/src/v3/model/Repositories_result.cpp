

#include "huaweicloud/codeartsbuild/v3/model/Repositories_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Repositories_result::Repositories_result()
{
    latest_ = "";
    latestIsSet_ = false;
    repositoriesIsSet_ = false;
}

Repositories_result::~Repositories_result() = default;

void Repositories_result::validate()
{
}

web::json::value Repositories_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(latestIsSet_) {
        val[utility::conversions::to_string_t("latest")] = ModelBase::toJson(latest_);
    }
    if(repositoriesIsSet_) {
        val[utility::conversions::to_string_t("repositories")] = ModelBase::toJson(repositories_);
    }

    return val;
}
bool Repositories_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("latest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositories(refVal);
        }
    }
    return ok;
}


std::string Repositories_result::getLatest() const
{
    return latest_;
}

void Repositories_result::setLatest(const std::string& value)
{
    latest_ = value;
    latestIsSet_ = true;
}

bool Repositories_result::latestIsSet() const
{
    return latestIsSet_;
}

void Repositories_result::unsetlatest()
{
    latestIsSet_ = false;
}

std::vector<std::string>& Repositories_result::getRepositories()
{
    return repositories_;
}

void Repositories_result::setRepositories(const std::vector<std::string>& value)
{
    repositories_ = value;
    repositoriesIsSet_ = true;
}

bool Repositories_result::repositoriesIsSet() const
{
    return repositoriesIsSet_;
}

void Repositories_result::unsetrepositories()
{
    repositoriesIsSet_ = false;
}

}
}
}
}
}


