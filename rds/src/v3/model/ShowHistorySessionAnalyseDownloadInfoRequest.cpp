

#include "huaweicloud/rds/v3/model/ShowHistorySessionAnalyseDownloadInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowHistorySessionAnalyseDownloadInfoRequest::ShowHistorySessionAnalyseDownloadInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowHistorySessionAnalyseDownloadInfoRequest::~ShowHistorySessionAnalyseDownloadInfoRequest() = default;

void ShowHistorySessionAnalyseDownloadInfoRequest::validate()
{
}

web::json::value ShowHistorySessionAnalyseDownloadInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowHistorySessionAnalyseDownloadInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string ShowHistorySessionAnalyseDownloadInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowHistorySessionAnalyseDownloadInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowHistorySessionAnalyseDownloadInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowHistorySessionAnalyseDownloadInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowHistorySessionAnalyseDownloadInfoRequest::getType() const
{
    return type_;
}

void ShowHistorySessionAnalyseDownloadInfoRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowHistorySessionAnalyseDownloadInfoRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowHistorySessionAnalyseDownloadInfoRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowHistorySessionAnalyseDownloadInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowHistorySessionAnalyseDownloadInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowHistorySessionAnalyseDownloadInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowHistorySessionAnalyseDownloadInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


