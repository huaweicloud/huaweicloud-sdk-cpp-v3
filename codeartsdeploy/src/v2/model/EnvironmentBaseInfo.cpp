

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentBaseInfo::EnvironmentBaseInfo()
{
    name_ = "";
    nameIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    hostCount_ = 0;
    hostCountIsSet_ = false;
}

EnvironmentBaseInfo::~EnvironmentBaseInfo() = default;

void EnvironmentBaseInfo::validate()
{
}

web::json::value EnvironmentBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hostCountIsSet_) {
        val[utility::conversions::to_string_t("host_count")] = ModelBase::toJson(hostCount_);
    }

    return val;
}
bool EnvironmentBaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostCount(refVal);
        }
    }
    return ok;
}


std::string EnvironmentBaseInfo::getName() const
{
    return name_;
}

void EnvironmentBaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnvironmentBaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void EnvironmentBaseInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string EnvironmentBaseInfo::getOs() const
{
    return os_;
}

void EnvironmentBaseInfo::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool EnvironmentBaseInfo::osIsSet() const
{
    return osIsSet_;
}

void EnvironmentBaseInfo::unsetos()
{
    osIsSet_ = false;
}

std::string EnvironmentBaseInfo::getUuid() const
{
    return uuid_;
}

void EnvironmentBaseInfo::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool EnvironmentBaseInfo::uuidIsSet() const
{
    return uuidIsSet_;
}

void EnvironmentBaseInfo::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string EnvironmentBaseInfo::getGroupId() const
{
    return groupId_;
}

void EnvironmentBaseInfo::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool EnvironmentBaseInfo::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void EnvironmentBaseInfo::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t EnvironmentBaseInfo::getHostCount() const
{
    return hostCount_;
}

void EnvironmentBaseInfo::setHostCount(int32_t value)
{
    hostCount_ = value;
    hostCountIsSet_ = true;
}

bool EnvironmentBaseInfo::hostCountIsSet() const
{
    return hostCountIsSet_;
}

void EnvironmentBaseInfo::unsethostCount()
{
    hostCountIsSet_ = false;
}

}
}
}
}
}


