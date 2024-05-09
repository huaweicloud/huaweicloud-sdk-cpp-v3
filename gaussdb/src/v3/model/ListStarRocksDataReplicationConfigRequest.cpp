

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDataReplicationConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDataReplicationConfigRequest::ListStarRocksDataReplicationConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

ListStarRocksDataReplicationConfigRequest::~ListStarRocksDataReplicationConfigRequest() = default;

void ListStarRocksDataReplicationConfigRequest::validate()
{
}

web::json::value ListStarRocksDataReplicationConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool ListStarRocksDataReplicationConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    return ok;
}


std::string ListStarRocksDataReplicationConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ListStarRocksDataReplicationConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListStarRocksDataReplicationConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListStarRocksDataReplicationConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListStarRocksDataReplicationConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListStarRocksDataReplicationConfigRequest::getTaskName() const
{
    return taskName_;
}

void ListStarRocksDataReplicationConfigRequest::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ListStarRocksDataReplicationConfigRequest::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ListStarRocksDataReplicationConfigRequest::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


