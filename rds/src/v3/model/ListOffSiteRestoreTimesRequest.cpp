

#include "huaweicloud/rds/v3/model/ListOffSiteRestoreTimesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOffSiteRestoreTimesRequest::ListOffSiteRestoreTimesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
}

ListOffSiteRestoreTimesRequest::~ListOffSiteRestoreTimesRequest() = default;

void ListOffSiteRestoreTimesRequest::validate()
{
}

web::json::value ListOffSiteRestoreTimesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }

    return val;
}
bool ListOffSiteRestoreTimesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    return ok;
}


std::string ListOffSiteRestoreTimesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListOffSiteRestoreTimesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListOffSiteRestoreTimesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListOffSiteRestoreTimesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListOffSiteRestoreTimesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListOffSiteRestoreTimesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListOffSiteRestoreTimesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListOffSiteRestoreTimesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListOffSiteRestoreTimesRequest::getDate() const
{
    return date_;
}

void ListOffSiteRestoreTimesRequest::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool ListOffSiteRestoreTimesRequest::dateIsSet() const
{
    return dateIsSet_;
}

void ListOffSiteRestoreTimesRequest::unsetdate()
{
    dateIsSet_ = false;
}

}
}
}
}
}


