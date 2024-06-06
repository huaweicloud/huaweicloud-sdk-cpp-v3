

#include "huaweicloud/gaussdb/v3/model/ShowAutoScalingHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAutoScalingHistoryRequest::ShowAutoScalingHistoryRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
}

ShowAutoScalingHistoryRequest::~ShowAutoScalingHistoryRequest() = default;

void ShowAutoScalingHistoryRequest::validate()
{
}

web::json::value ShowAutoScalingHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowAutoScalingHistoryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowAutoScalingHistoryRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoScalingHistoryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoScalingHistoryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoScalingHistoryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAutoScalingHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoScalingHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoScalingHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoScalingHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAutoScalingHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowAutoScalingHistoryRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAutoScalingHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAutoScalingHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowAutoScalingHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowAutoScalingHistoryRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAutoScalingHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAutoScalingHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


