

#include "huaweicloud/meeting/v1/model/ShowCorpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowCorpResponse::ShowCorpResponse()
{
    basicInfoIsSet_ = false;
    adminInfoIsSet_ = false;
    resInfoIsSet_ = false;
    groupDTOIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowCorpResponse::~ShowCorpResponse() = default;

void ShowCorpResponse::validate()
{
}

web::json::value ShowCorpResponse::toJson() const
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
bool ShowCorpResponse::fromJson(const web::json::value& val)
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


QueryCorpBasicResultDTO ShowCorpResponse::getBasicInfo() const
{
    return basicInfo_;
}

void ShowCorpResponse::setBasicInfo(const QueryCorpBasicResultDTO& value)
{
    basicInfo_ = value;
    basicInfoIsSet_ = true;
}

bool ShowCorpResponse::basicInfoIsSet() const
{
    return basicInfoIsSet_;
}

void ShowCorpResponse::unsetbasicInfo()
{
    basicInfoIsSet_ = false;
}

QueryAdminResultDTO ShowCorpResponse::getAdminInfo() const
{
    return adminInfo_;
}

void ShowCorpResponse::setAdminInfo(const QueryAdminResultDTO& value)
{
    adminInfo_ = value;
    adminInfoIsSet_ = true;
}

bool ShowCorpResponse::adminInfoIsSet() const
{
    return adminInfoIsSet_;
}

void ShowCorpResponse::unsetadminInfo()
{
    adminInfoIsSet_ = false;
}

QueryCorpResResultDTO ShowCorpResponse::getResInfo() const
{
    return resInfo_;
}

void ShowCorpResponse::setResInfo(const QueryCorpResResultDTO& value)
{
    resInfo_ = value;
    resInfoIsSet_ = true;
}

bool ShowCorpResponse::resInfoIsSet() const
{
    return resInfoIsSet_;
}

void ShowCorpResponse::unsetresInfo()
{
    resInfoIsSet_ = false;
}

OrgGroupDTO ShowCorpResponse::getGroupDTO() const
{
    return groupDTO_;
}

void ShowCorpResponse::setGroupDTO(const OrgGroupDTO& value)
{
    groupDTO_ = value;
    groupDTOIsSet_ = true;
}

bool ShowCorpResponse::groupDTOIsSet() const
{
    return groupDTOIsSet_;
}

void ShowCorpResponse::unsetgroupDTO()
{
    groupDTOIsSet_ = false;
}

std::string ShowCorpResponse::getId() const
{
    return id_;
}

void ShowCorpResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowCorpResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowCorpResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


