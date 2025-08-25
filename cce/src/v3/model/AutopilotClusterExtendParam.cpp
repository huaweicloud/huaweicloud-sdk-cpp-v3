

#include "huaweicloud/cce/v3/model/AutopilotClusterExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterExtendParam::AutopilotClusterExtendParam()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    upgradefrom_ = "";
    upgradefromIsSet_ = false;
}

AutopilotClusterExtendParam::~AutopilotClusterExtendParam() = default;

void AutopilotClusterExtendParam::validate()
{
}

web::json::value AutopilotClusterExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterpriseProjectId")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(upgradefromIsSet_) {
        val[utility::conversions::to_string_t("upgradefrom")] = ModelBase::toJson(upgradefrom_);
    }

    return val;
}
bool AutopilotClusterExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterpriseProjectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterpriseProjectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgradefrom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgradefrom"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradefrom(refVal);
        }
    }
    return ok;
}


std::string AutopilotClusterExtendParam::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AutopilotClusterExtendParam::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AutopilotClusterExtendParam::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AutopilotClusterExtendParam::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AutopilotClusterExtendParam::getUpgradefrom() const
{
    return upgradefrom_;
}

void AutopilotClusterExtendParam::setUpgradefrom(const std::string& value)
{
    upgradefrom_ = value;
    upgradefromIsSet_ = true;
}

bool AutopilotClusterExtendParam::upgradefromIsSet() const
{
    return upgradefromIsSet_;
}

void AutopilotClusterExtendParam::unsetupgradefrom()
{
    upgradefromIsSet_ = false;
}

}
}
}
}
}


