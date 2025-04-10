

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDisasterRecoveryRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDisasterRecoveryRecordRequest::ListDisasterRecoveryRecordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    entityId_ = "";
    entityIdIsSet_ = false;
    entityType_ = "";
    entityTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDisasterRecoveryRecordRequest::~ListDisasterRecoveryRecordRequest() = default;

void ListDisasterRecoveryRecordRequest::validate()
{
}

web::json::value ListDisasterRecoveryRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(entityTypeIsSet_) {
        val[utility::conversions::to_string_t("entity_type")] = ModelBase::toJson(entityType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDisasterRecoveryRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListDisasterRecoveryRecordRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDisasterRecoveryRecordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDisasterRecoveryRecordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDisasterRecoveryRecordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDisasterRecoveryRecordRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDisasterRecoveryRecordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDisasterRecoveryRecordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDisasterRecoveryRecordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDisasterRecoveryRecordRequest::getEntityId() const
{
    return entityId_;
}

void ListDisasterRecoveryRecordRequest::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool ListDisasterRecoveryRecordRequest::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void ListDisasterRecoveryRecordRequest::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string ListDisasterRecoveryRecordRequest::getEntityType() const
{
    return entityType_;
}

void ListDisasterRecoveryRecordRequest::setEntityType(const std::string& value)
{
    entityType_ = value;
    entityTypeIsSet_ = true;
}

bool ListDisasterRecoveryRecordRequest::entityTypeIsSet() const
{
    return entityTypeIsSet_;
}

void ListDisasterRecoveryRecordRequest::unsetentityType()
{
    entityTypeIsSet_ = false;
}

int32_t ListDisasterRecoveryRecordRequest::getLimit() const
{
    return limit_;
}

void ListDisasterRecoveryRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDisasterRecoveryRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDisasterRecoveryRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDisasterRecoveryRecordRequest::getOffset() const
{
    return offset_;
}

void ListDisasterRecoveryRecordRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDisasterRecoveryRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDisasterRecoveryRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


