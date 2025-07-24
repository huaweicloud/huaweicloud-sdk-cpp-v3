

#include "huaweicloud/cloudtest/v1/model/TestVersionVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestVersionVo::TestVersionVo()
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
}

TestVersionVo::~TestVersionVo() = default;

void TestVersionVo::validate()
{
}

web::json::value TestVersionVo::toJson() const
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

    return val;
}
bool TestVersionVo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TestVersionVo::getUri() const
{
    return uri_;
}

void TestVersionVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestVersionVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestVersionVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestVersionVo::getType() const
{
    return type_;
}

void TestVersionVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TestVersionVo::typeIsSet() const
{
    return typeIsSet_;
}

void TestVersionVo::unsettype()
{
    typeIsSet_ = false;
}

std::string TestVersionVo::getAuthor() const
{
    return author_;
}

void TestVersionVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool TestVersionVo::authorIsSet() const
{
    return authorIsSet_;
}

void TestVersionVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string TestVersionVo::getName() const
{
    return name_;
}

void TestVersionVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestVersionVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestVersionVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t TestVersionVo::getRank() const
{
    return rank_;
}

void TestVersionVo::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool TestVersionVo::rankIsSet() const
{
    return rankIsSet_;
}

void TestVersionVo::unsetrank()
{
    rankIsSet_ = false;
}

std::string TestVersionVo::getVersion() const
{
    return version_;
}

void TestVersionVo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool TestVersionVo::versionIsSet() const
{
    return versionIsSet_;
}

void TestVersionVo::unsetversion()
{
    versionIsSet_ = false;
}

std::string TestVersionVo::getOwner() const
{
    return owner_;
}

void TestVersionVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TestVersionVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TestVersionVo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TestVersionVo::getCreator() const
{
    return creator_;
}

void TestVersionVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool TestVersionVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void TestVersionVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string TestVersionVo::getIterations() const
{
    return iterations_;
}

void TestVersionVo::setIterations(const std::string& value)
{
    iterations_ = value;
    iterationsIsSet_ = true;
}

bool TestVersionVo::iterationsIsSet() const
{
    return iterationsIsSet_;
}

void TestVersionVo::unsetiterations()
{
    iterationsIsSet_ = false;
}

std::string TestVersionVo::getDescription() const
{
    return description_;
}

void TestVersionVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TestVersionVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TestVersionVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TestVersionVo::getRegion() const
{
    return region_;
}

void TestVersionVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TestVersionVo::regionIsSet() const
{
    return regionIsSet_;
}

void TestVersionVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string TestVersionVo::getLastModifier() const
{
    return lastModifier_;
}

void TestVersionVo::setLastModifier(const std::string& value)
{
    lastModifier_ = value;
    lastModifierIsSet_ = true;
}

bool TestVersionVo::lastModifierIsSet() const
{
    return lastModifierIsSet_;
}

void TestVersionVo::unsetlastModifier()
{
    lastModifierIsSet_ = false;
}

utility::datetime TestVersionVo::getLastModified() const
{
    return lastModified_;
}

void TestVersionVo::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool TestVersionVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void TestVersionVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t TestVersionVo::getLastModifiedTimestamp() const
{
    return lastModifiedTimestamp_;
}

void TestVersionVo::setLastModifiedTimestamp(int64_t value)
{
    lastModifiedTimestamp_ = value;
    lastModifiedTimestampIsSet_ = true;
}

bool TestVersionVo::lastModifiedTimestampIsSet() const
{
    return lastModifiedTimestampIsSet_;
}

void TestVersionVo::unsetlastModifiedTimestamp()
{
    lastModifiedTimestampIsSet_ = false;
}

utility::datetime TestVersionVo::getLastChangeTime() const
{
    return lastChangeTime_;
}

void TestVersionVo::setLastChangeTime(const utility::datetime& value)
{
    lastChangeTime_ = value;
    lastChangeTimeIsSet_ = true;
}

bool TestVersionVo::lastChangeTimeIsSet() const
{
    return lastChangeTimeIsSet_;
}

void TestVersionVo::unsetlastChangeTime()
{
    lastChangeTimeIsSet_ = false;
}

std::string TestVersionVo::getVersionUri() const
{
    return versionUri_;
}

void TestVersionVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestVersionVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestVersionVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TestVersionVo::getOriginUri() const
{
    return originUri_;
}

void TestVersionVo::setOriginUri(const std::string& value)
{
    originUri_ = value;
    originUriIsSet_ = true;
}

bool TestVersionVo::originUriIsSet() const
{
    return originUriIsSet_;
}

void TestVersionVo::unsetoriginUri()
{
    originUriIsSet_ = false;
}

std::string TestVersionVo::getParentUri() const
{
    return parentUri_;
}

void TestVersionVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool TestVersionVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void TestVersionVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string TestVersionVo::getParentPath() const
{
    return parentPath_;
}

void TestVersionVo::setParentPath(const std::string& value)
{
    parentPath_ = value;
    parentPathIsSet_ = true;
}

