

#include "huaweicloud/cfw/v1/model/UpdateIpsWhitelistResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateIpsWhitelistResp_data::UpdateIpsWhitelistResp_data()
{
    ipsWhitelistId_ = "";
    ipsWhitelistIdIsSet_ = false;
}

UpdateIpsWhitelistResp_data::~UpdateIpsWhitelistResp_data() = default;

void UpdateIpsWhitelistResp_data::validate()
{
}

web::json::value UpdateIpsWhitelistResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsWhitelistIdIsSet_) {
        val[utility::conversions::to_string_t("ips_whitelist_id")] = ModelBase::toJson(ipsWhitelistId_);
    }

    return val;
}
bool UpdateIpsWhitelistResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips_whitelist_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_whitelist_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsWhitelistId(refVal);
        }
    }
    return ok;
}


std::string UpdateIpsWhitelistResp_data::getIpsWhitelistId() const
{
    return ipsWhitelistId_;
}

void UpdateIpsWhitelistResp_data::setIpsWhitelistId(const std::string& value)
{
    ipsWhitelistId_ = value;
    ipsWhitelistIdIsSet_ = true;
}

bool UpdateIpsWhitelistResp_data::ipsWhitelistIdIsSet() const
{
    return ipsWhitelistIdIsSet_;
}

void UpdateIpsWhitelistResp_data::unsetipsWhitelistId()
{
    ipsWhitelistIdIsSet_ = false;
}

}
}
}
}
}


