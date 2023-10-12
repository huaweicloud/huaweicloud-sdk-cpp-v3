

#include "huaweicloud/gaussdbforopengauss/v3/model/DatastoreOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatastoreOption::DatastoreOption()
{
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
}

DatastoreOption::~DatastoreOption() = default;

void DatastoreOption::validate()
{
}

web::json::value DatastoreOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }

    return val;
}
bool DatastoreOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    return ok;
}


std::string DatastoreOption::getEngineVersion() const
{
    return engineVersion_;
}

void DatastoreOption::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool DatastoreOption::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void DatastoreOption::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string DatastoreOption::getInstanceMode() const
{
    return instanceMode_;
}

void DatastoreOption::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool DatastoreOption::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void DatastoreOption::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

}
}
}
}
}


