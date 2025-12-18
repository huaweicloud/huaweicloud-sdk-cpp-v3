

#include "huaweicloud/meeting/v1/model/AddCorpDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddCorpDTO::AddCorpDTO()
{
    basicInfoIsSet_ = false;
    adminInfoIsSet_ = false;
    resInfoIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    propertyInfoIsSet_ = false;
}

AddCorpDTO::~AddCorpDTO() = default;

void AddCorpDTO::validate()
{
}

web::json::value AddCorpDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(basicInfoIsSet_) {
        val[utility::conversions::to_string_t("basicInfo")] = ModelBase::toJson(basicInfo_);
    }
    if(adminInfoIsSet_) {
        val[utility::conversions::to_string_t("adminInfo")] = ModelBase::toJson(adminInfo_);
    }
    if(resInfoIsSet_) {
        val[utility::conversions::to_string_t("resInfo")] = ModelBase::toJson(resInfo_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("groupId")] = ModelBase::toJson(groupId_);
    }
    if(propertyInfoIsSet_) {
        val[utility::conversions::to_string_t("propertyInfo")] = ModelBase::toJson(propertyInfo_);
    }

    return val;
}
bool AddCorpDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("basicInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basicInfo"));
        if(!fieldValue.is_null())
        {
            CorpBasicDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminInfo"));
        if(!fieldValue.is_null())
        {
            AdminDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resInfo"));
        if(!fieldValue.is_null())
        {
            AddCorpResDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResInfo(refVal);
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


CorpBasicDTO AddCorpDTO::getBasicInfo() const
{
    return basicInfo_;
}

void AddCorpDTO::setBasicInfo(const CorpBasicDTO& value)
{
    basicInfo_ = value;
    basicInfoIsSet_ = true;
}

bool AddCorpDTO::basicInfoIsSet() const
{
    return basicInfoIsSet_;
}

void AddCorpDTO::unsetbasicInfo()
{
    basicInfoIsSet_ = false;
}

AdminDTO AddCorpDTO::getAdminInfo() const
{
    return adminInfo_;
}

void AddCorpDTO::setAdminInfo(const AdminDTO& value)
{
    adminInfo_ = value;
    adminInfoIsSet_ = true;
}

bool AddCorpDTO::adminInfoIsSet() const
{
    return adminInfoIsSet_;
}

void AddCorpDTO::unsetadminInfo()
{
    adminInfoIsSet_ = false;
}

AddCorpResDTO AddCorpDTO::getResInfo() const
{
    return resInfo_;
}

void AddCorpDTO::setResInfo(const AddCorpResDTO& value)
{
    resInfo_ = value;
    resInfoIsSet_ = true;
}

bool AddCorpDTO::resInfoIsSet() const
{
    return resInfoIsSet_;
}

void AddCorpDTO::unsetresInfo()
{
    resInfoIsSet_ = false;
}

std::string AddCorpDTO::getGroupId() const
{
    return groupId_;
}

void AddCorpDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool AddCorpDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void AddCorpDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<OrgPropertyDTO>& AddCorpDTO::getPropertyInfo()
{
    return propertyInfo_;
}

void AddCorpDTO::setPropertyInfo(const std::vector<OrgPropertyDTO>& value)
{
    propertyInfo_ = value;
    propertyInfoIsSet_ = true;
}

bool AddCorpDTO::propertyInfoIsSet() const
{
    return propertyInfoIsSet_;
}

void AddCorpDTO::unsetpropertyInfo()
{
    propertyInfoIsSet_ = false;
}

}
}
}
}
}


