

#include "huaweicloud/meeting/v1/model/ModCorpDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModCorpDTO::ModCorpDTO()
{
    basicInfoIsSet_ = false;
    adminInfoIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    propertyInfoIsSet_ = false;
}

ModCorpDTO::~ModCorpDTO() = default;

void ModCorpDTO::validate()
{
}

web::json::value ModCorpDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(basicInfoIsSet_) {
        val[utility::conversions::to_string_t("basicInfo")] = ModelBase::toJson(basicInfo_);
    }
    if(adminInfoIsSet_) {
        val[utility::conversions::to_string_t("adminInfo")] = ModelBase::toJson(adminInfo_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("groupId")] = ModelBase::toJson(groupId_);
    }
    if(propertyInfoIsSet_) {
        val[utility::conversions::to_string_t("propertyInfo")] = ModelBase::toJson(propertyInfo_);
    }

    return val;
}
bool ModCorpDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("basicInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basicInfo"));
        if(!fieldValue.is_null())
        {
            ModCorpBasicDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminInfo"));
        if(!fieldValue.is_null())
        {
            ModAdminDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("propertyInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("propertyInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<OrgPropertyDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropertyInfo(refVal);
        }
    }
    return ok;
}


ModCorpBasicDTO ModCorpDTO::getBasicInfo() const
{
    return basicInfo_;
}

void ModCorpDTO::setBasicInfo(const ModCorpBasicDTO& value)
{
    basicInfo_ = value;
    basicInfoIsSet_ = true;
}

bool ModCorpDTO::basicInfoIsSet() const
{
    return basicInfoIsSet_;
}

void ModCorpDTO::unsetbasicInfo()
{
    basicInfoIsSet_ = false;
}

ModAdminDTO ModCorpDTO::getAdminInfo() const
{
    return adminInfo_;
}

void ModCorpDTO::setAdminInfo(const ModAdminDTO& value)
{
    adminInfo_ = value;
    adminInfoIsSet_ = true;
}

bool ModCorpDTO::adminInfoIsSet() const
{
    return adminInfoIsSet_;
}

void ModCorpDTO::unsetadminInfo()
{
    adminInfoIsSet_ = false;
}

std::string ModCorpDTO::getGroupId() const
{
    return groupId_;
}

void ModCorpDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ModCorpDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ModCorpDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<OrgPropertyDTO>& ModCorpDTO::getPropertyInfo()
{
    return propertyInfo_;
}

void ModCorpDTO::setPropertyInfo(const std::vector<OrgPropertyDTO>& value)
{
    propertyInfo_ = value;
    propertyInfoIsSet_ = true;
}

bool ModCorpDTO::propertyInfoIsSet() const
{
    return propertyInfoIsSet_;
}

void ModCorpDTO::unsetpropertyInfo()
{
    propertyInfoIsSet_ = false;
}

}
}
}
}
}


