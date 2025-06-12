

#include "huaweicloud/metastudio/v1/model/ShowAgencyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAgencyRequest::ShowAgencyRequest()
{
    roleType_ = "";
    roleTypeIsSet_ = false;
}

ShowAgencyRequest::~ShowAgencyRequest() = default;

void ShowAgencyRequest::validate()
{
}

web::json::value ShowAgencyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleTypeIsSet_) {
        val[utility::conversions::to_string_t("role_type")] = ModelBase::toJson(roleType_);
    }

    return val;
}
bool ShowAgencyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleType(refVal);
        }
    }
    return ok;
}


std::string ShowAgencyRequest::getRoleType() const
{
    return roleType_;
}

void ShowAgencyRequest::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool ShowAgencyRequest::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void ShowAgencyRequest::unsetroleType()
{
    roleTypeIsSet_ = false;
}

}
}
}
}
}


