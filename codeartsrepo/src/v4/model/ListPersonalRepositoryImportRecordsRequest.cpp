

#include "huaweicloud/codeartsrepo/v4/model/ListPersonalRepositoryImportRecordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListPersonalRepositoryImportRecordsRequest::ListPersonalRepositoryImportRecordsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    createdAfter_ = utility::datetime();
    createdAfterIsSet_ = false;
    createdBefore_ = utility::datetime();
    createdBeforeIsSet_ = false;
    finishedAfter_ = utility::datetime();
    finishedAfterIsSet_ = false;
    finishedBefore_ = utility::datetime();
    finishedBeforeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
}

ListPersonalRepositoryImportRecordsRequest::~ListPersonalRepositoryImportRecordsRequest() = default;

void ListPersonalRepositoryImportRecordsRequest::validate()
{
}

web::json::value ListPersonalRepositoryImportRecordsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(createdAfterIsSet_) {
        val[utility::conversions::to_string_t("created_after")] = ModelBase::toJson(createdAfter_);
    }
    if(createdBeforeIsSet_) {
        val[utility::conversions::to_string_t("created_before")] = ModelBase::toJson(createdBefore_);
    }
    if(finishedAfterIsSet_) {
        val[utility::conversions::to_string_t("finished_after")] = ModelBase::toJson(finishedAfter_);
    }
    if(finishedBeforeIsSet_) {
        val[utility::conversions::to_string_t("finished_before")] = ModelBase::toJson(finishedBefore_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}
bool ListPersonalRepositoryImportRecordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    return ok;
}


int32_t ListPersonalRepositoryImportRecordsRequest::getOffset() const
{
    return offset_;
}

void ListPersonalRepositoryImportRecordsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPersonalRepositoryImportRecordsRequest::getLimit() const
{
    return limit_;
}

void ListPersonalRepositoryImportRecordsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPersonalRepositoryImportRecordsRequest::getState() const
{
    return state_;
}

void ListPersonalRepositoryImportRecordsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListPersonalRepositoryImportRecordsRequest::getSourceType() const
{
    return sourceType_;
}

void ListPersonalRepositoryImportRecordsRequest::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

utility::datetime ListPersonalRepositoryImportRecordsRequest::getCreatedAfter() const
{
    return createdAfter_;
}

void ListPersonalRepositoryImportRecordsRequest::setCreatedAfter(const utility::datetime& value)
{
    createdAfter_ = value;
    createdAfterIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::createdAfterIsSet() const
{
    return createdAfterIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetcreatedAfter()
{
    createdAfterIsSet_ = false;
}

utility::datetime ListPersonalRepositoryImportRecordsRequest::getCreatedBefore() const
{
    return createdBefore_;
}

void ListPersonalRepositoryImportRecordsRequest::setCreatedBefore(const utility::datetime& value)
{
    createdBefore_ = value;
    createdBeforeIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::createdBeforeIsSet() const
{
    return createdBeforeIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetcreatedBefore()
{
    createdBeforeIsSet_ = false;
}

utility::datetime ListPersonalRepositoryImportRecordsRequest::getFinishedAfter() const
{
    return finishedAfter_;
}

void ListPersonalRepositoryImportRecordsRequest::setFinishedAfter(const utility::datetime& value)
{
    finishedAfter_ = value;
    finishedAfterIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::finishedAfterIsSet() const
{
    return finishedAfterIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetfinishedAfter()
{
    finishedAfterIsSet_ = false;
}

utility::datetime ListPersonalRepositoryImportRecordsRequest::getFinishedBefore() const
{
    return finishedBefore_;
}

void ListPersonalRepositoryImportRecordsRequest::setFinishedBefore(const utility::datetime& value)
{
    finishedBefore_ = value;
    finishedBeforeIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::finishedBeforeIsSet() const
{
    return finishedBeforeIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetfinishedBefore()
{
    finishedBeforeIsSet_ = false;
}

std::string ListPersonalRepositoryImportRecordsRequest::getSearch() const
{
    return search_;
}

void ListPersonalRepositoryImportRecordsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListPersonalRepositoryImportRecordsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListPersonalRepositoryImportRecordsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListPersonalRepositoryImportRecordsRequest::getSort() const
{
    return sort_;
}

void ListPersonalRepositoryImportRecordsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListPersonalRepositoryImportRecordsRequest::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


