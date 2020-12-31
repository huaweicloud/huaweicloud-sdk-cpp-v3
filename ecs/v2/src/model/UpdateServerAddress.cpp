

#include "huaweicloud/ecs/model/UpdateServerAddress.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerAddress::UpdateServerAddress()
{
    version_ = 0;
    versionIsSet_ = false;
    addr_ = "";
    addrIsSet_ = false;
}

UpdateServerAddress::~UpdateServerAddress() = default;

void UpdateServerAddress::validate()
{
}

web::json::value UpdateServerAddress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(addrIsSet_) {
        val[utility::conversions::to_string_t("addr")] = ModelBase::toJson(addr_);
    }

    return val;
}

bool UpdateServerAddress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddr(refVal);
        }
    }
    return ok;
}


int32_t UpdateServerAddress::getVersion() const
{
    return version_;
}

void UpdateServerAddress::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateServerAddress::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateServerAddress::unsetversion()
{
    versionIsSet_ = false;
}

std::string UpdateServerAddress::getAddr() const
{
    return addr_;
}

void UpdateServerAddress::setAddr(const std::string& value)
{
    addr_ = value;
    addrIsSet_ = true;
}

bool UpdateServerAddress::addrIsSet() const
{
    return addrIsSet_;
}

void UpdateServerAddress::unsetaddr()
{
    addrIsSet_ = false;
}

}
}
}
}
}


