

#include "huaweicloud/gaussdb/v3/model/CreateAccessControlRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateAccessControlRequestBody::CreateAccessControlRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    ipListIsSet_ = false;
}

CreateAccessControlRequestBody::~CreateAccessControlRequestBody() = default;

void CreateAccessControlRequestBody::validate()
{
}

web::json::value CreateAccessControlRequestBody::toJson() const
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
bool CreateAccessControlRequestBody::fromJson(const web::json::value& val)
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
            std::vector<AccessControlRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    return ok;
}


std::string CreateAccessControlRequestBody::getType() const
{
    return type_;
}

void CreateAccessControlRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateAccessControlRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateAccessControlRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::vector<AccessControlRule>& CreateAccessControlRequestBody::getIpList()
{
    return ipList_;
}

void CreateAccessControlRequestBody::setIpList(const std::vector<AccessControlRule>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool CreateAccessControlRequestBody::ipListIsSet() const
{
    return ipListIsSet_;
}

void CreateAccessControlRequestBody::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


