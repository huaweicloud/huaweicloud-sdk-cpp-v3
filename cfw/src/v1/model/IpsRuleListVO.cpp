

#include "huaweicloud/cfw/v1/model/IpsRuleListVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsRuleListVO::IpsRuleListVO()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

IpsRuleListVO::~IpsRuleListVO() = default;

void IpsRuleListVO::validate()
{
}

web::json::value IpsRuleListVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool IpsRuleListVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<IpsRuleVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
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
    return ok;
}


std::string IpsRuleListVO::getFwInstanceId() const
{
    return fwInstanceId_;
}

void IpsRuleListVO::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool IpsRuleListVO::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void IpsRuleListVO::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t IpsRuleListVO::getLimit() const
{
    return limit_;
}

void IpsRuleListVO::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool IpsRuleListVO::limitIsSet() const
{
    return limitIsSet_;
}

void IpsRuleListVO::unsetlimit()
{
    limitIsSet_ = false;
}

std::string IpsRuleListVO::getObjectId() const
{
    return objectId_;
}

void IpsRuleListVO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool IpsRuleListVO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void IpsRuleListVO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t IpsRuleListVO::getOffset() const
{
    return offset_;
}

void IpsRuleListVO::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool IpsRuleListVO::offsetIsSet() const
{
    return offsetIsSet_;
}

void IpsRuleListVO::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<IpsRuleVO>& IpsRuleListVO::getRecords()
{
    return records_;
}

void IpsRuleListVO::setRecords(const std::vector<IpsRuleVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool IpsRuleListVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void IpsRuleListVO::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t IpsRuleListVO::getTotal() const
{
    return total_;
}

void IpsRuleListVO::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool IpsRuleListVO::totalIsSet() const
{
    return totalIsSet_;
}

void IpsRuleListVO::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


