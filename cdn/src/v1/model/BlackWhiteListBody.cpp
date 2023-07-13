

#include "huaweicloud/cdn/v1/model/BlackWhiteListBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




BlackWhiteListBody::BlackWhiteListBody()
{
    type_ = 0;
    typeIsSet_ = false;
    ipListIsSet_ = false;
}

BlackWhiteListBody::~BlackWhiteListBody() = default;

void BlackWhiteListBody::validate()
{
}

web::json::value BlackWhiteListBody::toJson() const
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

bool BlackWhiteListBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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

int32_t BlackWhiteListBody::getType() const
{
    return type_;
}

void BlackWhiteListBody::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BlackWhiteListBody::typeIsSet() const
{
    return typeIsSet_;
}

void BlackWhiteListBody::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& BlackWhiteListBody::getIpList()
{
    return ipList_;
}

void BlackWhiteListBody::setIpList(const std::vector<std::string>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool BlackWhiteListBody::ipListIsSet() const
{
    return ipListIsSet_;
}

void BlackWhiteListBody::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


