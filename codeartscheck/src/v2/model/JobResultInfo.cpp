

#include "huaweicloud/codeartscheck/v2/model/JobResultInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




JobResultInfo::JobResultInfo()
{
    critical_ = 0;
    criticalIsSet_ = false;
    delaystatusCount_ = 0;
    delaystatusCountIsSet_ = false;
    fatal_ = 0;
    fatalIsSet_ = false;
    general_ = 0;
    generalIsSet_ = false;
    info_ = 0;
    infoIsSet_ = false;
    prompt_ = 0;
    promptIsSet_ = false;
    codeLine_ = 0;
    codeLineIsSet_ = false;
    defectCount_ = 0;
    defectCountIsSet_ = false;
    dismissed_ = 0;
    dismissedIsSet_ = false;
    fileTotal_ = 0;
    fileTotalIsSet_ = false;
    fixed_ = 0;
    fixedIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    newUnsolvedDefectCount_ = 0;
    newUnsolvedDefectCountIsSet_ = false;
    nonSecurityDefectCount_ = 0;
    nonSecurityDefectCountIsSet_ = false;
    reviewResult_ = "";
    reviewResultIsSet_ = false;
    securityDefectCount_ = 0;
    securityDefectCountIsSet_ = false;
    solvedDefectCount_ = 0;
    solvedDefectCountIsSet_ = false;
    unsolvedDefectCount_ = 0;
    unsolvedDefectCountIsSet_ = false;
}

JobResultInfo::~JobResultInfo() = default;

void JobResultInfo::validate()
{
}

