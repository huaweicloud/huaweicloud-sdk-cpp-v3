

#include "huaweicloud/codeartscheck/v2/model/TaskCheckParameters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskCheckParameters::TaskCheckParameters()
{
    checkId_ = 0;
    checkIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    checkerConfigsIsSet_ = false;
}

TaskCheckParameters::~TaskCheckParameters() = default;

void TaskCheckParameters::validate()
{
}

web::json::value TaskCheckParameters::toJson() const
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
bool TaskCheckParameters::fromJson(const web::json::value& val)
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


int32_t TaskCheckParameters::getCheckId() const
{
    return checkId_;
}

void TaskCheckParameters::setCheckId(int32_t value)
{
    checkId_ = value;
    checkIdIsSet_ = true;
}

bool TaskCheckParameters::checkIdIsSet() const
{
    return checkIdIsSet_;
}

void TaskCheckParameters::unsetcheckId()
{
    checkIdIsSet_ = false;
}

std::string TaskCheckParameters::getName() const
{
    return name_;
}

void TaskCheckParameters::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskCheckParameters::nameIsSet() const
{
    return nameIsSet_;
}

void TaskCheckParameters::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CheckConfigInfo>& TaskCheckParameters::getCheckerConfigs()
{
    return checkerConfigs_;
}

void TaskCheckParameters::setCheckerConfigs(const std::vector<CheckConfigInfo>& value)
{
    checkerConfigs_ = value;
    checkerConfigsIsSet_ = true;
}

bool TaskCheckParameters::checkerConfigsIsSet() const
{
    return checkerConfigsIsSet_;
}

void TaskCheckParameters::unsetcheckerConfigs()
{
    checkerConfigsIsSet_ = false;
}

}
}
}
}
}


