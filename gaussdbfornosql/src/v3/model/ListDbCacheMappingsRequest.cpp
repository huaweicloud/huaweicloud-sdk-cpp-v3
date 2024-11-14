

#include "huaweicloud/gaussdbfornosql/v3/model/ListDbCacheMappingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDbCacheMappingsRequest::ListDbCacheMappingsRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceInstanceName_ = "";
    sourceInstanceNameIsSet_ = false;
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    targetInstanceName_ = "";
    targetInstanceNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDbCacheMappingsRequest::~ListDbCacheMappingsRequest() = default;

void ListDbCacheMappingsRequest::validate()
{
}

web::json::value ListDbCacheMappingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(sourceInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("source_instance_name")] = ModelBase::toJson(sourceInstanceName_);
    }
    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(targetInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("target_instance_name")] = ModelBase::toJson(targetInstanceName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDbCacheMappingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListDbCacheMappingsRequest::getId() const
{
    return id_;
}

void ListDbCacheMappingsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDbCacheMappingsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListDbCacheMappingsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListDbCacheMappingsRequest::getName() const
{
    return name_;
}

void ListDbCacheMappingsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDbCacheMappingsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDbCacheMappingsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDbCacheMappingsRequest::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void ListDbCacheMappingsRequest::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool ListDbCacheMappingsRequest::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void ListDbCacheMappingsRequest::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string ListDbCacheMappingsRequest::getSourceInstanceName() const
{
    return sourceInstanceName_;
}

void ListDbCacheMappingsRequest::setSourceInstanceName(const std::string& value)
{
    sourceInstanceName_ = value;
    sourceInstanceNameIsSet_ = true;
}

bool ListDbCacheMappingsRequest::sourceInstanceNameIsSet() const
{
    return sourceInstanceNameIsSet_;
}

void ListDbCacheMappingsRequest::unsetsourceInstanceName()
{
    sourceInstanceNameIsSet_ = false;
}

std::string ListDbCacheMappingsRequest::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void ListDbCacheMappingsRequest::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool ListDbCacheMappingsRequest::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void ListDbCacheMappingsRequest::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

std::string ListDbCacheMappingsRequest::getTargetInstanceName() const
{
    return targetInstanceName_;
}

void ListDbCacheMappingsRequest::setTargetInstanceName(const std::string& value)
{
    targetInstanceName_ = value;
    targetInstanceNameIsSet_ = true;
}

bool ListDbCacheMappingsRequest::targetInstanceNameIsSet() const
{
    return targetInstanceNameIsSet_;
}

void ListDbCacheMappingsRequest::unsettargetInstanceName()
{
    targetInstanceNameIsSet_ = false;
}

int32_t ListDbCacheMappingsRequest::getOffset() const
{
    return offset_;
}

void ListDbCacheMappingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbCacheMappingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbCacheMappingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDbCacheMappingsRequest::getLimit() const
{
    return limit_;
}

void ListDbCacheMappingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbCacheMappingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbCacheMappingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


