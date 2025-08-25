

#include "huaweicloud/cce/v3/model/PostcheckSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PostcheckSpec::PostcheckSpec()
{
    clusterID_ = "";
    clusterIDIsSet_ = false;
    clusterVersion_ = "";
    clusterVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

PostcheckSpec::~PostcheckSpec() = default;

void PostcheckSpec::validate()
{
}

web::json::value PostcheckSpec::toJson() const
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
bool PostcheckSpec::fromJson(const web::json::value& val)
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


std::string PostcheckSpec::getClusterID() const
{
    return clusterID_;
}

void PostcheckSpec::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool PostcheckSpec::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void PostcheckSpec::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::string PostcheckSpec::getClusterVersion() const
{
    return clusterVersion_;
}

void PostcheckSpec::setClusterVersion(const std::string& value)
{
    clusterVersion_ = value;
    clusterVersionIsSet_ = true;
}

bool PostcheckSpec::clusterVersionIsSet() const
{
    return clusterVersionIsSet_;
}

void PostcheckSpec::unsetclusterVersion()
{
    clusterVersionIsSet_ = false;
}

std::string PostcheckSpec::getTargetVersion() const
{
    return targetVersion_;
}

void PostcheckSpec::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool PostcheckSpec::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void PostcheckSpec::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}


