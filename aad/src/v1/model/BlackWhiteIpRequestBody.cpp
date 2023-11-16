

#include "huaweicloud/aad/v1/model/BlackWhiteIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BlackWhiteIpRequestBody::BlackWhiteIpRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    ipListIsSet_ = false;
}

BlackWhiteIpRequestBody::~BlackWhiteIpRequestBody() = default;

void BlackWhiteIpRequestBody::validate()
{
}

web::json::value BlackWhiteIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }

    return val;
}
bool BlackWhiteIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    return ok;
}


std::string BlackWhiteIpRequestBody::getType() const
{
    return type_;
}

void BlackWhiteIpRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BlackWhiteIpRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void BlackWhiteIpRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& BlackWhiteIpRequestBody::getIpList()
{
    return ipList_;
}

void BlackWhiteIpRequestBody::setIpList(const std::vector<std::string>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool BlackWhiteIpRequestBody::ipListIsSet() const
{
    return ipListIsSet_;
}

void BlackWhiteIpRequestBody::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


