

#include "huaweicloud/drs/v5/model/ShowIncrementComponentsDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowIncrementComponentsDetailResponse::ShowIncrementComponentsDetailResponse()
{
    updateTime_ = "";
    updateTimeIsSet_ = false;
    incrementComponentsListIsSet_ = false;
}

ShowIncrementComponentsDetailResponse::~ShowIncrementComponentsDetailResponse() = default;

void ShowIncrementComponentsDetailResponse::validate()
{
}

web::json::value ShowIncrementComponentsDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(incrementComponentsListIsSet_) {
        val[utility::conversions::to_string_t("increment_components_list")] = ModelBase::toJson(incrementComponentsList_);
    }

    return val;
}
bool ShowIncrementComponentsDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("increment_components_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("increment_components_list"));
        if(!fieldValue.is_null())
        {
            std::vector<IncreComponentDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrementComponentsList(refVal);
        }
    }
    return ok;
}


std::string ShowIncrementComponentsDetailResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowIncrementComponentsDetailResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowIncrementComponentsDetailResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowIncrementComponentsDetailResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<IncreComponentDetail>& ShowIncrementComponentsDetailResponse::getIncrementComponentsList()
{
    return incrementComponentsList_;
}

void ShowIncrementComponentsDetailResponse::setIncrementComponentsList(const std::vector<IncreComponentDetail>& value)
{
    incrementComponentsList_ = value;
    incrementComponentsListIsSet_ = true;
}

bool ShowIncrementComponentsDetailResponse::incrementComponentsListIsSet() const
{
    return incrementComponentsListIsSet_;
}

void ShowIncrementComponentsDetailResponse::unsetincrementComponentsList()
{
    incrementComponentsListIsSet_ = false;
}

}
}
}
}
}


