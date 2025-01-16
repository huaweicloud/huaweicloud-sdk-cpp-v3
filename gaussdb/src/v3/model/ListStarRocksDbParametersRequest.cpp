

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDbParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDbParametersRequest::ListStarRocksDbParametersRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    addTaskScenario_ = "";
    addTaskScenarioIsSet_ = false;
}

ListStarRocksDbParametersRequest::~ListStarRocksDbParametersRequest() = default;

void ListStarRocksDbParametersRequest::validate()
{
}

web::json::value ListStarRocksDbParametersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(addTaskScenarioIsSet_) {
        val[utility::conversions::to_string_t("add_task_scenario")] = ModelBase::toJson(addTaskScenario_);
    }

    return val;
}
bool ListStarRocksDbParametersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("add_task_scenario"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_task_scenario"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddTaskScenario(refVal);
        }
    }
    return ok;
}


std::string ListStarRocksDbParametersRequest::getInstanceId() const
{
    return instanceId_;
}

void ListStarRocksDbParametersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListStarRocksDbParametersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListStarRocksDbParametersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListStarRocksDbParametersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListStarRocksDbParametersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListStarRocksDbParametersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListStarRocksDbParametersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListStarRocksDbParametersRequest::getAddTaskScenario() const
{
    return addTaskScenario_;
}

void ListStarRocksDbParametersRequest::setAddTaskScenario(const std::string& value)
{
    addTaskScenario_ = value;
    addTaskScenarioIsSet_ = true;
}

bool ListStarRocksDbParametersRequest::addTaskScenarioIsSet() const
{
    return addTaskScenarioIsSet_;
}

void ListStarRocksDbParametersRequest::unsetaddTaskScenario()
{
    addTaskScenarioIsSet_ = false;
}

}
}
}
}
}


