

#include "huaweicloud/modelarts/v1/model/NodeDriver.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeDriver::NodeDriver()
{
    version_ = "";
    versionIsSet_ = false;
    updateStrategy_ = "";
    updateStrategyIsSet_ = false;
}

NodeDriver::~NodeDriver() = default;

void NodeDriver::validate()
{
}

web::json::value NodeDriver::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(updateStrategyIsSet_) {
        val[utility::conversions::to_string_t("updateStrategy")] = ModelBase::toJson(updateStrategy_);
    }

    return val;
}
bool NodeDriver::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateStrategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateStrategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateStrategy(refVal);
        }
    }
    return ok;
}


std::string NodeDriver::getVersion() const
{
    return version_;
}

void NodeDriver::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool NodeDriver::versionIsSet() const
{
    return versionIsSet_;
}

void NodeDriver::unsetversion()
{
    versionIsSet_ = false;
}

std::string NodeDriver::getUpdateStrategy() const
{
    return updateStrategy_;
}

void NodeDriver::setUpdateStrategy(const std::string& value)
{
    updateStrategy_ = value;
    updateStrategyIsSet_ = true;
}

bool NodeDriver::updateStrategyIsSet() const
{
    return updateStrategyIsSet_;
}

void NodeDriver::unsetupdateStrategy()
{
    updateStrategyIsSet_ = false;
}

}
}
}
}
}


