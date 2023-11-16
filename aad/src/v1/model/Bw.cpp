

#include "huaweicloud/aad/v1/model/Bw.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




Bw::Bw()
{
    blackIpListIsSet_ = false;
    whiteIpListIsSet_ = false;
}

Bw::~Bw() = default;

void Bw::validate()
{
}

web::json::value Bw::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blackIpListIsSet_) {
        val[utility::conversions::to_string_t("black_ip_list")] = ModelBase::toJson(blackIpList_);
    }
    if(whiteIpListIsSet_) {
        val[utility::conversions::to_string_t("white_ip_list")] = ModelBase::toJson(whiteIpList_);
    }

    return val;
}
bool Bw::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("black_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("black_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlackIpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("white_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("white_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhiteIpList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& Bw::getBlackIpList()
{
    return blackIpList_;
}

void Bw::setBlackIpList(const std::vector<std::string>& value)
{
    blackIpList_ = value;
    blackIpListIsSet_ = true;
}

bool Bw::blackIpListIsSet() const
{
    return blackIpListIsSet_;
}

void Bw::unsetblackIpList()
{
    blackIpListIsSet_ = false;
}

std::vector<std::string>& Bw::getWhiteIpList()
{
    return whiteIpList_;
}

void Bw::setWhiteIpList(const std::vector<std::string>& value)
{
    whiteIpList_ = value;
    whiteIpListIsSet_ = true;
}

bool Bw::whiteIpListIsSet() const
{
    return whiteIpListIsSet_;
}

void Bw::unsetwhiteIpList()
{
    whiteIpListIsSet_ = false;
}

}
}
}
}
}