bool TestVersionVo::parentPathIsSet() const
{
    return parentPathIsSet_;
}

void TestVersionVo::unsetparentPath()
{
    parentPathIsSet_ = false;
}

std::string TestVersionVo::getCreationVersionUri() const
{
    return creationVersionUri_;
}

void TestVersionVo::setCreationVersionUri(const std::string& value)
{
    creationVersionUri_ = value;
    creationVersionUriIsSet_ = true;
}

bool TestVersionVo::creationVersionUriIsSet() const
{
    return creationVersionUriIsSet_;
}

void TestVersionVo::unsetcreationVersionUri()
{
    creationVersionUriIsSet_ = false;
}

utility::datetime TestVersionVo::getCreationDate() const
{
    return creationDate_;
}

void TestVersionVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool TestVersionVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void TestVersionVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t TestVersionVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void TestVersionVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool TestVersionVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void TestVersionVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

std::string TestVersionVo::getAuthorName() const
{
    return authorName_;
}

void TestVersionVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool TestVersionVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void TestVersionVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string TestVersionVo::getComment() const
{
    return comment_;
}

void TestVersionVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool TestVersionVo::commentIsSet() const
{
    return commentIsSet_;
}

void TestVersionVo::unsetcomment()
{
    commentIsSet_ = false;
}

std::string TestVersionVo::getNumber() const
{
    return number_;
}

void TestVersionVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TestVersionVo::numberIsSet() const
{
    return numberIsSet_;
}

void TestVersionVo::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t TestVersionVo::getIsMaster() const
{
    return isMaster_;
}

void TestVersionVo::setIsMaster(int32_t value)
{
    isMaster_ = value;
    isMasterIsSet_ = true;
}

bool TestVersionVo::isMasterIsSet() const
{
    return isMasterIsSet_;
}

void TestVersionVo::unsetisMaster()
{
    isMasterIsSet_ = false;
}

int32_t TestVersionVo::getIsIterator() const
{
    return isIterator_;
}

void TestVersionVo::setIsIterator(int32_t value)
{
    isIterator_ = value;
    isIteratorIsSet_ = true;
}

bool TestVersionVo::isIteratorIsSet() const
{
    return isIteratorIsSet_;
}

void TestVersionVo::unsetisIterator()
{
    isIteratorIsSet_ = false;
}

utility::datetime TestVersionVo::getPlanStartDate() const
{
    return planStartDate_;
}

