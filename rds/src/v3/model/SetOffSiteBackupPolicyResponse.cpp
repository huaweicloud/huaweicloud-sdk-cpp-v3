

#include "huaweicloud/rds/v3/model/SetOffSiteBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetOffSiteBackupPolicyResponse::SetOffSiteBackupPolicyResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SetOffSiteBackupPolicyResponse::~SetOffSiteBackupPolicyResponse() = default;

void SetOffSiteBackupPolicyResponse::validate()
{
}

web::json::value SetOffSiteBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SetOffSiteBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResp(refVal);
        }
    }
    return ok;
}


std::string SetOffSiteBackupPolicyResponse::getResp() const
{
    return resp_;
}

void SetOffSiteBackupPolicyResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SetOffSiteBackupPolicyResponse::respIsSet() const
{
    return respIsSet_;
}

void SetOffSiteBackupPolicyResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


