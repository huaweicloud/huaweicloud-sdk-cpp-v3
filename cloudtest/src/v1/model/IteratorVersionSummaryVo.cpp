

#include "huaweicloud/cloudtest/v1/model/IteratorVersionSummaryVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IteratorVersionSummaryVo::IteratorVersionSummaryVo()
{
    uri_ = "";
    uriIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    iterations_ = "";
    iterationsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    lastModifier_ = "";
    lastModifierIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    lastModifiedTimestamp_ = 0L;
    lastModifiedTimestampIsSet_ = false;
    lastChangeTime_ = utility::datetime();
    lastChangeTimeIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    originUri_ = "";
    originUriIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    parentPath_ = "";
    parentPathIsSet_ = false;
    creationVersionUri_ = "";
    creationVersionUriIsSet_ = false;
    creationDate_ = utility::datetime();
    creationDateIsSet_ = false;
    creationDateTimestamp_ = 0L;
    creationDateTimestampIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    isMaster_ = 0;
    isMasterIsSet_ = false;
    isIterator_ = 0;
    isIteratorIsSet_ = false;
    planStartDate_ = utility::datetime();
    planStartDateIsSet_ = false;
    planEndDate_ = utility::datetime();
    planEndDateIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    pbiId_ = "";
    pbiIdIsSet_ = false;
    pbiName_ = "";
    pbiNameIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    metricPbiIds_ = "";
    metricPbiIdsIsSet_ = false;
    metricPbiIdNames_ = "";
    metricPbiIdNamesIsSet_ = false;
    lastSynDate_ = utility::datetime();
    lastSynDateIsSet_ = false;
    isClosed_ = "";
    isClosedIsSet_ = false;
    asynGit_ = "";
    asynGitIsSet_ = false;
    schemaNo_ = 0;
    schemaNoIsSet_ = false;
    finishDate_ = utility::datetime();
    finishDateIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    currentStage_ = "";
    currentStageIsSet_ = false;
    serviceTypes_ = "";
    serviceTypesIsSet_ = false;
    riskRating_ = 0;
    riskRatingIsSet_ = false;
    riskDes_ = "";
    riskDesIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    piId_ = "";
    piIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    startDateTimestamp_ = 0L;
    startDateTimestampIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    endDateTimestamp_ = 0L;
    endDateTimestampIsSet_ = false;
    actualStartDate_ = "";
    actualStartDateIsSet_ = false;
    actualStartDateTimestamp_ = 0L;
    actualStartDateTimestampIsSet_ = false;
    actualEndDate_ = "";
    actualEndDateIsSet_ = false;
    actualEndDateTimestamp_ = 0L;
    actualEndDateTimestampIsSet_ = false;
    isExpired_ = "";
    isExpiredIsSet_ = false;
    expiredInfo_ = "";
    expiredInfoIsSet_ = false;
    stagesIsSet_ = false;
    designIsSet_ = false;
    executeIsSet_ = false;
    reportIsSet_ = false;
    branchUri_ = "";
    branchUriIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
}

IteratorVersionSummaryVo::~IteratorVersionSummaryVo() = default;

void IteratorVersionSummaryVo::validate()
{
}

