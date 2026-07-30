

#include "huaweicloud/modelarts/v1/model/SyncDevServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SyncDevServersRequest::SyncDevServersRequest()
{
    owner_ = "";
    ownerIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

SyncDevServersRequest::~SyncDevServersRequest() = default;

void SyncDevServersRequest::validate()
{
}

web::json::value SyncDevServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool SyncDevServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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


std::string SyncDevServersRequest::getOwner() const
{
    return owner_;
}

void SyncDevServersRequest::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool SyncDevServersRequest::ownerIsSet() const
{
    return ownerIsSet_;
}

void SyncDevServersRequest::unsetowner()
{
    ownerIsSet_ = false;
}

std::string SyncDevServersRequest::getSortDir() const
{
    return sortDir_;
}

void SyncDevServersRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool SyncDevServersRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void SyncDevServersRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string SyncDevServersRequest::getSortKey() const
{
    return sortKey_;
}

void SyncDevServersRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool SyncDevServersRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void SyncDevServersRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t SyncDevServersRequest::getOffset() const
{
    return offset_;
}

void SyncDevServersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SyncDevServersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SyncDevServersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SyncDevServersRequest::getLimit() const
{
    return limit_;
}

void SyncDevServersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SyncDevServersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SyncDevServersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


