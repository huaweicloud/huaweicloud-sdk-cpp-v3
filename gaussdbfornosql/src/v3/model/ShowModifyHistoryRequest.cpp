

#include "huaweicloud/gaussdbfornosql/v3/model/ShowModifyHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowModifyHistoryRequest::ShowModifyHistoryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    parameterName_ = "";
    parameterNameIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ShowModifyHistoryRequest::~ShowModifyHistoryRequest() = default;

void ShowModifyHistoryRequest::validate()
{
}

web::json::value ShowModifyHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(parameterNameIsSet_) {
        val[utility::conversions::to_string_t("parameter_name")] = ModelBase::toJson(parameterName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowModifyHistoryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parameter_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowModifyHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowModifyHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowModifyHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowModifyHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowModifyHistoryRequest::getParameterName() const
{
    return parameterName_;
}

void ShowModifyHistoryRequest::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ShowModifyHistoryRequest::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ShowModifyHistoryRequest::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ShowModifyHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowModifyHistoryRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowModifyHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowModifyHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowModifyHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowModifyHistoryRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowModifyHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowModifyHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


