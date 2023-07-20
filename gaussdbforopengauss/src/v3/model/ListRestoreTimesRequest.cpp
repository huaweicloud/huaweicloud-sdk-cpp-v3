

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRestoreTimesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRestoreTimesRequest::ListRestoreTimesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
}

ListRestoreTimesRequest::~ListRestoreTimesRequest() = default;

void ListRestoreTimesRequest::validate()
{
}

web::json::value ListRestoreTimesRequest::toJson() const
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

bool ListRestoreTimesRequest::fromJson(const web::json::value& val)
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

std::string ListRestoreTimesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRestoreTimesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRestoreTimesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRestoreTimesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListRestoreTimesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRestoreTimesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRestoreTimesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRestoreTimesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRestoreTimesRequest::getDate() const
{
    return date_;
}

void ListRestoreTimesRequest::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool ListRestoreTimesRequest::dateIsSet() const
{
    return dateIsSet_;
}

void ListRestoreTimesRequest::unsetdate()
{
    dateIsSet_ = false;
}

}
}
}
}
}


