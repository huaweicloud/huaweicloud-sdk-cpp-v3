

#include "huaweicloud/codeartsbuild/v3/model/UpdateNoticeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateNoticeRequestBody::UpdateNoticeRequestBody()
{
    noticeType_ = "";
    noticeTypeIsSet_ = false;
    enabledEventTypeNamesIsSet_ = false;
    paramConfig_ = "";
    paramConfigIsSet_ = false;
}

UpdateNoticeRequestBody::~UpdateNoticeRequestBody() = default;

void UpdateNoticeRequestBody::validate()
{
}

web::json::value UpdateNoticeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noticeTypeIsSet_) {
        val[utility::conversions::to_string_t("notice_type")] = ModelBase::toJson(noticeType_);
    }
    if(enabledEventTypeNamesIsSet_) {
        val[utility::conversions::to_string_t("enabled_event_type_names")] = ModelBase::toJson(enabledEventTypeNames_);
    }
    if(paramConfigIsSet_) {
        val[utility::conversions::to_string_t("param_config")] = ModelBase::toJson(paramConfig_);
    }

    return val;
}
bool UpdateNoticeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notice_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notice_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoticeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled_event_type_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled_event_type_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabledEventTypeNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamConfig(refVal);
        }
    }
    return ok;
}


std::string UpdateNoticeRequestBody::getNoticeType() const
{
    return noticeType_;
}

void UpdateNoticeRequestBody::setNoticeType(const std::string& value)
{
    noticeType_ = value;
    noticeTypeIsSet_ = true;
}

bool UpdateNoticeRequestBody::noticeTypeIsSet() const
{
    return noticeTypeIsSet_;
}

void UpdateNoticeRequestBody::unsetnoticeType()
{
    noticeTypeIsSet_ = false;
}

std::vector<std::string>& UpdateNoticeRequestBody::getEnabledEventTypeNames()
{
    return enabledEventTypeNames_;
}

void UpdateNoticeRequestBody::setEnabledEventTypeNames(const std::vector<std::string>& value)
{
    enabledEventTypeNames_ = value;
    enabledEventTypeNamesIsSet_ = true;
}

bool UpdateNoticeRequestBody::enabledEventTypeNamesIsSet() const
{
    return enabledEventTypeNamesIsSet_;
}

void UpdateNoticeRequestBody::unsetenabledEventTypeNames()
{
    enabledEventTypeNamesIsSet_ = false;
}

std::string UpdateNoticeRequestBody::getParamConfig() const
{
    return paramConfig_;
}

void UpdateNoticeRequestBody::setParamConfig(const std::string& value)
{
    paramConfig_ = value;
    paramConfigIsSet_ = true;
}

bool UpdateNoticeRequestBody::paramConfigIsSet() const
{
    return paramConfigIsSet_;
}

void UpdateNoticeRequestBody::unsetparamConfig()
{
    paramConfigIsSet_ = false;
}

}
}
}
}
}


