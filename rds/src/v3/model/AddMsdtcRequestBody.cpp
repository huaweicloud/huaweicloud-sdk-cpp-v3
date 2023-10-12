

#include "huaweicloud/rds/v3/model/AddMsdtcRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AddMsdtcRequestBody::AddMsdtcRequestBody()
{
    hostsIsSet_ = false;
}

AddMsdtcRequestBody::~AddMsdtcRequestBody() = default;

void AddMsdtcRequestBody::validate()
{
}

web::json::value AddMsdtcRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool AddMsdtcRequestBody::fromJson(const web::json::value& val)
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


std::vector<MsdtcHostOption>& AddMsdtcRequestBody::getHosts()
{
    return hosts_;
}

void AddMsdtcRequestBody::setHosts(const std::vector<MsdtcHostOption>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool AddMsdtcRequestBody::hostsIsSet() const
{
    return hostsIsSet_;
}

void AddMsdtcRequestBody::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


