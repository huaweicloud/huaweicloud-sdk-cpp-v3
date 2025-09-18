

#include "huaweicloud/ga/v1/model/CreateLogtankOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateLogtankOption::CreateLogtankOption()
{
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

CreateLogtankOption::~CreateLogtankOption() = default;

void CreateLogtankOption::validate()
{
}

web::json::value CreateLogtankOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}
bool CreateLogtankOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            LogtankResourceType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    return ok;
}


LogtankResourceType CreateLogtankOption::getResourceType() const
{
    return resourceType_;
}

void CreateLogtankOption::setResourceType(const LogtankResourceType& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateLogtankOption::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateLogtankOption::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CreateLogtankOption::getResourceId() const
{
    return resourceId_;
}

void CreateLogtankOption::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateLogtankOption::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateLogtankOption::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CreateLogtankOption::getLogGroupId() const
{
    return logGroupId_;
}

void CreateLogtankOption::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateLogtankOption::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateLogtankOption::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateLogtankOption::getLogStreamId() const
{
    return logStreamId_;
}

void CreateLogtankOption::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreateLogtankOption::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreateLogtankOption::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


