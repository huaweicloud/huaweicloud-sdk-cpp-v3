

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowAutoKillTransactionConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowAutoKillTransactionConfigResponse::ShowAutoKillTransactionConfigResponse()
{
    type_ = "";
    typeIsSet_ = false;
    usernamesIsSet_ = false;
    threshold_ = 0L;
    thresholdIsSet_ = false;
    autoStop_ = false;
    autoStopIsSet_ = false;
    databaseNamesIsSet_ = false;
    databaseNamesSelectIsSet_ = false;
}

ShowAutoKillTransactionConfigResponse::~ShowAutoKillTransactionConfigResponse() = default;

void ShowAutoKillTransactionConfigResponse::validate()
{
}

web::json::value ShowAutoKillTransactionConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usernamesIsSet_) {
        val[utility::conversions::to_string_t("usernames")] = ModelBase::toJson(usernames_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(autoStopIsSet_) {
        val[utility::conversions::to_string_t("auto_stop")] = ModelBase::toJson(autoStop_);
    }
    if(databaseNamesIsSet_) {
        val[utility::conversions::to_string_t("database_names")] = ModelBase::toJson(databaseNames_);
    }
    if(databaseNamesSelectIsSet_) {
        val[utility::conversions::to_string_t("database_names_select")] = ModelBase::toJson(databaseNamesSelect_);
    }

    return val;
}
bool ShowAutoKillTransactionConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("usernames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usernames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsernames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_stop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_stop"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoStop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_names_select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_names_select"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseNamesSelect(refVal);
        }
    }
    return ok;
}


std::string ShowAutoKillTransactionConfigResponse::getType() const
{
    return type_;
}

void ShowAutoKillTransactionConfigResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowAutoKillTransactionConfigResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowAutoKillTransactionConfigResponse::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& ShowAutoKillTransactionConfigResponse::getUsernames()
{
    return usernames_;
}

void ShowAutoKillTransactionConfigResponse::setUsernames(const std::vector<std::string>& value)
{
    usernames_ = value;
    usernamesIsSet_ = true;
}

bool ShowAutoKillTransactionConfigResponse::usernamesIsSet() const
{
    return usernamesIsSet_;
}

void ShowAutoKillTransactionConfigResponse::unsetusernames()
{
    usernamesIsSet_ = false;
}

int64_t ShowAutoKillTransactionConfigResponse::getThreshold() const
{
    return threshold_;
}

void ShowAutoKillTransactionConfigResponse::setThreshold(int64_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool ShowAutoKillTransactionConfigResponse::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void ShowAutoKillTransactionConfigResponse::unsetthreshold()
{
    thresholdIsSet_ = false;
}

bool ShowAutoKillTransactionConfigResponse::isAutoStop() const
{
    return autoStop_;
}

void ShowAutoKillTransactionConfigResponse::setAutoStop(bool value)
{
    autoStop_ = value;
    autoStopIsSet_ = true;
}

bool ShowAutoKillTransactionConfigResponse::autoStopIsSet() const
{
    return autoStopIsSet_;
}

void ShowAutoKillTransactionConfigResponse::unsetautoStop()
{
    autoStopIsSet_ = false;
}

std::vector<std::string>& ShowAutoKillTransactionConfigResponse::getDatabaseNames()
{
    return databaseNames_;
}

void ShowAutoKillTransactionConfigResponse::setDatabaseNames(const std::vector<std::string>& value)
{
    databaseNames_ = value;
    databaseNamesIsSet_ = true;
}

bool ShowAutoKillTransactionConfigResponse::databaseNamesIsSet() const
{
    return databaseNamesIsSet_;
}

void ShowAutoKillTransactionConfigResponse::unsetdatabaseNames()
{
    databaseNamesIsSet_ = false;
}

std::vector<std::string>& ShowAutoKillTransactionConfigResponse::getDatabaseNamesSelect()
{
    return databaseNamesSelect_;
}

void ShowAutoKillTransactionConfigResponse::setDatabaseNamesSelect(const std::vector<std::string>& value)
{
    databaseNamesSelect_ = value;
    databaseNamesSelectIsSet_ = true;
}

bool ShowAutoKillTransactionConfigResponse::databaseNamesSelectIsSet() const
{
    return databaseNamesSelectIsSet_;
}

void ShowAutoKillTransactionConfigResponse::unsetdatabaseNamesSelect()
{
    databaseNamesSelectIsSet_ = false;
}

}
}
}
}
}


