

#include "huaweicloud/drs/v5/model/QueryRepairDetailResp_repair_details.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryRepairDetailResp_repair_details::QueryRepairDetailResp_repair_details()
{
    sourceMeta_ = "";
    sourceMetaIsSet_ = false;
    targetMeta_ = "";
    targetMetaIsSet_ = false;
    repairSqlState_ = 0;
    repairSqlStateIsSet_ = false;
    repairSqlInfo_ = "";
    repairSqlInfoIsSet_ = false;
}

QueryRepairDetailResp_repair_details::~QueryRepairDetailResp_repair_details() = default;

void QueryRepairDetailResp_repair_details::validate()
{
}

web::json::value QueryRepairDetailResp_repair_details::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceMetaIsSet_) {
        val[utility::conversions::to_string_t("source_meta")] = ModelBase::toJson(sourceMeta_);
    }
    if(targetMetaIsSet_) {
        val[utility::conversions::to_string_t("target_meta")] = ModelBase::toJson(targetMeta_);
    }
    if(repairSqlStateIsSet_) {
        val[utility::conversions::to_string_t("repair_sql_state")] = ModelBase::toJson(repairSqlState_);
    }
    if(repairSqlInfoIsSet_) {
        val[utility::conversions::to_string_t("repair_sql_info")] = ModelBase::toJson(repairSqlInfo_);
    }

    return val;
}
bool QueryRepairDetailResp_repair_details::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_meta"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_meta"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repair_sql_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repair_sql_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairSqlState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repair_sql_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repair_sql_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairSqlInfo(refVal);
        }
    }
    return ok;
}


std::string QueryRepairDetailResp_repair_details::getSourceMeta() const
{
    return sourceMeta_;
}

void QueryRepairDetailResp_repair_details::setSourceMeta(const std::string& value)
{
    sourceMeta_ = value;
    sourceMetaIsSet_ = true;
}

bool QueryRepairDetailResp_repair_details::sourceMetaIsSet() const
{
    return sourceMetaIsSet_;
}

void QueryRepairDetailResp_repair_details::unsetsourceMeta()
{
    sourceMetaIsSet_ = false;
}

std::string QueryRepairDetailResp_repair_details::getTargetMeta() const
{
    return targetMeta_;
}

void QueryRepairDetailResp_repair_details::setTargetMeta(const std::string& value)
{
    targetMeta_ = value;
    targetMetaIsSet_ = true;
}

bool QueryRepairDetailResp_repair_details::targetMetaIsSet() const
{
    return targetMetaIsSet_;
}

void QueryRepairDetailResp_repair_details::unsettargetMeta()
{
    targetMetaIsSet_ = false;
}

int32_t QueryRepairDetailResp_repair_details::getRepairSqlState() const
{
    return repairSqlState_;
}

void QueryRepairDetailResp_repair_details::setRepairSqlState(int32_t value)
{
    repairSqlState_ = value;
    repairSqlStateIsSet_ = true;
}

bool QueryRepairDetailResp_repair_details::repairSqlStateIsSet() const
{
    return repairSqlStateIsSet_;
}

void QueryRepairDetailResp_repair_details::unsetrepairSqlState()
{
    repairSqlStateIsSet_ = false;
}

std::string QueryRepairDetailResp_repair_details::getRepairSqlInfo() const
{
    return repairSqlInfo_;
}

void QueryRepairDetailResp_repair_details::setRepairSqlInfo(const std::string& value)
{
    repairSqlInfo_ = value;
    repairSqlInfoIsSet_ = true;
}

bool QueryRepairDetailResp_repair_details::repairSqlInfoIsSet() const
{
    return repairSqlInfoIsSet_;
}

void QueryRepairDetailResp_repair_details::unsetrepairSqlInfo()
{
    repairSqlInfoIsSet_ = false;
}

}
}
}
}
}


