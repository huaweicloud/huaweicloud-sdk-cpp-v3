

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceSaveLtsConfigOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceSaveLtsConfigOption::InstanceSaveLtsConfigOption()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
}

InstanceSaveLtsConfigOption::~InstanceSaveLtsConfigOption() = default;

void InstanceSaveLtsConfigOption::validate()
{
}

web::json::value InstanceSaveLtsConfigOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_stream_id")] = ModelBase::toJson(ltsStreamId_);
    }

    return val;
}
bool InstanceSaveLtsConfigOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsStreamId(refVal);
        }
    }
    return ok;
}


std::string InstanceSaveLtsConfigOption::getInstanceId() const
{
    return instanceId_;
}

void InstanceSaveLtsConfigOption::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceSaveLtsConfigOption::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceSaveLtsConfigOption::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceSaveLtsConfigOption::getLogType() const
{
    return logType_;
}

void InstanceSaveLtsConfigOption::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool InstanceSaveLtsConfigOption::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void InstanceSaveLtsConfigOption::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string InstanceSaveLtsConfigOption::getLtsGroupId() const
{
    return ltsGroupId_;
}

void InstanceSaveLtsConfigOption::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool InstanceSaveLtsConfigOption::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void InstanceSaveLtsConfigOption::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string InstanceSaveLtsConfigOption::getLtsStreamId() const
{
    return ltsStreamId_;
}

void InstanceSaveLtsConfigOption::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool InstanceSaveLtsConfigOption::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void InstanceSaveLtsConfigOption::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

}
}
}
}
}


