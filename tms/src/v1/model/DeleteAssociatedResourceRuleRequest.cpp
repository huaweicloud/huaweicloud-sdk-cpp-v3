

#include "huaweicloud/tms/v1/model/DeleteAssociatedResourceRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




DeleteAssociatedResourceRuleRequest::DeleteAssociatedResourceRuleRequest()
{
    settingName_ = "";
    settingNameIsSet_ = false;
    regionIdIsSet_ = false;
}

DeleteAssociatedResourceRuleRequest::~DeleteAssociatedResourceRuleRequest() = default;

void DeleteAssociatedResourceRuleRequest::validate()
{
}

web::json::value DeleteAssociatedResourceRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(settingNameIsSet_) {
        val[utility::conversions::to_string_t("setting_name")] = ModelBase::toJson(settingName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool DeleteAssociatedResourceRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("setting_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string DeleteAssociatedResourceRuleRequest::getSettingName() const
{
    return settingName_;
}

void DeleteAssociatedResourceRuleRequest::setSettingName(const std::string& value)
{
    settingName_ = value;
    settingNameIsSet_ = true;
}

bool DeleteAssociatedResourceRuleRequest::settingNameIsSet() const
{
    return settingNameIsSet_;
}

void DeleteAssociatedResourceRuleRequest::unsetsettingName()
{
    settingNameIsSet_ = false;
}

std::vector<std::string>& DeleteAssociatedResourceRuleRequest::getRegionId()
{
    return regionId_;
}

void DeleteAssociatedResourceRuleRequest::setRegionId(const std::vector<std::string>& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool DeleteAssociatedResourceRuleRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void DeleteAssociatedResourceRuleRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


