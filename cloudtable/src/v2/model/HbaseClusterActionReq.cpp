

#include "huaweicloud/cloudtable/v2/model/HbaseClusterActionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




HbaseClusterActionReq::HbaseClusterActionReq()
{
    restartIsSet_ = false;
}

HbaseClusterActionReq::~HbaseClusterActionReq() = default;

void HbaseClusterActionReq::validate()
{
}

web::json::value HbaseClusterActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restartIsSet_) {
        val[utility::conversions::to_string_t("restart")] = ModelBase::toJson(restart_);
    }

    return val;
}
bool HbaseClusterActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestart(refVal);
        }
    }
    return ok;
}


Object HbaseClusterActionReq::getRestart() const
{
    return restart_;
}

void HbaseClusterActionReq::setRestart(const Object& value)
{
    restart_ = value;
    restartIsSet_ = true;
}

bool HbaseClusterActionReq::restartIsSet() const
{
    return restartIsSet_;
}

void HbaseClusterActionReq::unsetrestart()
{
    restartIsSet_ = false;
}

}
}
}
}
}


