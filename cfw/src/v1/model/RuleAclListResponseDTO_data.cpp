

#include "huaweicloud/cfw/v1/model/RuleAclListResponseDTO_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleAclListResponseDTO_data::RuleAclListResponseDTO_data()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    recordsIsSet_ = false;
}

RuleAclListResponseDTO_data::~RuleAclListResponseDTO_data() = default;

void RuleAclListResponseDTO_data::validate()
{
}

web::json::value RuleAclListResponseDTO_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}

bool RuleAclListResponseDTO_data::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleAclListResponseDTO_data_records> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}

int32_t RuleAclListResponseDTO_data::getOffset() const
{
    return offset_;
}

void RuleAclListResponseDTO_data::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool RuleAclListResponseDTO_data::offsetIsSet() const
{
    return offsetIsSet_;
}

void RuleAclListResponseDTO_data::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data::getLimit() const
{
    return limit_;
}

void RuleAclListResponseDTO_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool RuleAclListResponseDTO_data::limitIsSet() const
{
    return limitIsSet_;
}

void RuleAclListResponseDTO_data::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data::getTotal() const
{
    return total_;
}

void RuleAclListResponseDTO_data::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RuleAclListResponseDTO_data::totalIsSet() const
{
    return totalIsSet_;
}

void RuleAclListResponseDTO_data::unsettotal()
{
    totalIsSet_ = false;
}

std::string RuleAclListResponseDTO_data::getObjectId() const
{
    return objectId_;
}

void RuleAclListResponseDTO_data::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool RuleAclListResponseDTO_data::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void RuleAclListResponseDTO_data::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<RuleAclListResponseDTO_data_records>& RuleAclListResponseDTO_data::getRecords()
{
    return records_;
}

void RuleAclListResponseDTO_data::setRecords(const std::vector<RuleAclListResponseDTO_data_records>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool RuleAclListResponseDTO_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void RuleAclListResponseDTO_data::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


