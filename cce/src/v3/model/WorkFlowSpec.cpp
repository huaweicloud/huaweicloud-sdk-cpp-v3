

#include "huaweicloud/cce/v3/model/WorkFlowSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




WorkFlowSpec::WorkFlowSpec()
{
    clusterID_ = "";
    clusterIDIsSet_ = false;
    clusterVersion_ = "";
    clusterVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

WorkFlowSpec::~WorkFlowSpec() = default;

void WorkFlowSpec::validate()
{
}

web::json::value WorkFlowSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIDIsSet_) {
        val[utility::conversions::to_string_t("clusterID")] = ModelBase::toJson(clusterID_);
    }
    if(clusterVersionIsSet_) {
        val[utility::conversions::to_string_t("clusterVersion")] = ModelBase::toJson(clusterVersion_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("targetVersion")] = ModelBase::toJson(targetVersion_);
    }

    return val;
}
bool WorkFlowSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    return ok;
}


std::string WorkFlowSpec::getClusterID() const
{
    return clusterID_;
}

void WorkFlowSpec::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool WorkFlowSpec::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void WorkFlowSpec::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::string WorkFlowSpec::getClusterVersion() const
{
    return clusterVersion_;
}

void WorkFlowSpec::setClusterVersion(const std::string& value)
{
    clusterVersion_ = value;
    clusterVersionIsSet_ = true;
}

bool WorkFlowSpec::clusterVersionIsSet() const
{
    return clusterVersionIsSet_;
}

void WorkFlowSpec::unsetclusterVersion()
{
    clusterVersionIsSet_ = false;
}

std::string WorkFlowSpec::getTargetVersion() const
{
    return targetVersion_;
}

void WorkFlowSpec::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool WorkFlowSpec::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void WorkFlowSpec::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}


