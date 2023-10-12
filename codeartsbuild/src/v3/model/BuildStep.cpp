

#include "huaweicloud/codeartsbuild/v3/model/BuildStep.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildStep::BuildStep()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    buildTime_ = 0;
    buildTimeIsSet_ = false;
}

BuildStep::~BuildStep() = default;

void BuildStep::validate()
{
}

web::json::value BuildStep::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(buildTimeIsSet_) {
        val[utility::conversions::to_string_t("build_time")] = ModelBase::toJson(buildTime_);
    }

    return val;
}
bool BuildStep::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildTime(refVal);
        }
    }
    return ok;
}


std::string BuildStep::getName() const
{
    return name_;
}

void BuildStep::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BuildStep::nameIsSet() const
{
    return nameIsSet_;
}

void BuildStep::unsetname()
{
    nameIsSet_ = false;
}

std::string BuildStep::getStatus() const
{
    return status_;
}

void BuildStep::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BuildStep::statusIsSet() const
{
    return statusIsSet_;
}

void BuildStep::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t BuildStep::getBuildTime() const
{
    return buildTime_;
}

void BuildStep::setBuildTime(int32_t value)
{
    buildTime_ = value;
    buildTimeIsSet_ = true;
}

bool BuildStep::buildTimeIsSet() const
{
    return buildTimeIsSet_;
}

void BuildStep::unsetbuildTime()
{
    buildTimeIsSet_ = false;
}

}
}
}
}
}


