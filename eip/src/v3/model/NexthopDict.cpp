

#include "huaweicloud/eip/v3/model/NexthopDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




NexthopDict::NexthopDict()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

NexthopDict::~NexthopDict() = default;

void NexthopDict::validate()
{
}

web::json::value NexthopDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool NexthopDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string NexthopDict::getIpAddress() const
{
    return ipAddress_;
}

void NexthopDict::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool NexthopDict::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void NexthopDict::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string NexthopDict::getMode() const
{
    return mode_;
}

void NexthopDict::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool NexthopDict::modeIsSet() const
{
    return modeIsSet_;
}

void NexthopDict::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


