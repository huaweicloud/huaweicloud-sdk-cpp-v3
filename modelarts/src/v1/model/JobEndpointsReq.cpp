

#include "huaweicloud/modelarts/v1/model/JobEndpointsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobEndpointsReq::JobEndpointsReq()
{
    sshIsSet_ = false;
}

JobEndpointsReq::~JobEndpointsReq() = default;

void JobEndpointsReq::validate()
{
}

web::json::value JobEndpointsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sshIsSet_) {
        val[utility::conversions::to_string_t("ssh")] = ModelBase::toJson(ssh_);
    }

    return val;
}
bool JobEndpointsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ssh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssh"));
        if(!fieldValue.is_null())
        {
            SSHReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSsh(refVal);
        }
    }
    return ok;
}


SSHReq JobEndpointsReq::getSsh() const
{
    return ssh_;
}

void JobEndpointsReq::setSsh(const SSHReq& value)
{
    ssh_ = value;
    sshIsSet_ = true;
}

bool JobEndpointsReq::sshIsSet() const
{
    return sshIsSet_;
}

void JobEndpointsReq::unsetssh()
{
    sshIsSet_ = false;
}

}
}
}
}
}


