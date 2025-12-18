

#include "huaweicloud/cce/v3/model/PublicAccess.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PublicAccess::PublicAccess()
{
    cidrsIsSet_ = false;
}

PublicAccess::~PublicAccess() = default;

void PublicAccess::validate()
{
}

web::json::value PublicAccess::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrsIsSet_) {
        val[utility::conversions::to_string_t("cidrs")] = ModelBase::toJson(cidrs_);
    }

    return val;
}
bool PublicAccess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidrs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrs(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PublicAccess::getCidrs()
{
    return cidrs_;
}

void PublicAccess::setCidrs(const std::vector<std::string>& value)
{
    cidrs_ = value;
    cidrsIsSet_ = true;
}

bool PublicAccess::cidrsIsSet() const
{
    return cidrsIsSet_;
}

void PublicAccess::unsetcidrs()
{
    cidrsIsSet_ = false;
}

}
}
}
}
}