web::json::value JobResultInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criticalIsSet_) {
        val[utility::conversions::to_string_t("CRITICAL")] = ModelBase::toJson(critical_);
    }
    if(delaystatusCountIsSet_) {
        val[utility::conversions::to_string_t("DELAYSTATUS_COUNT")] = ModelBase::toJson(delaystatusCount_);
    }
    if(fatalIsSet_) {
        val[utility::conversions::to_string_t("FATAL")] = ModelBase::toJson(fatal_);
    }
    if(generalIsSet_) {
        val[utility::conversions::to_string_t("GENERAL")] = ModelBase::toJson(general_);
    }
    if(infoIsSet_) {
        val[utility::conversions::to_string_t("INFO")] = ModelBase::toJson(info_);
    }
    if(promptIsSet_) {
        val[utility::conversions::to_string_t("PROMPT")] = ModelBase::toJson(prompt_);
    }
    if(codeLineIsSet_) {
        val[utility::conversions::to_string_t("codeLine")] = ModelBase::toJson(codeLine_);
    }
    if(defectCountIsSet_) {
        val[utility::conversions::to_string_t("defectCount")] = ModelBase::toJson(defectCount_);
    }
    if(dismissedIsSet_) {
        val[utility::conversions::to_string_t("dismissed")] = ModelBase::toJson(dismissed_);
    }
    if(fileTotalIsSet_) {
        val[utility::conversions::to_string_t("fileTotal")] = ModelBase::toJson(fileTotal_);
    }
    if(fixedIsSet_) {
        val[utility::conversions::to_string_t("fixed")] = ModelBase::toJson(fixed_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }
    if(newUnsolvedDefectCountIsSet_) {
        val[utility::conversions::to_string_t("newUnsolvedDefectCount")] = ModelBase::toJson(newUnsolvedDefectCount_);
    }
    if(nonSecurityDefectCountIsSet_) {
        val[utility::conversions::to_string_t("nonSecurityDefectCount")] = ModelBase::toJson(nonSecurityDefectCount_);
    }
    if(reviewResultIsSet_) {
        val[utility::conversions::to_string_t("reviewResult")] = ModelBase::toJson(reviewResult_);
    }
    if(securityDefectCountIsSet_) {
        val[utility::conversions::to_string_t("securityDefectCount")] = ModelBase::toJson(securityDefectCount_);
    }
    if(solvedDefectCountIsSet_) {
        val[utility::conversions::to_string_t("solvedDefectCount")] = ModelBase::toJson(solvedDefectCount_);
    }
    if(unsolvedDefectCountIsSet_) {
        val[utility::conversions::to_string_t("unsolvedDefectCount")] = ModelBase::toJson(unsolvedDefectCount_);
    }

    return val;
}
bool JobResultInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("CRITICAL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("CRITICAL"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCritical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DELAYSTATUS_COUNT"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("DELAYSTATUS_COUNT"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelaystatusCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FATAL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("FATAL"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFatal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("GENERAL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("GENERAL"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeneral(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("INFO"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("INFO"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PROMPT"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("PROMPT"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrompt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codeLine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codeLine"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defectCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defectCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dismissed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dismissed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDismissed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileTotal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileTotal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("newUnsolvedDefectCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newUnsolvedDefectCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewUnsolvedDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nonSecurityDefectCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nonSecurityDefectCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonSecurityDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewResult"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewResult"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("securityDefectCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("securityDefectCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solvedDefectCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solvedDefectCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolvedDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unsolvedDefectCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unsolvedDefectCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnsolvedDefectCount(refVal);
        }
    }
    return ok;
}


int32_t JobResultInfo::getCritical() const
{
    return critical_;
}

void JobResultInfo::setCritical(int32_t value)
{
    critical_ = value;
    criticalIsSet_ = true;
}

bool JobResultInfo::criticalIsSet() const
{
    return criticalIsSet_;
}

void JobResultInfo::unsetcritical()
{
    criticalIsSet_ = false;
}

int32_t JobResultInfo::getDelaystatusCount() const
{
    return delaystatusCount_;
}

void JobResultInfo::setDelaystatusCount(int32_t value)
{
    delaystatusCount_ = value;
    delaystatusCountIsSet_ = true;
}

bool JobResultInfo::delaystatusCountIsSet() const
{
    return delaystatusCountIsSet_;
}

void JobResultInfo::unsetdelaystatusCount()
{
    delaystatusCountIsSet_ = false;
}

int32_t JobResultInfo::getFatal() const
{
    return fatal_;
}

void JobResultInfo::setFatal(int32_t value)
{
    fatal_ = value;
    fatalIsSet_ = true;
}

bool JobResultInfo::fatalIsSet() const
{
    return fatalIsSet_;
}

void JobResultInfo::unsetfatal()
{
    fatalIsSet_ = false;
}

int32_t JobResultInfo::getGeneral() const
{
    return general_;
}

void JobResultInfo::setGeneral(int32_t value)
{
    general_ = value;
    generalIsSet_ = true;
}

bool JobResultInfo::generalIsSet() const
{
    return generalIsSet_;
}

void JobResultInfo::unsetgeneral()
{
    generalIsSet_ = false;
}

int32_t JobResultInfo::getInfo() const
{
    return info_;
}

void JobResultInfo::setInfo(int32_t value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool JobResultInfo::infoIsSet() const
{
    return infoIsSet_;
}

void JobResultInfo::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t JobResultInfo::getPrompt() const
{
    return prompt_;
}

void JobResultInfo::setPrompt(int32_t value)
{
    prompt_ = value;
    promptIsSet_ = true;
}

bool JobResultInfo::promptIsSet() const
{
    return promptIsSet_;
}

void JobResultInfo::unsetprompt()
{
    promptIsSet_ = false;
}

int32_t JobResultInfo::getCodeLine() const
{
    return codeLine_;
}

void JobResultInfo::setCodeLine(int32_t value)
{
    codeLine_ = value;
    codeLineIsSet_ = true;
}

bool JobResultInfo::codeLineIsSet() const
{
    return codeLineIsSet_;
}

void JobResultInfo::unsetcodeLine()
{
    codeLineIsSet_ = false;
}

int32_t JobResultInfo::getDefectCount() const
{
    return defectCount_;
}

void JobResultInfo::setDefectCount(int32_t value)
{
    defectCount_ = value;
    defectCountIsSet_ = true;
}

bool JobResultInfo::defectCountIsSet() const
{
    return defectCountIsSet_;
}

void JobResultInfo::unsetdefectCount()
{
    defectCountIsSet_ = false;
}

int32_t JobResultInfo::getDismissed() const
{
    return dismissed_;
}

void JobResultInfo::setDismissed(int32_t value)
{
    dismissed_ = value;
    dismissedIsSet_ = true;
}

bool JobResultInfo::dismissedIsSet() const
{
    return dismissedIsSet_;
}

void JobResultInfo::unsetdismissed()
{
    dismissedIsSet_ = false;
}

int32_t JobResultInfo::getFileTotal() const
{
    return fileTotal_;
}

void JobResultInfo::setFileTotal(int32_t value)
{
    fileTotal_ = value;
    fileTotalIsSet_ = true;
}

bool JobResultInfo::fileTotalIsSet() const
{
    return fileTotalIsSet_;
}

void JobResultInfo::unsetfileTotal()
{
    fileTotalIsSet_ = false;
}

int32_t JobResultInfo::getFixed() const
{
    return fixed_;
}

void JobResultInfo::setFixed(int32_t value)
{
    fixed_ = value;
    fixedIsSet_ = true;
}

bool JobResultInfo::fixedIsSet() const
{
    return fixedIsSet_;
}

void JobResultInfo::unsetfixed()
{
    fixedIsSet_ = false;
}

std::string JobResultInfo::getId() const
{
    return id_;
}

void JobResultInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobResultInfo::idIsSet() const
{
    return idIsSet_;
}

void JobResultInfo::unsetid()
{
    idIsSet_ = false;
}

std::string JobResultInfo::getJobId() const
{
    return jobId_;
}

void JobResultInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool JobResultInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void JobResultInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t JobResultInfo::getNewUnsolvedDefectCount() const
{
    return newUnsolvedDefectCount_;
}

void JobResultInfo::setNewUnsolvedDefectCount(int32_t value)
{
    newUnsolvedDefectCount_ = value;
    newUnsolvedDefectCountIsSet_ = true;
}

bool JobResultInfo::newUnsolvedDefectCountIsSet() const
{
    return newUnsolvedDefectCountIsSet_;
}

void JobResultInfo::unsetnewUnsolvedDefectCount()
{
    newUnsolvedDefectCountIsSet_ = false;
}

int32_t JobResultInfo::getNonSecurityDefectCount() const
{
    return nonSecurityDefectCount_;
}

void JobResultInfo::setNonSecurityDefectCount(int32_t value)
{
    nonSecurityDefectCount_ = value;
    nonSecurityDefectCountIsSet_ = true;
}

bool JobResultInfo::nonSecurityDefectCountIsSet() const
{
    return nonSecurityDefectCountIsSet_;
}

void JobResultInfo::unsetnonSecurityDefectCount()
{
    nonSecurityDefectCountIsSet_ = false;
}

std::string JobResultInfo::getReviewResult() const
{
    return reviewResult_;
}

void JobResultInfo::setReviewResult(const std::string& value)
{
    reviewResult_ = value;
    reviewResultIsSet_ = true;
}

bool JobResultInfo::reviewResultIsSet() const
{
    return reviewResultIsSet_;
}

void JobResultInfo::unsetreviewResult()
{
    reviewResultIsSet_ = false;
}

int32_t JobResultInfo::getSecurityDefectCount() const
{
    return securityDefectCount_;
}

void JobResultInfo::setSecurityDefectCount(int32_t value)
{
    securityDefectCount_ = value;
    securityDefectCountIsSet_ = true;
}

bool JobResultInfo::securityDefectCountIsSet() const
{
    return securityDefectCountIsSet_;
}

void JobResultInfo::unsetsecurityDefectCount()
{
    securityDefectCountIsSet_ = false;
}

int32_t JobResultInfo::getSolvedDefectCount() const
{
    return solvedDefectCount_;
}

void JobResultInfo::setSolvedDefectCount(int32_t value)
{
    solvedDefectCount_ = value;
    solvedDefectCountIsSet_ = true;
}

bool JobResultInfo::solvedDefectCountIsSet() const
{
    return solvedDefectCountIsSet_;
}

void JobResultInfo::unsetsolvedDefectCount()
{
    solvedDefectCountIsSet_ = false;
}

int32_t JobResultInfo::getUnsolvedDefectCount() const
{
    return unsolvedDefectCount_;
}

void JobResultInfo::setUnsolvedDefectCount(int32_t value)
{
    unsolvedDefectCount_ = value;
    unsolvedDefectCountIsSet_ = true;
}

bool JobResultInfo::unsolvedDefectCountIsSet() const
{
    return unsolvedDefectCountIsSet_;
}

void JobResultInfo::unsetunsolvedDefectCount()
{
    unsolvedDefectCountIsSet_ = false;
}

}
}
}
}
}


