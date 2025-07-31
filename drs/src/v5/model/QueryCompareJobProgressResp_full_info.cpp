

#include "huaweicloud/drs/v5/model/QueryCompareJobProgressResp_full_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryCompareJobProgressResp_full_info::QueryCompareJobProgressResp_full_info()
{
    progress_ = 0.0f;
    progressIsSet_ = false;
    srcSpeed_ = "";
    srcSpeedIsSet_ = false;
    recheckEntities_ = 0;
    recheckEntitiesIsSet_ = false;
}

QueryCompareJobProgressResp_full_info::~QueryCompareJobProgressResp_full_info() = default;

void QueryCompareJobProgressResp_full_info::validate()
{
}

web::json::value QueryCompareJobProgressResp_full_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(srcSpeedIsSet_) {
        val[utility::conversions::to_string_t("src_speed")] = ModelBase::toJson(srcSpeed_);
    }
    if(recheckEntitiesIsSet_) {
        val[utility::conversions::to_string_t("recheck_entities")] = ModelBase::toJson(recheckEntities_);
    }

    return val;
}
bool QueryCompareJobProgressResp_full_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_speed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcSpeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recheck_entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recheck_entities"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecheckEntities(refVal);
        }
    }
    return ok;
}


float QueryCompareJobProgressResp_full_info::getProgress() const
{
    return progress_;
}

void QueryCompareJobProgressResp_full_info::setProgress(float value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool QueryCompareJobProgressResp_full_info::progressIsSet() const
{
    return progressIsSet_;
}

void QueryCompareJobProgressResp_full_info::unsetprogress()
{
    progressIsSet_ = false;
}

std::string QueryCompareJobProgressResp_full_info::getSrcSpeed() const
{
    return srcSpeed_;
}

void QueryCompareJobProgressResp_full_info::setSrcSpeed(const std::string& value)
{
    srcSpeed_ = value;
    srcSpeedIsSet_ = true;
}

bool QueryCompareJobProgressResp_full_info::srcSpeedIsSet() const
{
    return srcSpeedIsSet_;
}

void QueryCompareJobProgressResp_full_info::unsetsrcSpeed()
{
    srcSpeedIsSet_ = false;
}

int32_t QueryCompareJobProgressResp_full_info::getRecheckEntities() const
{
    return recheckEntities_;
}

void QueryCompareJobProgressResp_full_info::setRecheckEntities(int32_t value)
{
    recheckEntities_ = value;
    recheckEntitiesIsSet_ = true;
}

bool QueryCompareJobProgressResp_full_info::recheckEntitiesIsSet() const
{
    return recheckEntitiesIsSet_;
}

void QueryCompareJobProgressResp_full_info::unsetrecheckEntities()
{
    recheckEntitiesIsSet_ = false;
}

}
}
}
}
}


