

#include "huaweicloud/rds/v3/model/DeleteMsdtcLocalHostRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteMsdtcLocalHostRequestBody::DeleteMsdtcLocalHostRequestBody()
{
    hostsIsSet_ = false;
}

DeleteMsdtcLocalHostRequestBody::~DeleteMsdtcLocalHostRequestBody() = default;

void DeleteMsdtcLocalHostRequestBody::validate()
{
}

web::json::value DeleteMsdtcLocalHostRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool DeleteMsdtcLocalHostRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<MsdtcHostOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    return ok;
}


std::vector<MsdtcHostOption>& DeleteMsdtcLocalHostRequestBody::getHosts()
{
    return hosts_;
}

void DeleteMsdtcLocalHostRequestBody::setHosts(const std::vector<MsdtcHostOption>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool DeleteMsdtcLocalHostRequestBody::hostsIsSet() const
{
    return hostsIsSet_;
}

void DeleteMsdtcLocalHostRequestBody::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


