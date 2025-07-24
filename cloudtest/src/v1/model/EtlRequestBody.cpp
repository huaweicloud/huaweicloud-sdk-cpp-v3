

#include "huaweicloud/cloudtest/v1/model/EtlRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




EtlRequestBody::EtlRequestBody()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    isBak_ = "";
    isBakIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    filterTimeField_ = "";
    filterTimeFieldIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    schemaNo_ = "";
    schemaNoIsSet_ = false;
}

EtlRequestBody::~EtlRequestBody() = default;

void EtlRequestBody::validate()
{
}

web::json::value EtlRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(isBakIsSet_) {
        val[utility::conversions::to_string_t("is_bak")] = ModelBase::toJson(isBak_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(filterTimeFieldIsSet_) {
        val[utility::conversions::to_string_t("filter_time_field")] = ModelBase::toJson(filterTimeField_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(schemaNoIsSet_) {
        val[utility::conversions::to_string_t("schema_no")] = ModelBase::toJson(schemaNo_);
    }

    return val;
}
bool EtlRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_bak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_bak"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_time_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_time_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterTimeField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaNo(refVal);
        }
    }
    return ok;
}


int32_t EtlRequestBody::getOffset() const
{
    return offset_;
}

void EtlRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool EtlRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void EtlRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t EtlRequestBody::getLimit() const
{
    return limit_;
}

void EtlRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool EtlRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void EtlRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string EtlRequestBody::getTableName() const
{
    return tableName_;
}

void EtlRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool EtlRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void EtlRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string EtlRequestBody::getIsBak() const
{
    return isBak_;
}

void EtlRequestBody::setIsBak(const std::string& value)
{
    isBak_ = value;
    isBakIsSet_ = true;
}

bool EtlRequestBody::isBakIsSet() const
{
    return isBakIsSet_;
}

void EtlRequestBody::unsetisBak()
{
    isBakIsSet_ = false;
}

std::string EtlRequestBody::getStartTime() const
{
    return startTime_;
}

void EtlRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool EtlRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void EtlRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string EtlRequestBody::getEndTime() const
{
    return endTime_;
}

void EtlRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EtlRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EtlRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string EtlRequestBody::getFilterTimeField() const
{
    return filterTimeField_;
}

void EtlRequestBody::setFilterTimeField(const std::string& value)
{
    filterTimeField_ = value;
    filterTimeFieldIsSet_ = true;
}

bool EtlRequestBody::filterTimeFieldIsSet() const
{
    return filterTimeFieldIsSet_;
}

void EtlRequestBody::unsetfilterTimeField()
{
    filterTimeFieldIsSet_ = false;
}

std::string EtlRequestBody::getSortField() const
{
    return sortField_;
}

void EtlRequestBody::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool EtlRequestBody::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void EtlRequestBody::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string EtlRequestBody::getSchemaNo() const
{
    return schemaNo_;
}

void EtlRequestBody::setSchemaNo(const std::string& value)
{
    schemaNo_ = value;
    schemaNoIsSet_ = true;
}

bool EtlRequestBody::schemaNoIsSet() const
{
    return schemaNoIsSet_;
}

void EtlRequestBody::unsetschemaNo()
{
    schemaNoIsSet_ = false;
}

}
}
}
}
}


