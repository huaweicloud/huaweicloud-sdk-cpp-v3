

#include "huaweicloud/meeting/v1/model/QueryCorpResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryCorpResultDTO::QueryCorpResultDTO()
{
    basicInfoIsSet_ = false;
    adminInfoIsSet_ = false;
    resInfoIsSet_ = false;
    groupDTOIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

QueryCorpResultDTO::~QueryCorpResultDTO() = default;

void QueryCorpResultDTO::validate()
{
}

web::json::value QueryCorpResultDTO::toJson() const
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
    if(groupDTOIsSet_) {
        val[utility::conversions::to_string_t("groupDTO")] = ModelBase::toJson(groupDTO_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool QueryCorpResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("basicInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basicInfo"));
        if(!fieldValue.is_null())
        {
            QueryCorpBasicResultDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminInfo"));
        if(!fieldValue.is_null())
        {
            QueryAdminResultDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resInfo"));
        if(!fieldValue.is_null())
        {
            QueryCorpResResultDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupDTO"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupDTO"));
        if(!fieldValue.is_null())
        {
            OrgGroupDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupDTO(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


QueryCorpBasicResultDTO QueryCorpResultDTO::getBasicInfo() const
{
    return basicInfo_;
}

void QueryCorpResultDTO::setBasicInfo(const QueryCorpBasicResultDTO& value)
{
    basicInfo_ = value;
    basicInfoIsSet_ = true;
}

bool QueryCorpResultDTO::basicInfoIsSet() const
{
    return basicInfoIsSet_;
}

void QueryCorpResultDTO::unsetbasicInfo()
{
    basicInfoIsSet_ = false;
}

QueryAdminResultDTO QueryCorpResultDTO::getAdminInfo() const
{
    return adminInfo_;
}

void QueryCorpResultDTO::setAdminInfo(const QueryAdminResultDTO& value)
{
    adminInfo_ = value;
    adminInfoIsSet_ = true;
}

bool QueryCorpResultDTO::adminInfoIsSet() const
{
    return adminInfoIsSet_;
}

void QueryCorpResultDTO::unsetadminInfo()
{
    adminInfoIsSet_ = false;
}

QueryCorpResResultDTO QueryCorpResultDTO::getResInfo() const
{
    return resInfo_;
}

void QueryCorpResultDTO::setResInfo(const QueryCorpResResultDTO& value)
{
    resInfo_ = value;
    resInfoIsSet_ = true;
}

bool QueryCorpResultDTO::resInfoIsSet() const
{
    return resInfoIsSet_;
}

void QueryCorpResultDTO::unsetresInfo()
{
    resInfoIsSet_ = false;
}

OrgGroupDTO QueryCorpResultDTO::getGroupDTO() const
{
    return groupDTO_;
}

void QueryCorpResultDTO::setGroupDTO(const OrgGroupDTO& value)
{
    groupDTO_ = value;
    groupDTOIsSet_ = true;
}

bool QueryCorpResultDTO::groupDTOIsSet() const
{
    return groupDTOIsSet_;
}

void QueryCorpResultDTO::unsetgroupDTO()
{
    groupDTOIsSet_ = false;
}

std::string QueryCorpResultDTO::getId() const
{
    return id_;
}

void QueryCorpResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryCorpResultDTO::idIsSet() const
{
    return idIsSet_;
}

void QueryCorpResultDTO::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


