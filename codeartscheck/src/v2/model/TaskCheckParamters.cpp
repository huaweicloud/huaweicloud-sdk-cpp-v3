

#include "huaweicloud/codeartscheck/v2/model/TaskCheckParamters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskCheckParamters::TaskCheckParamters()
{
    checkId_ = 0;
    checkIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    checkerConfigsIsSet_ = false;
}

TaskCheckParamters::~TaskCheckParamters() = default;

void TaskCheckParamters::validate()
{
}

web::json::value TaskCheckParamters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkIdIsSet_) {
        val[utility::conversions::to_string_t("check_id")] = ModelBase::toJson(checkId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(checkerConfigsIsSet_) {
        val[utility::conversions::to_string_t("checker_configs")] = ModelBase::toJson(checkerConfigs_);
    }

    return val;
}
bool TaskCheckParamters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checker_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checker_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckerConfigs(refVal);
        }
    }
    return ok;
}


int32_t TaskCheckParamters::getCheckId() const
{
    return checkId_;
}

void TaskCheckParamters::setCheckId(int32_t value)
{
    checkId_ = value;
    checkIdIsSet_ = true;
}

bool TaskCheckParamters::checkIdIsSet() const
{
    return checkIdIsSet_;
}

void TaskCheckParamters::unsetcheckId()
{
    checkIdIsSet_ = false;
}

std::string TaskCheckParamters::getName() const
{
    return name_;
}

void TaskCheckParamters::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskCheckParamters::nameIsSet() const
{
    return nameIsSet_;
}

void TaskCheckParamters::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CheckConfigInfo>& TaskCheckParamters::getCheckerConfigs()
{
    return checkerConfigs_;
}

void TaskCheckParamters::setCheckerConfigs(const std::vector<CheckConfigInfo>& value)
{
    checkerConfigs_ = value;
    checkerConfigsIsSet_ = true;
}

bool TaskCheckParamters::checkerConfigsIsSet() const
{
    return checkerConfigsIsSet_;
}

void TaskCheckParamters::unsetcheckerConfigs()
{
    checkerConfigsIsSet_ = false;
}

}
}
}
}
}


