

#include "huaweicloud/meeting/v1/model/SearchQosParticipantsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosParticipantsRequest::SearchQosParticipantsRequest()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    confType_ = "";
    confTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
}

SearchQosParticipantsRequest::~SearchQosParticipantsRequest() = default;

void SearchQosParticipantsRequest::validate()
{
}

web::json::value SearchQosParticipantsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(confTypeIsSet_) {
        val[utility::conversions::to_string_t("confType")] = ModelBase::toJson(confType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("searchKey")] = ModelBase::toJson(searchKey_);
    }

    return val;
}
bool SearchQosParticipantsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("searchKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searchKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    return ok;
}


std::string SearchQosParticipantsRequest::getConfUUID() const
{
    return confUUID_;
}

void SearchQosParticipantsRequest::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool SearchQosParticipantsRequest::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void SearchQosParticipantsRequest::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string SearchQosParticipantsRequest::getConfType() const
{
    return confType_;
}

void SearchQosParticipantsRequest::setConfType(const std::string& value)
{
    confType_ = value;
    confTypeIsSet_ = true;
}

bool SearchQosParticipantsRequest::confTypeIsSet() const
{
    return confTypeIsSet_;
}

void SearchQosParticipantsRequest::unsetconfType()
{
    confTypeIsSet_ = false;
}

int32_t SearchQosParticipantsRequest::getOffset() const
{
    return offset_;
}

void SearchQosParticipantsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchQosParticipantsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchQosParticipantsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchQosParticipantsRequest::getLimit() const
{
    return limit_;
}

void SearchQosParticipantsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchQosParticipantsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchQosParticipantsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchQosParticipantsRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchQosParticipantsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchQosParticipantsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchQosParticipantsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

}
}
}
}
}