web::json::value IteratorVersionSummaryVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(rankIsSet_) {
        val[utility::conversions::to_string_t("rank")] = ModelBase::toJson(rank_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(iterationsIsSet_) {
        val[utility::conversions::to_string_t("iterations")] = ModelBase::toJson(iterations_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(lastModifierIsSet_) {
        val[utility::conversions::to_string_t("last_modifier")] = ModelBase::toJson(lastModifier_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(lastModifiedTimestampIsSet_) {
        val[utility::conversions::to_string_t("last_modified_timestamp")] = ModelBase::toJson(lastModifiedTimestamp_);
    }
    if(lastChangeTimeIsSet_) {
        val[utility::conversions::to_string_t("last_change_time")] = ModelBase::toJson(lastChangeTime_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(originUriIsSet_) {
        val[utility::conversions::to_string_t("origin_uri")] = ModelBase::toJson(originUri_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(parentPathIsSet_) {
        val[utility::conversions::to_string_t("parent_path")] = ModelBase::toJson(parentPath_);
    }
    if(creationVersionUriIsSet_) {
        val[utility::conversions::to_string_t("creation_version_uri")] = ModelBase::toJson(creationVersionUri_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(creationDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("creation_date_timestamp")] = ModelBase::toJson(creationDateTimestamp_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(isMasterIsSet_) {
        val[utility::conversions::to_string_t("is_master")] = ModelBase::toJson(isMaster_);
    }
    if(isIteratorIsSet_) {
        val[utility::conversions::to_string_t("is_iterator")] = ModelBase::toJson(isIterator_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(pbiIdIsSet_) {
        val[utility::conversions::to_string_t("pbi_id")] = ModelBase::toJson(pbiId_);
    }
    if(pbiNameIsSet_) {
        val[utility::conversions::to_string_t("pbi_name")] = ModelBase::toJson(pbiName_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(metricPbiIdsIsSet_) {
        val[utility::conversions::to_string_t("metric_pbi_ids")] = ModelBase::toJson(metricPbiIds_);
    }
    if(metricPbiIdNamesIsSet_) {
        val[utility::conversions::to_string_t("metric_pbi_id_names")] = ModelBase::toJson(metricPbiIdNames_);
    }
    if(lastSynDateIsSet_) {
        val[utility::conversions::to_string_t("last_syn_date")] = ModelBase::toJson(lastSynDate_);
    }
    if(isClosedIsSet_) {
        val[utility::conversions::to_string_t("is_closed")] = ModelBase::toJson(isClosed_);
    }
    if(asynGitIsSet_) {
        val[utility::conversions::to_string_t("asyn_git")] = ModelBase::toJson(asynGit_);
    }
    if(schemaNoIsSet_) {
        val[utility::conversions::to_string_t("schema_no")] = ModelBase::toJson(schemaNo_);
    }
    if(finishDateIsSet_) {
        val[utility::conversions::to_string_t("finish_date")] = ModelBase::toJson(finishDate_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(currentStageIsSet_) {
        val[utility::conversions::to_string_t("current_stage")] = ModelBase::toJson(currentStage_);
    }
    if(serviceTypesIsSet_) {
        val[utility::conversions::to_string_t("service_types")] = ModelBase::toJson(serviceTypes_);
    }
    if(riskRatingIsSet_) {
        val[utility::conversions::to_string_t("risk_rating")] = ModelBase::toJson(riskRating_);
    }
    if(riskDesIsSet_) {
        val[utility::conversions::to_string_t("risk_des")] = ModelBase::toJson(riskDes_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(piIdIsSet_) {
        val[utility::conversions::to_string_t("pi_id")] = ModelBase::toJson(piId_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(startDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("start_date_timestamp")] = ModelBase::toJson(startDateTimestamp_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(endDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("end_date_timestamp")] = ModelBase::toJson(endDateTimestamp_);
    }
    if(actualStartDateIsSet_) {
        val[utility::conversions::to_string_t("actual_start_date")] = ModelBase::toJson(actualStartDate_);
    }
    if(actualStartDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("actual_start_date_timestamp")] = ModelBase::toJson(actualStartDateTimestamp_);
    }
    if(actualEndDateIsSet_) {
        val[utility::conversions::to_string_t("actual_end_date")] = ModelBase::toJson(actualEndDate_);
    }
    if(actualEndDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("actual_end_date_timestamp")] = ModelBase::toJson(actualEndDateTimestamp_);
    }
    if(isExpiredIsSet_) {
        val[utility::conversions::to_string_t("is_expired")] = ModelBase::toJson(isExpired_);
    }
    if(expiredInfoIsSet_) {
        val[utility::conversions::to_string_t("expired_info")] = ModelBase::toJson(expiredInfo_);
    }
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }
    if(designIsSet_) {
        val[utility::conversions::to_string_t("design")] = ModelBase::toJson(design_);
    }
    if(executeIsSet_) {
        val[utility::conversions::to_string_t("execute")] = ModelBase::toJson(execute_);
    }
    if(reportIsSet_) {
        val[utility::conversions::to_string_t("report")] = ModelBase::toJson(report_);
    }
    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }

    return val;
}
bool IteratorVersionSummaryVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterations"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_change_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_change_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastChangeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_master"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_master"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMaster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_iterator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_iterator"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIterator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pbi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pbi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPbiId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pbi_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pbi_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPbiName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_pbi_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_pbi_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricPbiIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_pbi_id_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_pbi_id_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricPbiIdNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_syn_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_syn_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastSynDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_closed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_closed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsClosed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asyn_git"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asyn_git"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsynGit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_rating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_rating"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskRating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_des"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_des"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskDes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_start_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_start_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualStartDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_end_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_end_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualEndDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_expired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_expired"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExpired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("design"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("design"));
        if(!fieldValue.is_null())
        {
            DesignSummaryVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesign(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute"));
        if(!fieldValue.is_null())
        {
            ExecuteSummaryVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report"));
        if(!fieldValue.is_null())
        {
            ReportSummaryVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReport(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    return ok;
}


std::string IteratorVersionSummaryVo::getUri() const
{
    return uri_;
}

void IteratorVersionSummaryVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool IteratorVersionSummaryVo::uriIsSet() const
{
    return uriIsSet_;
}

void IteratorVersionSummaryVo::unseturi()
{
    uriIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getType() const
{
    return type_;
}

void IteratorVersionSummaryVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IteratorVersionSummaryVo::typeIsSet() const
{
    return typeIsSet_;
}

void IteratorVersionSummaryVo::unsettype()
{
    typeIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getAuthor() const
{
    return author_;
}

void IteratorVersionSummaryVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool IteratorVersionSummaryVo::authorIsSet() const
{
    return authorIsSet_;
}

void IteratorVersionSummaryVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getName() const
{
    return name_;
}

void IteratorVersionSummaryVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IteratorVersionSummaryVo::nameIsSet() const
{
    return nameIsSet_;
}

void IteratorVersionSummaryVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t IteratorVersionSummaryVo::getRank() const
{
    return rank_;
}

void IteratorVersionSummaryVo::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool IteratorVersionSummaryVo::rankIsSet() const
{
    return rankIsSet_;
}

void IteratorVersionSummaryVo::unsetrank()
{
    rankIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getVersion() const
{
    return version_;
}

void IteratorVersionSummaryVo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool IteratorVersionSummaryVo::versionIsSet() const
{
    return versionIsSet_;
}

void IteratorVersionSummaryVo::unsetversion()
{
    versionIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getOwner() const
{
    return owner_;
}

void IteratorVersionSummaryVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool IteratorVersionSummaryVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void IteratorVersionSummaryVo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getCreator() const
{
    return creator_;
}

void IteratorVersionSummaryVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool IteratorVersionSummaryVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void IteratorVersionSummaryVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getIterations() const
{
    return iterations_;
}

void IteratorVersionSummaryVo::setIterations(const std::string& value)
{
    iterations_ = value;
    iterationsIsSet_ = true;
}

bool IteratorVersionSummaryVo::iterationsIsSet() const
{
    return iterationsIsSet_;
}

void IteratorVersionSummaryVo::unsetiterations()
{
    iterationsIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getDescription() const
{
    return description_;
}

void IteratorVersionSummaryVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IteratorVersionSummaryVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IteratorVersionSummaryVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getRegion() const
{
    return region_;
}

void IteratorVersionSummaryVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool IteratorVersionSummaryVo::regionIsSet() const
{
    return regionIsSet_;
}

void IteratorVersionSummaryVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getLastModifier() const
{
    return lastModifier_;
}

void IteratorVersionSummaryVo::setLastModifier(const std::string& value)
{
    lastModifier_ = value;
    lastModifierIsSet_ = true;
}

bool IteratorVersionSummaryVo::lastModifierIsSet() const
{
    return lastModifierIsSet_;
}

void IteratorVersionSummaryVo::unsetlastModifier()
{
    lastModifierIsSet_ = false;
}

utility::datetime IteratorVersionSummaryVo::getLastModified() const
{
    return lastModified_;
}

void IteratorVersionSummaryVo::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool IteratorVersionSummaryVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void IteratorVersionSummaryVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t IteratorVersionSummaryVo::getLastModifiedTimestamp() const
{
    return lastModifiedTimestamp_;
}

void IteratorVersionSummaryVo::setLastModifiedTimestamp(int64_t value)
{
    lastModifiedTimestamp_ = value;
    lastModifiedTimestampIsSet_ = true;
}

bool IteratorVersionSummaryVo::lastModifiedTimestampIsSet() const
{
    return lastModifiedTimestampIsSet_;
}

void IteratorVersionSummaryVo::unsetlastModifiedTimestamp()
{
    lastModifiedTimestampIsSet_ = false;
}

utility::datetime IteratorVersionSummaryVo::getLastChangeTime() const
{
    return lastChangeTime_;
}

void IteratorVersionSummaryVo::setLastChangeTime(const utility::datetime& value)
{
    lastChangeTime_ = value;
    lastChangeTimeIsSet_ = true;
}

bool IteratorVersionSummaryVo::lastChangeTimeIsSet() const
{
    return lastChangeTimeIsSet_;
}

void IteratorVersionSummaryVo::unsetlastChangeTime()
{
    lastChangeTimeIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getVersionUri() const
{
    return versionUri_;
}

void IteratorVersionSummaryVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool IteratorVersionSummaryVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void IteratorVersionSummaryVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getOriginUri() const
{
    return originUri_;
}

void IteratorVersionSummaryVo::setOriginUri(const std::string& value)
{
    originUri_ = value;
    originUriIsSet_ = true;
}

bool IteratorVersionSummaryVo::originUriIsSet() const
{
    return originUriIsSet_;
}

void IteratorVersionSummaryVo::unsetoriginUri()
{
    originUriIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getParentUri() const
{
    return parentUri_;
}

void IteratorVersionSummaryVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool IteratorVersionSummaryVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void IteratorVersionSummaryVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getParentPath() const
{
    return parentPath_;
}

void IteratorVersionSummaryVo::setParentPath(const std::string& value)
{
    parentPath_ = value;
    parentPathIsSet_ = true;
}

bool IteratorVersionSummaryVo::parentPathIsSet() const
{
    return parentPathIsSet_;
}

void IteratorVersionSummaryVo::unsetparentPath()
{
    parentPathIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getCreationVersionUri() const
{
    return creationVersionUri_;
}

void IteratorVersionSummaryVo::setCreationVersionUri(const std::string& value)
{
    creationVersionUri_ = value;
    creationVersionUriIsSet_ = true;
}

bool IteratorVersionSummaryVo::creationVersionUriIsSet() const
{
    return creationVersionUriIsSet_;
}

void IteratorVersionSummaryVo::unsetcreationVersionUri()
{
    creationVersionUriIsSet_ = false;
}

utility::datetime IteratorVersionSummaryVo::getCreationDate() const
{
    return creationDate_;
}

void IteratorVersionSummaryVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void IteratorVersionSummaryVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t IteratorVersionSummaryVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void IteratorVersionSummaryVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool IteratorVersionSummaryVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void IteratorVersionSummaryVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getAuthorName() const
{
    return authorName_;
}

void IteratorVersionSummaryVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool IteratorVersionSummaryVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void IteratorVersionSummaryVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getComment() const
{
    return comment_;
}

void IteratorVersionSummaryVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool IteratorVersionSummaryVo::commentIsSet() const
{
    return commentIsSet_;
}

void IteratorVersionSummaryVo::unsetcomment()
{
    commentIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getNumber() const
{
    return number_;
}

void IteratorVersionSummaryVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IteratorVersionSummaryVo::numberIsSet() const
{
    return numberIsSet_;
}

void IteratorVersionSummaryVo::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t IteratorVersionSummaryVo::getIsMaster() const
{
    return isMaster_;
}

void IteratorVersionSummaryVo::setIsMaster(int32_t value)
{
    isMaster_ = value;
    isMasterIsSet_ = true;
}

bool IteratorVersionSummaryVo::isMasterIsSet() const
{
    return isMasterIsSet_;
}

void IteratorVersionSummaryVo::unsetisMaster()
{
    isMasterIsSet_ = false;
}

int32_t IteratorVersionSummaryVo::getIsIterator() const
{
    return isIterator_;
}

void IteratorVersionSummaryVo::setIsIterator(int32_t value)
{
    isIterator_ = value;
    isIteratorIsSet_ = true;
}

bool IteratorVersionSummaryVo::isIteratorIsSet() const
{
    return isIteratorIsSet_;
}

void IteratorVersionSummaryVo::unsetisIterator()
{
    isIteratorIsSet_ = false;
}

utility::datetime IteratorVersionSummaryVo::getPlanStartDate() const
{
    return planStartDate_;
}

void IteratorVersionSummaryVo::setPlanStartDate(const utility::datetime& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void IteratorVersionSummaryVo::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

utility::datetime IteratorVersionSummaryVo::getPlanEndDate() const
{
    return planEndDate_;
}

void IteratorVersionSummaryVo::setPlanEndDate(const utility::datetime& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void IteratorVersionSummaryVo::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getServiceId() const
{
    return serviceId_;
}

void IteratorVersionSummaryVo::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool IteratorVersionSummaryVo::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void IteratorVersionSummaryVo::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getServiceName() const
{
    return serviceName_;
}

void IteratorVersionSummaryVo::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool IteratorVersionSummaryVo::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void IteratorVersionSummaryVo::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getPbiId() const
{
    return pbiId_;
}

void IteratorVersionSummaryVo::setPbiId(const std::string& value)
{
    pbiId_ = value;
    pbiIdIsSet_ = true;
}

bool IteratorVersionSummaryVo::pbiIdIsSet() const
{
    return pbiIdIsSet_;
}

void IteratorVersionSummaryVo::unsetpbiId()
{
    pbiIdIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getPbiName() const
{
    return pbiName_;
}

void IteratorVersionSummaryVo::setPbiName(const std::string& value)
{
    pbiName_ = value;
    pbiNameIsSet_ = true;
}

bool IteratorVersionSummaryVo::pbiNameIsSet() const
{
    return pbiNameIsSet_;
}

void IteratorVersionSummaryVo::unsetpbiName()
{
    pbiNameIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getPlanId() const
{
    return planId_;
}

void IteratorVersionSummaryVo::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool IteratorVersionSummaryVo::planIdIsSet() const
{
    return planIdIsSet_;
}

void IteratorVersionSummaryVo::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getMetricPbiIds() const
{
    return metricPbiIds_;
}

void IteratorVersionSummaryVo::setMetricPbiIds(const std::string& value)
{
    metricPbiIds_ = value;
    metricPbiIdsIsSet_ = true;
}

bool IteratorVersionSummaryVo::metricPbiIdsIsSet() const
{
    return metricPbiIdsIsSet_;
}

void IteratorVersionSummaryVo::unsetmetricPbiIds()
{
    metricPbiIdsIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getMetricPbiIdNames() const
{
    return metricPbiIdNames_;
}

void IteratorVersionSummaryVo::setMetricPbiIdNames(const std::string& value)
{
    metricPbiIdNames_ = value;
    metricPbiIdNamesIsSet_ = true;
}

bool IteratorVersionSummaryVo::metricPbiIdNamesIsSet() const
{
    return metricPbiIdNamesIsSet_;
}

void IteratorVersionSummaryVo::unsetmetricPbiIdNames()
{
    metricPbiIdNamesIsSet_ = false;
}

utility::datetime IteratorVersionSummaryVo::getLastSynDate() const
{
    return lastSynDate_;
}

void IteratorVersionSummaryVo::setLastSynDate(const utility::datetime& value)
{
    lastSynDate_ = value;
    lastSynDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::lastSynDateIsSet() const
{
    return lastSynDateIsSet_;
}

void IteratorVersionSummaryVo::unsetlastSynDate()
{
    lastSynDateIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getIsClosed() const
{
    return isClosed_;
}

void IteratorVersionSummaryVo::setIsClosed(const std::string& value)
{
    isClosed_ = value;
    isClosedIsSet_ = true;
}

bool IteratorVersionSummaryVo::isClosedIsSet() const
{
    return isClosedIsSet_;
}

void IteratorVersionSummaryVo::unsetisClosed()
{
    isClosedIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getAsynGit() const
{
    return asynGit_;
}

void IteratorVersionSummaryVo::setAsynGit(const std::string& value)
{
    asynGit_ = value;
    asynGitIsSet_ = true;
}

bool IteratorVersionSummaryVo::asynGitIsSet() const
{
    return asynGitIsSet_;
}

void IteratorVersionSummaryVo::unsetasynGit()
{
    asynGitIsSet_ = false;
}

int32_t IteratorVersionSummaryVo::getSchemaNo() const
{
    return schemaNo_;
}

void IteratorVersionSummaryVo::setSchemaNo(int32_t value)
{
    schemaNo_ = value;
    schemaNoIsSet_ = true;
}

bool IteratorVersionSummaryVo::schemaNoIsSet() const
{
    return schemaNoIsSet_;
}

void IteratorVersionSummaryVo::unsetschemaNo()
{
    schemaNoIsSet_ = false;
}

utility::datetime IteratorVersionSummaryVo::getFinishDate() const
{
    return finishDate_;
}

void IteratorVersionSummaryVo::setFinishDate(const utility::datetime& value)
{
    finishDate_ = value;
    finishDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::finishDateIsSet() const
{
    return finishDateIsSet_;
}

void IteratorVersionSummaryVo::unsetfinishDate()
{
    finishDateIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getOwnerName() const
{
    return ownerName_;
}

void IteratorVersionSummaryVo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool IteratorVersionSummaryVo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void IteratorVersionSummaryVo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getCreatorName() const
{
    return creatorName_;
}

void IteratorVersionSummaryVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool IteratorVersionSummaryVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void IteratorVersionSummaryVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getCurrentStage() const
{
    return currentStage_;
}

void IteratorVersionSummaryVo::setCurrentStage(const std::string& value)
{
    currentStage_ = value;
    currentStageIsSet_ = true;
}

bool IteratorVersionSummaryVo::currentStageIsSet() const
{
    return currentStageIsSet_;
}

void IteratorVersionSummaryVo::unsetcurrentStage()
{
    currentStageIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getServiceTypes() const
{
    return serviceTypes_;
}

void IteratorVersionSummaryVo::setServiceTypes(const std::string& value)
{
    serviceTypes_ = value;
    serviceTypesIsSet_ = true;
}

bool IteratorVersionSummaryVo::serviceTypesIsSet() const
{
    return serviceTypesIsSet_;
}

void IteratorVersionSummaryVo::unsetserviceTypes()
{
    serviceTypesIsSet_ = false;
}

int32_t IteratorVersionSummaryVo::getRiskRating() const
{
    return riskRating_;
}

void IteratorVersionSummaryVo::setRiskRating(int32_t value)
{
    riskRating_ = value;
    riskRatingIsSet_ = true;
}

bool IteratorVersionSummaryVo::riskRatingIsSet() const
{
    return riskRatingIsSet_;
}

void IteratorVersionSummaryVo::unsetriskRating()
{
    riskRatingIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getRiskDes() const
{
    return riskDes_;
}

void IteratorVersionSummaryVo::setRiskDes(const std::string& value)
{
    riskDes_ = value;
    riskDesIsSet_ = true;
}

bool IteratorVersionSummaryVo::riskDesIsSet() const
{
    return riskDesIsSet_;
}

void IteratorVersionSummaryVo::unsetriskDes()
{
    riskDesIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getProjectUuid() const
{
    return projectUuid_;
}

void IteratorVersionSummaryVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool IteratorVersionSummaryVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void IteratorVersionSummaryVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getDomainId() const
{
    return domainId_;
}

void IteratorVersionSummaryVo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool IteratorVersionSummaryVo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void IteratorVersionSummaryVo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getPiId() const
{
    return piId_;
}

void IteratorVersionSummaryVo::setPiId(const std::string& value)
{
    piId_ = value;
    piIdIsSet_ = true;
}

bool IteratorVersionSummaryVo::piIdIsSet() const
{
    return piIdIsSet_;
}

void IteratorVersionSummaryVo::unsetpiId()
{
    piIdIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getStartDate() const
{
    return startDate_;
}

void IteratorVersionSummaryVo::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::startDateIsSet() const
{
    return startDateIsSet_;
}

void IteratorVersionSummaryVo::unsetstartDate()
{
    startDateIsSet_ = false;
}

int64_t IteratorVersionSummaryVo::getStartDateTimestamp() const
{
    return startDateTimestamp_;
}

void IteratorVersionSummaryVo::setStartDateTimestamp(int64_t value)
{
    startDateTimestamp_ = value;
    startDateTimestampIsSet_ = true;
}

bool IteratorVersionSummaryVo::startDateTimestampIsSet() const
{
    return startDateTimestampIsSet_;
}

void IteratorVersionSummaryVo::unsetstartDateTimestamp()
{
    startDateTimestampIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getEndDate() const
{
    return endDate_;
}

void IteratorVersionSummaryVo::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::endDateIsSet() const
{
    return endDateIsSet_;
}

void IteratorVersionSummaryVo::unsetendDate()
{
    endDateIsSet_ = false;
}

int64_t IteratorVersionSummaryVo::getEndDateTimestamp() const
{
    return endDateTimestamp_;
}

void IteratorVersionSummaryVo::setEndDateTimestamp(int64_t value)
{
    endDateTimestamp_ = value;
    endDateTimestampIsSet_ = true;
}

bool IteratorVersionSummaryVo::endDateTimestampIsSet() const
{
    return endDateTimestampIsSet_;
}

void IteratorVersionSummaryVo::unsetendDateTimestamp()
{
    endDateTimestampIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getActualStartDate() const
{
    return actualStartDate_;
}

void IteratorVersionSummaryVo::setActualStartDate(const std::string& value)
{
    actualStartDate_ = value;
    actualStartDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::actualStartDateIsSet() const
{
    return actualStartDateIsSet_;
}

void IteratorVersionSummaryVo::unsetactualStartDate()
{
    actualStartDateIsSet_ = false;
}

int64_t IteratorVersionSummaryVo::getActualStartDateTimestamp() const
{
    return actualStartDateTimestamp_;
}

void IteratorVersionSummaryVo::setActualStartDateTimestamp(int64_t value)
{
    actualStartDateTimestamp_ = value;
    actualStartDateTimestampIsSet_ = true;
}

bool IteratorVersionSummaryVo::actualStartDateTimestampIsSet() const
{
    return actualStartDateTimestampIsSet_;
}

void IteratorVersionSummaryVo::unsetactualStartDateTimestamp()
{
    actualStartDateTimestampIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getActualEndDate() const
{
    return actualEndDate_;
}

void IteratorVersionSummaryVo::setActualEndDate(const std::string& value)
{
    actualEndDate_ = value;
    actualEndDateIsSet_ = true;
}

bool IteratorVersionSummaryVo::actualEndDateIsSet() const
{
    return actualEndDateIsSet_;
}

void IteratorVersionSummaryVo::unsetactualEndDate()
{
    actualEndDateIsSet_ = false;
}

int64_t IteratorVersionSummaryVo::getActualEndDateTimestamp() const
{
    return actualEndDateTimestamp_;
}

void IteratorVersionSummaryVo::setActualEndDateTimestamp(int64_t value)
{
    actualEndDateTimestamp_ = value;
    actualEndDateTimestampIsSet_ = true;
}

bool IteratorVersionSummaryVo::actualEndDateTimestampIsSet() const
{
    return actualEndDateTimestampIsSet_;
}

void IteratorVersionSummaryVo::unsetactualEndDateTimestamp()
{
    actualEndDateTimestampIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getIsExpired() const
{
    return isExpired_;
}

void IteratorVersionSummaryVo::setIsExpired(const std::string& value)
{
    isExpired_ = value;
    isExpiredIsSet_ = true;
}

bool IteratorVersionSummaryVo::isExpiredIsSet() const
{
    return isExpiredIsSet_;
}

void IteratorVersionSummaryVo::unsetisExpired()
{
    isExpiredIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getExpiredInfo() const
{
    return expiredInfo_;
}

void IteratorVersionSummaryVo::setExpiredInfo(const std::string& value)
{
    expiredInfo_ = value;
    expiredInfoIsSet_ = true;
}

bool IteratorVersionSummaryVo::expiredInfoIsSet() const
{
    return expiredInfoIsSet_;
}

void IteratorVersionSummaryVo::unsetexpiredInfo()
{
    expiredInfoIsSet_ = false;
}

std::vector<std::string>& IteratorVersionSummaryVo::getStages()
{
    return stages_;
}

void IteratorVersionSummaryVo::setStages(const std::vector<std::string>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool IteratorVersionSummaryVo::stagesIsSet() const
{
    return stagesIsSet_;
}

void IteratorVersionSummaryVo::unsetstages()
{
    stagesIsSet_ = false;
}

DesignSummaryVo IteratorVersionSummaryVo::getDesign() const
{
    return design_;
}

void IteratorVersionSummaryVo::setDesign(const DesignSummaryVo& value)
{
    design_ = value;
    designIsSet_ = true;
}

bool IteratorVersionSummaryVo::designIsSet() const
{
    return designIsSet_;
}

void IteratorVersionSummaryVo::unsetdesign()
{
    designIsSet_ = false;
}

ExecuteSummaryVo IteratorVersionSummaryVo::getExecute() const
{
    return execute_;
}

void IteratorVersionSummaryVo::setExecute(const ExecuteSummaryVo& value)
{
    execute_ = value;
    executeIsSet_ = true;
}

bool IteratorVersionSummaryVo::executeIsSet() const
{
    return executeIsSet_;
}

void IteratorVersionSummaryVo::unsetexecute()
{
    executeIsSet_ = false;
}

ReportSummaryVo IteratorVersionSummaryVo::getReport() const
{
    return report_;
}

void IteratorVersionSummaryVo::setReport(const ReportSummaryVo& value)
{
    report_ = value;
    reportIsSet_ = true;
}

bool IteratorVersionSummaryVo::reportIsSet() const
{
    return reportIsSet_;
}

void IteratorVersionSummaryVo::unsetreport()
{
    reportIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getBranchUri() const
{
    return branchUri_;
}

void IteratorVersionSummaryVo::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool IteratorVersionSummaryVo::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void IteratorVersionSummaryVo::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

std::string IteratorVersionSummaryVo::getBranchName() const
{
    return branchName_;
}

void IteratorVersionSummaryVo::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool IteratorVersionSummaryVo::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void IteratorVersionSummaryVo::unsetbranchName()
{
    branchNameIsSet_ = false;
}

}
}
}
}
}


