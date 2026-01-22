

#include "huaweicloud/cfw/v1/model/ListSchedulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListSchedulesRequest::ListSchedulesRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListSchedulesRequest::~ListSchedulesRequest() = default;

void ListSchedulesRequest::validate()
{
}

web::json::value ListSchedulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListSchedulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
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


std::string ListSchedulesRequest::getObjectId() const
{
    return objectId_;
}

void ListSchedulesRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListSchedulesRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListSchedulesRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListSchedulesRequest::getName() const
{
    return name_;
}

void ListSchedulesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSchedulesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListSchedulesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListSchedulesRequest::getDesc() const
{
    return desc_;
}

void ListSchedulesRequest::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ListSchedulesRequest::descIsSet() const
{
    return descIsSet_;
}

void ListSchedulesRequest::unsetdesc()
{
    descIsSet_ = false;
}

int32_t ListSchedulesRequest::getLimit() const
{
    return limit_;
}

void ListSchedulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSchedulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSchedulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSchedulesRequest::getOffset() const
{
    return offset_;
}

void ListSchedulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSchedulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSchedulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


