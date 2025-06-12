

#include "huaweicloud/metastudio/v1/model/ListPictureModelingJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListPictureModelingJobsRequest::ListPictureModelingJobsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    createSince_ = "";
    createSinceIsSet_ = false;
}

ListPictureModelingJobsRequest::~ListPictureModelingJobsRequest() = default;

void ListPictureModelingJobsRequest::validate()
{
}

web::json::value ListPictureModelingJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }

    return val;
}
bool ListPictureModelingJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSince(refVal);
        }
    }
    return ok;
}


std::string ListPictureModelingJobsRequest::getAuthorization() const
{
    return authorization_;
}

void ListPictureModelingJobsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListPictureModelingJobsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListPictureModelingJobsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListPictureModelingJobsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListPictureModelingJobsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListPictureModelingJobsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListPictureModelingJobsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListPictureModelingJobsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListPictureModelingJobsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListPictureModelingJobsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListPictureModelingJobsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListPictureModelingJobsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListPictureModelingJobsRequest::getOffset() const
{
    return offset_;
}

void ListPictureModelingJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPictureModelingJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPictureModelingJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPictureModelingJobsRequest::getLimit() const
{
    return limit_;
}

void ListPictureModelingJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPictureModelingJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPictureModelingJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getState() const
{
    return state_;
}

void ListPictureModelingJobsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListPictureModelingJobsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListPictureModelingJobsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getSortKey() const
{
    return sortKey_;
}

void ListPictureModelingJobsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListPictureModelingJobsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListPictureModelingJobsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getSortDir() const
{
    return sortDir_;
}

void ListPictureModelingJobsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListPictureModelingJobsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListPictureModelingJobsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListPictureModelingJobsRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListPictureModelingJobsRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListPictureModelingJobsRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListPictureModelingJobsRequest::getCreateSince() const
{
    return createSince_;
}

void ListPictureModelingJobsRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListPictureModelingJobsRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListPictureModelingJobsRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

}
}
}
}
}


