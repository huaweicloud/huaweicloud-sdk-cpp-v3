

#include "huaweicloud/drs/v5/model/CloudBaseInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CloudBaseInfo::CloudBaseInfo()
{
    region_ = "";
    regionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
}

CloudBaseInfo::~CloudBaseInfo() = default;

void CloudBaseInfo::validate()
{
}

web::json::value CloudBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }

    return val;
}

bool CloudBaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    return ok;
}

std::string CloudBaseInfo::getRegion() const
{
    return region_;
}

void CloudBaseInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CloudBaseInfo::regionIsSet() const
{
    return regionIsSet_;
}

void CloudBaseInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string CloudBaseInfo::getProjectId() const
{
    return projectId_;
}

void CloudBaseInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CloudBaseInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CloudBaseInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CloudBaseInfo::getAzCode() const
{
    return azCode_;
}

void CloudBaseInfo::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool CloudBaseInfo::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void CloudBaseInfo::unsetazCode()
{
    azCodeIsSet_ = false;
}

}
}
}
}
}


