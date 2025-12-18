

#include "huaweicloud/meeting/v1/model/ShowConfOrgResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowConfOrgResponse::ShowConfOrgResponse()
{
    orgID_ = "";
    orgIDIsSet_ = false;
}

ShowConfOrgResponse::~ShowConfOrgResponse() = default;

void ShowConfOrgResponse::validate()
{
}

web::json::value ShowConfOrgResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orgIDIsSet_) {
        val[utility::conversions::to_string_t("orgID")] = ModelBase::toJson(orgID_);
    }

    return val;
}
bool ShowConfOrgResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("orgID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orgID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgID(refVal);
        }
    }
    return ok;
}


std::string ShowConfOrgResponse::getOrgID() const
{
    return orgID_;
}

void ShowConfOrgResponse::setOrgID(const std::string& value)
{
    orgID_ = value;
    orgIDIsSet_ = true;
}

bool ShowConfOrgResponse::orgIDIsSet() const
{
    return orgIDIsSet_;
}

void ShowConfOrgResponse::unsetorgID()
{
    orgIDIsSet_ = false;
}

}
}
}
}
}