void TestVersionVo::setPlanStartDate(const utility::datetime& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool TestVersionVo::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void TestVersionVo::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

utility::datetime TestVersionVo::getPlanEndDate() const
{
    return planEndDate_;
}

void TestVersionVo::setPlanEndDate(const utility::datetime& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool TestVersionVo::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void TestVersionVo::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string TestVersionVo::getServiceId() const
{
    return serviceId_;
}

void TestVersionVo::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool TestVersionVo::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void TestVersionVo::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string TestVersionVo::getServiceName() const
{
    return serviceName_;
}

void TestVersionVo::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool TestVersionVo::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void TestVersionVo::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string TestVersionVo::getPbiId() const
{
    return pbiId_;
}

void TestVersionVo::setPbiId(const std::string& value)
{
    pbiId_ = value;
    pbiIdIsSet_ = true;
}

bool TestVersionVo::pbiIdIsSet() const
{
    return pbiIdIsSet_;
}

void TestVersionVo::unsetpbiId()
{
    pbiIdIsSet_ = false;
}

std::string TestVersionVo::getPbiName() const
{
    return pbiName_;
}

void TestVersionVo::setPbiName(const std::string& value)
{
    pbiName_ = value;
    pbiNameIsSet_ = true;
}

bool TestVersionVo::pbiNameIsSet() const
{
    return pbiNameIsSet_;
}

void TestVersionVo::unsetpbiName()
{
    pbiNameIsSet_ = false;
}

std::string TestVersionVo::getPlanId() const
{
    return planId_;
}

void TestVersionVo::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TestVersionVo::planIdIsSet() const
{
    return planIdIsSet_;
}

void TestVersionVo::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string TestVersionVo::getMetricPbiIds() const
{
    return metricPbiIds_;
}

void TestVersionVo::setMetricPbiIds(const std::string& value)
{
    metricPbiIds_ = value;
    metricPbiIdsIsSet_ = true;
}

bool TestVersionVo::metricPbiIdsIsSet() const
{
    return metricPbiIdsIsSet_;
}

void TestVersionVo::unsetmetricPbiIds()
{
    metricPbiIdsIsSet_ = false;
}

std::string TestVersionVo::getMetricPbiIdNames() const
{
    return metricPbiIdNames_;
}

void TestVersionVo::setMetricPbiIdNames(const std::string& value)
{
    metricPbiIdNames_ = value;
    metricPbiIdNamesIsSet_ = true;
}

bool TestVersionVo::metricPbiIdNamesIsSet() const
{
    return metricPbiIdNamesIsSet_;
}

void TestVersionVo::unsetmetricPbiIdNames()
{
    metricPbiIdNamesIsSet_ = false;
}

utility::datetime TestVersionVo::getLastSynDate() const
{
    return lastSynDate_;
}

void TestVersionVo::setLastSynDate(const utility::datetime& value)
{
    lastSynDate_ = value;
    lastSynDateIsSet_ = true;
}

bool TestVersionVo::lastSynDateIsSet() const
{
    return lastSynDateIsSet_;
}

void TestVersionVo::unsetlastSynDate()
{
    lastSynDateIsSet_ = false;
}

std::string TestVersionVo::getIsClosed() const
{
    return isClosed_;
}

void TestVersionVo::setIsClosed(const std::string& value)
{
    isClosed_ = value;
    isClosedIsSet_ = true;
}

bool TestVersionVo::isClosedIsSet() const
{
    return isClosedIsSet_;
}

void TestVersionVo::unsetisClosed()
{
    isClosedIsSet_ = false;
}

std::string TestVersionVo::getAsynGit() const
{
    return asynGit_;
}

void TestVersionVo::setAsynGit(const std::string& value)
{
    asynGit_ = value;
    asynGitIsSet_ = true;
}

bool TestVersionVo::asynGitIsSet() const
{
    return asynGitIsSet_;
}

void TestVersionVo::unsetasynGit()
{
    asynGitIsSet_ = false;
}

int32_t TestVersionVo::getSchemaNo() const
{
    return schemaNo_;
}

void TestVersionVo::setSchemaNo(int32_t value)
{
    schemaNo_ = value;
    schemaNoIsSet_ = true;
}

bool TestVersionVo::schemaNoIsSet() const
{
    return schemaNoIsSet_;
}

void TestVersionVo::unsetschemaNo()
{
    schemaNoIsSet_ = false;
}

utility::datetime TestVersionVo::getFinishDate() const
{
    return finishDate_;
}

void TestVersionVo::setFinishDate(const utility::datetime& value)
{
    finishDate_ = value;
    finishDateIsSet_ = true;
}

bool TestVersionVo::finishDateIsSet() const
{
    return finishDateIsSet_;
}

void TestVersionVo::unsetfinishDate()
{
    finishDateIsSet_ = false;
}

std::string TestVersionVo::getOwnerName() const
{
    return ownerName_;
}

void TestVersionVo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool TestVersionVo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void TestVersionVo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string TestVersionVo::getCreatorName() const
{
    return creatorName_;
}

void TestVersionVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TestVersionVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TestVersionVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TestVersionVo::getCurrentStage() const
{
    return currentStage_;
}

void TestVersionVo::setCurrentStage(const std::string& value)
{
    currentStage_ = value;
    currentStageIsSet_ = true;
}

bool TestVersionVo::currentStageIsSet() const
{
    return currentStageIsSet_;
}

void TestVersionVo::unsetcurrentStage()
{
    currentStageIsSet_ = false;
}

std::string TestVersionVo::getServiceTypes() const
{
    return serviceTypes_;
}

void TestVersionVo::setServiceTypes(const std::string& value)
{
    serviceTypes_ = value;
    serviceTypesIsSet_ = true;
}

bool TestVersionVo::serviceTypesIsSet() const
{
    return serviceTypesIsSet_;
}

void TestVersionVo::unsetserviceTypes()
{
    serviceTypesIsSet_ = false;
}

int32_t TestVersionVo::getRiskRating() const
{
    return riskRating_;
}

void TestVersionVo::setRiskRating(int32_t value)
{
    riskRating_ = value;
    riskRatingIsSet_ = true;
}

bool TestVersionVo::riskRatingIsSet() const
{
    return riskRatingIsSet_;
}

void TestVersionVo::unsetriskRating()
{
    riskRatingIsSet_ = false;
}

std::string TestVersionVo::getRiskDes() const
{
    return riskDes_;
}

void TestVersionVo::setRiskDes(const std::string& value)
{
    riskDes_ = value;
    riskDesIsSet_ = true;
}

bool TestVersionVo::riskDesIsSet() const
{
    return riskDesIsSet_;
}

void TestVersionVo::unsetriskDes()
{
    riskDesIsSet_ = false;
}

std::string TestVersionVo::getProjectUuid() const
{
    return projectUuid_;
}

void TestVersionVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TestVersionVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TestVersionVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string TestVersionVo::getDomainId() const
{
    return domainId_;
}

void TestVersionVo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool TestVersionVo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void TestVersionVo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string TestVersionVo::getPiId() const
{
    return piId_;
}

void TestVersionVo::setPiId(const std::string& value)
{
    piId_ = value;
    piIdIsSet_ = true;
}

bool TestVersionVo::piIdIsSet() const
{
    return piIdIsSet_;
}

void TestVersionVo::unsetpiId()
{
    piIdIsSet_ = false;
}

}
}
}
}
}


