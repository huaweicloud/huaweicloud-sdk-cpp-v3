

#include "huaweicloud/dbss/v1/model/PublicIp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




PublicIp::PublicIp()
{
    eipIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

PublicIp::~PublicIp() = default;

void PublicIp::validate()
{
}

web::json::value PublicIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool PublicIp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            EIP refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


EIP PublicIp::getEip() const
{
    return eip_;
}

void PublicIp::setEip(const EIP& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool PublicIp::eipIsSet() const
{
    return eipIsSet_;
}

void PublicIp::unseteip()
{
    eipIsSet_ = false;
}

std::string PublicIp::getId() const
{
    return id_;
}

void PublicIp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicIp::idIsSet() const
{
    return idIsSet_;
}

void PublicIp::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


