

#include "huaweicloud/ga/v1/model/CreateIpGroupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateIpGroupOption::CreateIpGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    ipListIsSet_ = false;
}

CreateIpGroupOption::~CreateIpGroupOption() = default;

void CreateIpGroupOption::validate()
{
}

web::json::value CreateIpGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }

    return val;
}
bool CreateIpGroupOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateIpGroupIpOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    return ok;
}


std::string CreateIpGroupOption::getName() const
{
    return name_;
}

void CreateIpGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateIpGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateIpGroupOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateIpGroupOption::getDescription() const
{
    return description_;
}

void CreateIpGroupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateIpGroupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateIpGroupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<CreateIpGroupIpOption>& CreateIpGroupOption::getIpList()
{
    return ipList_;
}

void CreateIpGroupOption::setIpList(const std::vector<CreateIpGroupIpOption>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool CreateIpGroupOption::ipListIsSet() const
{
    return ipListIsSet_;
}

void CreateIpGroupOption::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


