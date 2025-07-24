

#include "huaweicloud/cloudtest/v1/model/RequirementOverviewVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RequirementOverviewVo::RequirementOverviewVo()
{
    name_ = "";
    nameIsSet_ = false;
    workitemId_ = "";
    workitemIdIsSet_ = false;
    sequenceId_ = "";
    sequenceIdIsSet_ = false;
    boardId_ = "";
    boardIdIsSet_ = false;
    trackerId_ = "";
    trackerIdIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
    relateCaseNumber_ = 0;
    relateCaseNumberIsSet_ = false;
    casePassVoIsSet_ = false;
    caseExecuteVoIsSet_ = false;
    relateDefectNumber_ = 0;
    relateDefectNumberIsSet_ = false;
}

RequirementOverviewVo::~RequirementOverviewVo() = default;

void RequirementOverviewVo::validate()
{
}

web::json::value RequirementOverviewVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(workitemIdIsSet_) {
        val[utility::conversions::to_string_t("workitem_id")] = ModelBase::toJson(workitemId_);
    }
    if(sequenceIdIsSet_) {
        val[utility::conversions::to_string_t("sequence_id")] = ModelBase::toJson(sequenceId_);
    }
    if(boardIdIsSet_) {
        val[utility::conversions::to_string_t("board_id")] = ModelBase::toJson(boardId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(relateCaseNumberIsSet_) {
        val[utility::conversions::to_string_t("relate_case_number")] = ModelBase::toJson(relateCaseNumber_);
    }
    if(casePassVoIsSet_) {
        val[utility::conversions::to_string_t("case_pass_vo")] = ModelBase::toJson(casePassVo_);
    }
    if(caseExecuteVoIsSet_) {
        val[utility::conversions::to_string_t("case_execute_vo")] = ModelBase::toJson(caseExecuteVo_);
    }
    if(relateDefectNumberIsSet_) {
        val[utility::conversions::to_string_t("relate_defect_number")] = ModelBase::toJson(relateDefectNumber_);
    }

    return val;
}
bool RequirementOverviewVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workitem_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("board_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("board_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_case_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_case_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateCaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_pass_vo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_pass_vo"));
        if(!fieldValue.is_null())
        {
            CasePassVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePassVo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_execute_vo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_execute_vo"));
        if(!fieldValue.is_null())
        {
            CaseExecuteVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseExecuteVo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_defect_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_defect_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateDefectNumber(refVal);
        }
    }
    return ok;
}


std::string RequirementOverviewVo::getName() const
{
    return name_;
}

void RequirementOverviewVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RequirementOverviewVo::nameIsSet() const
{
    return nameIsSet_;
}

void RequirementOverviewVo::unsetname()
{
    nameIsSet_ = false;
}

std::string RequirementOverviewVo::getWorkitemId() const
{
    return workitemId_;
}

void RequirementOverviewVo::setWorkitemId(const std::string& value)
{
    workitemId_ = value;
    workitemIdIsSet_ = true;
}

bool RequirementOverviewVo::workitemIdIsSet() const
{
    return workitemIdIsSet_;
}

void RequirementOverviewVo::unsetworkitemId()
{
    workitemIdIsSet_ = false;
}

std::string RequirementOverviewVo::getSequenceId() const
{
    return sequenceId_;
}

void RequirementOverviewVo::setSequenceId(const std::string& value)
{
    sequenceId_ = value;
    sequenceIdIsSet_ = true;
}

bool RequirementOverviewVo::sequenceIdIsSet() const
{
    return sequenceIdIsSet_;
}

void RequirementOverviewVo::unsetsequenceId()
{
    sequenceIdIsSet_ = false;
}

std::string RequirementOverviewVo::getBoardId() const
{
    return boardId_;
}

void RequirementOverviewVo::setBoardId(const std::string& value)
{
    boardId_ = value;
    boardIdIsSet_ = true;
}

bool RequirementOverviewVo::boardIdIsSet() const
{
    return boardIdIsSet_;
}

void RequirementOverviewVo::unsetboardId()
{
    boardIdIsSet_ = false;
}

std::string RequirementOverviewVo::getTrackerId() const
{
    return trackerId_;
}

void RequirementOverviewVo::setTrackerId(const std::string& value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool RequirementOverviewVo::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void RequirementOverviewVo::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string RequirementOverviewVo::getTrackerName() const
{
    return trackerName_;
}

void RequirementOverviewVo::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool RequirementOverviewVo::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void RequirementOverviewVo::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

int32_t RequirementOverviewVo::getRelateCaseNumber() const
{
    return relateCaseNumber_;
}

void RequirementOverviewVo::setRelateCaseNumber(int32_t value)
{
    relateCaseNumber_ = value;
    relateCaseNumberIsSet_ = true;
}

bool RequirementOverviewVo::relateCaseNumberIsSet() const
{
    return relateCaseNumberIsSet_;
}

void RequirementOverviewVo::unsetrelateCaseNumber()
{
    relateCaseNumberIsSet_ = false;
}

CasePassVo RequirementOverviewVo::getCasePassVo() const
{
    return casePassVo_;
}

void RequirementOverviewVo::setCasePassVo(const CasePassVo& value)
{
    casePassVo_ = value;
    casePassVoIsSet_ = true;
}

bool RequirementOverviewVo::casePassVoIsSet() const
{
    return casePassVoIsSet_;
}

void RequirementOverviewVo::unsetcasePassVo()
{
    casePassVoIsSet_ = false;
}

CaseExecuteVo RequirementOverviewVo::getCaseExecuteVo() const
{
    return caseExecuteVo_;
}

void RequirementOverviewVo::setCaseExecuteVo(const CaseExecuteVo& value)
{
    caseExecuteVo_ = value;
    caseExecuteVoIsSet_ = true;
}

bool RequirementOverviewVo::caseExecuteVoIsSet() const
{
    return caseExecuteVoIsSet_;
}

void RequirementOverviewVo::unsetcaseExecuteVo()
{
    caseExecuteVoIsSet_ = false;
}

int32_t RequirementOverviewVo::getRelateDefectNumber() const
{
    return relateDefectNumber_;
}

void RequirementOverviewVo::setRelateDefectNumber(int32_t value)
{
    relateDefectNumber_ = value;
    relateDefectNumberIsSet_ = true;
}

bool RequirementOverviewVo::relateDefectNumberIsSet() const
{
    return relateDefectNumberIsSet_;
}

void RequirementOverviewVo::unsetrelateDefectNumber()
{
    relateDefectNumberIsSet_ = false;
}

}
}
}
}
}


