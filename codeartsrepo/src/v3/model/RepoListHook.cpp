

#include "huaweicloud/codeartsrepo/v3/model/RepoListHook.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RepoListHook::RepoListHook()
{
    hooksIsSet_ = false;
}

RepoListHook::~RepoListHook() = default;

void RepoListHook::validate()
{
}

web::json::value RepoListHook::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hooksIsSet_) {
        val[utility::conversions::to_string_t("hooks")] = ModelBase::toJson(hooks_);
    }

    return val;
}
bool RepoListHook::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hooks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hooks"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoHook> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHooks(refVal);
        }
    }
    return ok;
}


std::vector<RepoHook>& RepoListHook::getHooks()
{
    return hooks_;
}

void RepoListHook::setHooks(const std::vector<RepoHook>& value)
{
    hooks_ = value;
    hooksIsSet_ = true;
}

bool RepoListHook::hooksIsSet() const
{
    return hooksIsSet_;
}

void RepoListHook::unsethooks()
{
    hooksIsSet_ = false;
}

}
}
}
}
}


