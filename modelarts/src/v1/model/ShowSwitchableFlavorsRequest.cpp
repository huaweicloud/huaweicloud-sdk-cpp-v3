

#include "huaweicloud/modelarts/v1/model/ShowSwitchableFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowSwitchableFlavorsRequest::ShowSwitchableFlavorsRequest()
{
    id_ = "";
    idIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ShowSwitchableFlavorsRequest::~ShowSwitchableFlavorsRequest() = default;

void ShowSwitchableFlavorsRequest::validate()
{
}

web::json::value ShowSwitchableFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ShowSwitchableFlavorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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
    return ok;
}


std::string ShowSwitchableFlavorsRequest::getId() const
{
    return id_;
}

void ShowSwitchableFlavorsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowSwitchableFlavorsRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowSwitchableFlavorsRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowSwitchableFlavorsRequest::getLimit() const
{
    return limit_;
}

void ShowSwitchableFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowSwitchableFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowSwitchableFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowSwitchableFlavorsRequest::getOffset() const
{
    return offset_;
}

void ShowSwitchableFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowSwitchableFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowSwitchableFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowSwitchableFlavorsRequest::getSortKey() const
{
    return sortKey_;
}

void ShowSwitchableFlavorsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowSwitchableFlavorsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowSwitchableFlavorsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowSwitchableFlavorsRequest::getSortDir() const
{
    return sortDir_;
}

void ShowSwitchableFlavorsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowSwitchableFlavorsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowSwitchableFlavorsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


