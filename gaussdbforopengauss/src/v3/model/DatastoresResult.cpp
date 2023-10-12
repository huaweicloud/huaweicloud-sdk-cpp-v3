

#include "huaweicloud/gaussdbforopengauss/v3/model/DatastoresResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatastoresResult::DatastoresResult()
{
    supportedVersionsIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
}

DatastoresResult::~DatastoresResult() = default;

void DatastoresResult::validate()
{
}

web::json::value DatastoresResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportedVersionsIsSet_) {
        val[utility::conversions::to_string_t("supported_versions")] = ModelBase::toJson(supportedVersions_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }

    return val;
}
bool DatastoresResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("supported_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedVersions(refVal);
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


std::vector<std::string>& DatastoresResult::getSupportedVersions()
{
    return supportedVersions_;
}

void DatastoresResult::setSupportedVersions(const std::vector<std::string>& value)
{
    supportedVersions_ = value;
    supportedVersionsIsSet_ = true;
}

bool DatastoresResult::supportedVersionsIsSet() const
{
    return supportedVersionsIsSet_;
}

void DatastoresResult::unsetsupportedVersions()
{
    supportedVersionsIsSet_ = false;
}

std::string DatastoresResult::getInstanceMode() const
{
    return instanceMode_;
}

void DatastoresResult::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool DatastoresResult::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void DatastoresResult::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

}
}
}
}
}


