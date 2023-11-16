

#include "huaweicloud/codeartsbuild/v3/model/QueryJobNoticeItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




QueryJobNoticeItems::QueryJobNoticeItems()
{
    noticeType_ = "";
    noticeTypeIsSet_ = false;
    enableMapIsSet_ = false;
    paramConfig_ = "";
    paramConfigIsSet_ = false;
}

QueryJobNoticeItems::~QueryJobNoticeItems() = default;

void QueryJobNoticeItems::validate()
{
}

web::json::value QueryJobNoticeItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noticeTypeIsSet_) {
        val[utility::conversions::to_string_t("notice_type")] = ModelBase::toJson(noticeType_);
    }
    if(enableMapIsSet_) {
        val[utility::conversions::to_string_t("enable_map")] = ModelBase::toJson(enableMap_);
    }
    if(paramConfigIsSet_) {
        val[utility::conversions::to_string_t("param_config")] = ModelBase::toJson(paramConfig_);
    }

    return val;
}
bool QueryJobNoticeItems::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enable_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_map"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableMap(refVal);
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


std::string QueryJobNoticeItems::getNoticeType() const
{
    return noticeType_;
}

void QueryJobNoticeItems::setNoticeType(const std::string& value)
{
    noticeType_ = value;
    noticeTypeIsSet_ = true;
}

bool QueryJobNoticeItems::noticeTypeIsSet() const
{
    return noticeTypeIsSet_;
}

void QueryJobNoticeItems::unsetnoticeType()
{
    noticeTypeIsSet_ = false;
}

std::map<std::string, bool>& QueryJobNoticeItems::getEnableMap()
{
    return enableMap_;
}

void QueryJobNoticeItems::setEnableMap(std::map<std::string, bool> value)
{
    enableMap_ = value;
    enableMapIsSet_ = true;
}

bool QueryJobNoticeItems::enableMapIsSet() const
{
    return enableMapIsSet_;
}

void QueryJobNoticeItems::unsetenableMap()
{
    enableMapIsSet_ = false;
}

std::string QueryJobNoticeItems::getParamConfig() const
{
    return paramConfig_;
}

void QueryJobNoticeItems::setParamConfig(const std::string& value)
{
    paramConfig_ = value;
    paramConfigIsSet_ = true;
}

bool QueryJobNoticeItems::paramConfigIsSet() const
{
    return paramConfigIsSet_;
}

void QueryJobNoticeItems::unsetparamConfig()
{
    paramConfigIsSet_ = false;
}

}
}
}
}
}


