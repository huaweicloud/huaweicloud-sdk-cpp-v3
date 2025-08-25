

#include "huaweicloud/cce/v3/model/PrecheckSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PrecheckSpec::PrecheckSpec()
{
    clusterID_ = "";
    clusterIDIsSet_ = false;
    clusterVersion_ = "";
    clusterVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    skippedCheckItemListIsSet_ = false;
}

PrecheckSpec::~PrecheckSpec() = default;

void PrecheckSpec::validate()
{
}

web::json::value PrecheckSpec::toJson() const
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
    if(skippedCheckItemListIsSet_) {
        val[utility::conversions::to_string_t("skippedCheckItemList")] = ModelBase::toJson(skippedCheckItemList_);
    }

    return val;
}
bool PrecheckSpec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("skippedCheckItemList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skippedCheckItemList"));
        if(!fieldValue.is_null())
        {
            std::vector<SkippedCheckItemList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedCheckItemList(refVal);
        }
    }
    return ok;
}


std::string PrecheckSpec::getClusterID() const
{
    return clusterID_;
}

void PrecheckSpec::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool PrecheckSpec::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void PrecheckSpec::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::string PrecheckSpec::getClusterVersion() const
{
    return clusterVersion_;
}

void PrecheckSpec::setClusterVersion(const std::string& value)
{
    clusterVersion_ = value;
    clusterVersionIsSet_ = true;
}

bool PrecheckSpec::clusterVersionIsSet() const
{
    return clusterVersionIsSet_;
}

void PrecheckSpec::unsetclusterVersion()
{
    clusterVersionIsSet_ = false;
}

std::string PrecheckSpec::getTargetVersion() const
{
    return targetVersion_;
}

void PrecheckSpec::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool PrecheckSpec::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void PrecheckSpec::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::vector<SkippedCheckItemList>& PrecheckSpec::getSkippedCheckItemList()
{
    return skippedCheckItemList_;
}

void PrecheckSpec::setSkippedCheckItemList(const std::vector<SkippedCheckItemList>& value)
{
    skippedCheckItemList_ = value;
    skippedCheckItemListIsSet_ = true;
}

bool PrecheckSpec::skippedCheckItemListIsSet() const
{
    return skippedCheckItemListIsSet_;
}

void PrecheckSpec::unsetskippedCheckItemList()
{
    skippedCheckItemListIsSet_ = false;
}

}
}
}
}
}


