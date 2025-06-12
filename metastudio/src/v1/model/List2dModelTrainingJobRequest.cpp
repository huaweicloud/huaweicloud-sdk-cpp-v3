

#include "huaweicloud/metastudio/v1/model/List2dModelTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




List2dModelTrainingJobRequest::List2dModelTrainingJobRequest()
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
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    createSince_ = "";
    createSinceIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    queryProjectId_ = "";
    queryProjectIdIsSet_ = false;
    batchName_ = "";
    batchNameIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    modelResolution_ = "";
    modelResolutionIsSet_ = false;
    isFlexus_ = false;
    isFlexusIsSet_ = false;
}

List2dModelTrainingJobRequest::~List2dModelTrainingJobRequest() = default;

void List2dModelTrainingJobRequest::validate()
{
}

web::json::value List2dModelTrainingJobRequest::toJson() const
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
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(queryProjectIdIsSet_) {
        val[utility::conversions::to_string_t("query_project_id")] = ModelBase::toJson(queryProjectId_);
    }
    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(modelResolutionIsSet_) {
        val[utility::conversions::to_string_t("model_resolution")] = ModelBase::toJson(modelResolution_);
    }
    if(isFlexusIsSet_) {
        val[utility::conversions::to_string_t("is_flexus")] = ModelBase::toJson(isFlexus_);
    }

    return val;
}
bool List2dModelTrainingJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("batch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_resolution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_flexus"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFlexus(refVal);
        }
    }
    return ok;
}


std::string List2dModelTrainingJobRequest::getAuthorization() const
{
    return authorization_;
}

void List2dModelTrainingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool List2dModelTrainingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void List2dModelTrainingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void List2dModelTrainingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool List2dModelTrainingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void List2dModelTrainingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void List2dModelTrainingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool List2dModelTrainingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void List2dModelTrainingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void List2dModelTrainingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool List2dModelTrainingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void List2dModelTrainingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t List2dModelTrainingJobRequest::getOffset() const
{
    return offset_;
}

void List2dModelTrainingJobRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool List2dModelTrainingJobRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void List2dModelTrainingJobRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t List2dModelTrainingJobRequest::getLimit() const
{
    return limit_;
}

void List2dModelTrainingJobRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool List2dModelTrainingJobRequest::limitIsSet() const
{
    return limitIsSet_;
}

void List2dModelTrainingJobRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getSortKey() const
{
    return sortKey_;
}

void List2dModelTrainingJobRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool List2dModelTrainingJobRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void List2dModelTrainingJobRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getSortDir() const
{
    return sortDir_;
}

void List2dModelTrainingJobRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool List2dModelTrainingJobRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void List2dModelTrainingJobRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getCreateUntil() const
{
    return createUntil_;
}

void List2dModelTrainingJobRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool List2dModelTrainingJobRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void List2dModelTrainingJobRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getCreateSince() const
{
    return createSince_;
}

void List2dModelTrainingJobRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool List2dModelTrainingJobRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void List2dModelTrainingJobRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getState() const
{
    return state_;
}

void List2dModelTrainingJobRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool List2dModelTrainingJobRequest::stateIsSet() const
{
    return stateIsSet_;
}

void List2dModelTrainingJobRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getQueryProjectId() const
{
    return queryProjectId_;
}

void List2dModelTrainingJobRequest::setQueryProjectId(const std::string& value)
{
    queryProjectId_ = value;
    queryProjectIdIsSet_ = true;
}

bool List2dModelTrainingJobRequest::queryProjectIdIsSet() const
{
    return queryProjectIdIsSet_;
}

void List2dModelTrainingJobRequest::unsetqueryProjectId()
{
    queryProjectIdIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getBatchName() const
{
    return batchName_;
}

void List2dModelTrainingJobRequest::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool List2dModelTrainingJobRequest::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void List2dModelTrainingJobRequest::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getTag() const
{
    return tag_;
}

void List2dModelTrainingJobRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool List2dModelTrainingJobRequest::tagIsSet() const
{
    return tagIsSet_;
}

void List2dModelTrainingJobRequest::unsettag()
{
    tagIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getJobId() const
{
    return jobId_;
}

void List2dModelTrainingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool List2dModelTrainingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void List2dModelTrainingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getName() const
{
    return name_;
}

void List2dModelTrainingJobRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool List2dModelTrainingJobRequest::nameIsSet() const
{
    return nameIsSet_;
}

void List2dModelTrainingJobRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string List2dModelTrainingJobRequest::getModelResolution() const
{
    return modelResolution_;
}

void List2dModelTrainingJobRequest::setModelResolution(const std::string& value)
{
    modelResolution_ = value;
    modelResolutionIsSet_ = true;
}

bool List2dModelTrainingJobRequest::modelResolutionIsSet() const
{
    return modelResolutionIsSet_;
}

void List2dModelTrainingJobRequest::unsetmodelResolution()
{
    modelResolutionIsSet_ = false;
}

bool List2dModelTrainingJobRequest::isIsFlexus() const
{
    return isFlexus_;
}

void List2dModelTrainingJobRequest::setIsFlexus(bool value)
{
    isFlexus_ = value;
    isFlexusIsSet_ = true;
}

bool List2dModelTrainingJobRequest::isFlexusIsSet() const
{
    return isFlexusIsSet_;
}

void List2dModelTrainingJobRequest::unsetisFlexus()
{
    isFlexusIsSet_ = false;
}

}
}
}
}
}


