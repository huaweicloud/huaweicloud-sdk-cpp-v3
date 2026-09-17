

#include "huaweicloud/cloudtest/v1/model/TestCasesListQueryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCasesListQueryInfo::TestCasesListQueryInfo()
{
    versionUri_ = "";
    versionUriIsSet_ = false;
    caseUrisIsSet_ = false;
    ownerIdsIsSet_ = false;
    statusCodesIsSet_ = false;
    rankIdsIsSet_ = false;
    moduleIdsIsSet_ = false;
    keyword_ = "";
    keywordIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    stageType_ = 0;
    stageTypeIsSet_ = false;
    featureUri_ = "";
    featureUriIsSet_ = false;
}

TestCasesListQueryInfo::~TestCasesListQueryInfo() = default;

void TestCasesListQueryInfo::validate()
{
}

web::json::value TestCasesListQueryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(caseUrisIsSet_) {
        val[utility::conversions::to_string_t("case_uris")] = ModelBase::toJson(caseUris_);
    }
    if(ownerIdsIsSet_) {
        val[utility::conversions::to_string_t("owner_ids")] = ModelBase::toJson(ownerIds_);
    }
    if(statusCodesIsSet_) {
        val[utility::conversions::to_string_t("status_codes")] = ModelBase::toJson(statusCodes_);
    }
    if(rankIdsIsSet_) {
        val[utility::conversions::to_string_t("rank_ids")] = ModelBase::toJson(rankIds_);
    }
    if(moduleIdsIsSet_) {
        val[utility::conversions::to_string_t("module_ids")] = ModelBase::toJson(moduleIds_);
    }
    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(stageTypeIsSet_) {
        val[utility::conversions::to_string_t("stage_type")] = ModelBase::toJson(stageType_);
    }
    if(featureUriIsSet_) {
        val[utility::conversions::to_string_t("feature_uri")] = ModelBase::toJson(featureUri_);
    }

    return val;
}
bool TestCasesListQueryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureUri(refVal);
        }
    }
    return ok;
}


std::string TestCasesListQueryInfo::getVersionUri() const
{
    return versionUri_;
}

void TestCasesListQueryInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestCasesListQueryInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestCasesListQueryInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::vector<std::string>& TestCasesListQueryInfo::getCaseUris()
{
    return caseUris_;
}

void TestCasesListQueryInfo::setCaseUris(const std::vector<std::string>& value)
{
    caseUris_ = value;
    caseUrisIsSet_ = true;
}

bool TestCasesListQueryInfo::caseUrisIsSet() const
{
    return caseUrisIsSet_;
}

void TestCasesListQueryInfo::unsetcaseUris()
{
    caseUrisIsSet_ = false;
}

std::vector<std::string>& TestCasesListQueryInfo::getOwnerIds()
{
    return ownerIds_;
}

void TestCasesListQueryInfo::setOwnerIds(const std::vector<std::string>& value)
{
    ownerIds_ = value;
    ownerIdsIsSet_ = true;
}

bool TestCasesListQueryInfo::ownerIdsIsSet() const
{
    return ownerIdsIsSet_;
}

void TestCasesListQueryInfo::unsetownerIds()
{
    ownerIdsIsSet_ = false;
}

std::vector<std::string>& TestCasesListQueryInfo::getStatusCodes()
{
    return statusCodes_;
}

void TestCasesListQueryInfo::setStatusCodes(const std::vector<std::string>& value)
{
    statusCodes_ = value;
    statusCodesIsSet_ = true;
}

bool TestCasesListQueryInfo::statusCodesIsSet() const
{
    return statusCodesIsSet_;
}

void TestCasesListQueryInfo::unsetstatusCodes()
{
    statusCodesIsSet_ = false;
}

std::vector<std::string>& TestCasesListQueryInfo::getRankIds()
{
    return rankIds_;
}

void TestCasesListQueryInfo::setRankIds(const std::vector<std::string>& value)
{
    rankIds_ = value;
    rankIdsIsSet_ = true;
}

bool TestCasesListQueryInfo::rankIdsIsSet() const
{
    return rankIdsIsSet_;
}

void TestCasesListQueryInfo::unsetrankIds()
{
    rankIdsIsSet_ = false;
}

std::vector<std::string>& TestCasesListQueryInfo::getModuleIds()
{
    return moduleIds_;
}

void TestCasesListQueryInfo::setModuleIds(const std::vector<std::string>& value)
{
    moduleIds_ = value;
    moduleIdsIsSet_ = true;
}

bool TestCasesListQueryInfo::moduleIdsIsSet() const
{
    return moduleIdsIsSet_;
}

void TestCasesListQueryInfo::unsetmoduleIds()
{
    moduleIdsIsSet_ = false;
}

std::string TestCasesListQueryInfo::getKeyword() const
{
    return keyword_;
}

void TestCasesListQueryInfo::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool TestCasesListQueryInfo::keywordIsSet() const
{
    return keywordIsSet_;
}

void TestCasesListQueryInfo::unsetkeyword()
{
    keywordIsSet_ = false;
}

std::string TestCasesListQueryInfo::getName() const
{
    return name_;
}

void TestCasesListQueryInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestCasesListQueryInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TestCasesListQueryInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TestCasesListQueryInfo::getNumber() const
{
    return number_;
}

void TestCasesListQueryInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TestCasesListQueryInfo::numberIsSet() const
{
    return numberIsSet_;
}

void TestCasesListQueryInfo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string TestCasesListQueryInfo::getSortField() const
{
    return sortField_;
}

void TestCasesListQueryInfo::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool TestCasesListQueryInfo::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void TestCasesListQueryInfo::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string TestCasesListQueryInfo::getSortType() const
{
    return sortType_;
}

void TestCasesListQueryInfo::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool TestCasesListQueryInfo::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void TestCasesListQueryInfo::unsetsortType()
{
    sortTypeIsSet_ = false;
}

int32_t TestCasesListQueryInfo::getPageNo() const
{
    return pageNo_;
}

void TestCasesListQueryInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool TestCasesListQueryInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void TestCasesListQueryInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t TestCasesListQueryInfo::getPageSize() const
{
    return pageSize_;
}

void TestCasesListQueryInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool TestCasesListQueryInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void TestCasesListQueryInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t TestCasesListQueryInfo::getServiceType() const
{
    return serviceType_;
}

void TestCasesListQueryInfo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TestCasesListQueryInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TestCasesListQueryInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

int32_t TestCasesListQueryInfo::getStageType() const
{
    return stageType_;
}

void TestCasesListQueryInfo::setStageType(int32_t value)
{
    stageType_ = value;
    stageTypeIsSet_ = true;
}

bool TestCasesListQueryInfo::stageTypeIsSet() const
{
    return stageTypeIsSet_;
}

void TestCasesListQueryInfo::unsetstageType()
{
    stageTypeIsSet_ = false;
}

std::string TestCasesListQueryInfo::getFeatureUri() const
{
    return featureUri_;
}

void TestCasesListQueryInfo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool TestCasesListQueryInfo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void TestCasesListQueryInfo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

}
}
}
}
}


