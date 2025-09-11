

#include "huaweicloud/dbss/v1/model/UpdateWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateWhitelistRequest::UpdateWhitelistRequest()
{
    dbIdsIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

UpdateWhitelistRequest::~UpdateWhitelistRequest() = default;

void UpdateWhitelistRequest::validate()
{
}

web::json::value UpdateWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool UpdateWhitelistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UpdateWhitelistRequest::getDbIds()
{
    return dbIds_;
}

void UpdateWhitelistRequest::setDbIds(const std::vector<std::string>& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool UpdateWhitelistRequest::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void UpdateWhitelistRequest::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string UpdateWhitelistRequest::getDesc() const
{
    return desc_;
}

void UpdateWhitelistRequest::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool UpdateWhitelistRequest::descIsSet() const
{
    return descIsSet_;
}

void UpdateWhitelistRequest::unsetdesc()
{
    descIsSet_ = false;
}

bool UpdateWhitelistRequest::isEnabled() const
{
    return enabled_;
}

void UpdateWhitelistRequest::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateWhitelistRequest::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateWhitelistRequest::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


