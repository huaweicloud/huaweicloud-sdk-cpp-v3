

#include "huaweicloud/cdn/v2/model/Conditions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Conditions::Conditions()
{
    matchIsSet_ = false;
}

Conditions::~Conditions() = default;

void Conditions::validate()
{
}

web::json::value Conditions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchIsSet_) {
        val[utility::conversions::to_string_t("match")] = ModelBase::toJson(match_);
    }

    return val;
}
bool Conditions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("match"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match"));
        if(!fieldValue.is_null())
        {
            Match refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatch(refVal);
        }
    }
    return ok;
}


Match Conditions::getMatch() const
{
    return match_;
}

void Conditions::setMatch(const Match& value)
{
    match_ = value;
    matchIsSet_ = true;
}

bool Conditions::matchIsSet() const
{
    return matchIsSet_;
}

void Conditions::unsetmatch()
{
    matchIsSet_ = false;
}

}
}
}
}
}


