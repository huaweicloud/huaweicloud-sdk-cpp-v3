

#include "huaweicloud/metastudio/v1/model/ListDigitalHumanVideoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListDigitalHumanVideoRequest::ListDigitalHumanVideoRequest()
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
    fuzzyQueryFieldIsSet_ = false;
    scriptId_ = "";
    scriptIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListDigitalHumanVideoRequest::~ListDigitalHumanVideoRequest() = default;

void ListDigitalHumanVideoRequest::validate()
{
}

web::json::value ListDigitalHumanVideoRequest::toJson() const
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
    if(fuzzyQueryFieldIsSet_) {
        val[utility::conversions::to_string_t("fuzzy_query_field")] = ModelBase::toJson(fuzzyQueryField_);
    }
    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListDigitalHumanVideoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fuzzy_query_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuzzy_query_field"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuzzyQueryField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string ListDigitalHumanVideoRequest::getAuthorization() const
{
    return authorization_;
}

void ListDigitalHumanVideoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListDigitalHumanVideoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListDigitalHumanVideoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListDigitalHumanVideoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListDigitalHumanVideoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListDigitalHumanVideoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListDigitalHumanVideoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListDigitalHumanVideoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListDigitalHumanVideoRequest::getOffset() const
{
    return offset_;
}

void ListDigitalHumanVideoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDigitalHumanVideoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDigitalHumanVideoRequest::getLimit() const
{
    return limit_;
}

void ListDigitalHumanVideoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDigitalHumanVideoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getState() const
{
    return state_;
}

void ListDigitalHumanVideoRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListDigitalHumanVideoRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getSortKey() const
{
    return sortKey_;
}

void ListDigitalHumanVideoRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListDigitalHumanVideoRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getSortDir() const
{
    return sortDir_;
}

void ListDigitalHumanVideoRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListDigitalHumanVideoRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListDigitalHumanVideoRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListDigitalHumanVideoRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getCreateSince() const
{
    return createSince_;
}

void ListDigitalHumanVideoRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListDigitalHumanVideoRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::vector<std::string>& ListDigitalHumanVideoRequest::getFuzzyQueryField()
{
    return fuzzyQueryField_;
}

void ListDigitalHumanVideoRequest::setFuzzyQueryField(const std::vector<std::string>& value)
{
    fuzzyQueryField_ = value;
    fuzzyQueryFieldIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::fuzzyQueryFieldIsSet() const
{
    return fuzzyQueryFieldIsSet_;
}

void ListDigitalHumanVideoRequest::unsetfuzzyQueryField()
{
    fuzzyQueryFieldIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getScriptId() const
{
    return scriptId_;
}

void ListDigitalHumanVideoRequest::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void ListDigitalHumanVideoRequest::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getAssetName() const
{
    return assetName_;
}

void ListDigitalHumanVideoRequest::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ListDigitalHumanVideoRequest::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getJobType() const
{
    return jobType_;
}

void ListDigitalHumanVideoRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ListDigitalHumanVideoRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ListDigitalHumanVideoRequest::getJobId() const
{
    return jobId_;
}

void ListDigitalHumanVideoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListDigitalHumanVideoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListDigitalHumanVideoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


