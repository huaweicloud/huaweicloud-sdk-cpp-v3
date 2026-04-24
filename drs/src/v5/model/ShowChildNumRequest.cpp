

#include "huaweicloud/drs/v5/model/ShowChildNumRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowChildNumRequest::ShowChildNumRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
}

ShowChildNumRequest::~ShowChildNumRequest() = default;

void ShowChildNumRequest::validate()
{
}

web::json::value ShowChildNumRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }

    return val;
}
bool ShowChildNumRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
        }
    }
    return ok;
}


std::string ShowChildNumRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowChildNumRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowChildNumRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowChildNumRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowChildNumRequest::getRegion() const
{
    return region_;
}

void ShowChildNumRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowChildNumRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ShowChildNumRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowChildNumRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowChildNumRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowChildNumRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowChildNumRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowChildNumRequest::getDbType() const
{
    return dbType_;
}

void ShowChildNumRequest::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool ShowChildNumRequest::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void ShowChildNumRequest::unsetdbType()
{
    dbTypeIsSet_ = false;
}

}
}
}
}
}


