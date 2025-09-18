

#include "huaweicloud/codeartscheck/v2/model/DefectInfoV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




DefectInfoV2::DefectInfoV2()
{
    defectId_ = "";
    defectIdIsSet_ = false;
    defectCheckerName_ = "";
    defectCheckerNameIsSet_ = false;
    defectStatus_ = "";
    defectStatusIsSet_ = false;
    ruleSystemTags_ = "";
    ruleSystemTagsIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    lineNumber_ = "";
    lineNumberIsSet_ = false;
    defectContent_ = "";
    defectContentIsSet_ = false;
    defectLevel_ = "";
    defectLevelIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    issueKey_ = "";
    issueKeyIsSet_ = false;
    fragmentIsSet_ = false;
    eventsIsSet_ = false;
}

DefectInfoV2::~DefectInfoV2() = default;

void DefectInfoV2::validate()
{
}

web::json::value DefectInfoV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defectIdIsSet_) {
        val[utility::conversions::to_string_t("defect_id")] = ModelBase::toJson(defectId_);
    }
    if(defectCheckerNameIsSet_) {
        val[utility::conversions::to_string_t("defect_checker_name")] = ModelBase::toJson(defectCheckerName_);
    }
    if(defectStatusIsSet_) {
        val[utility::conversions::to_string_t("defect_status")] = ModelBase::toJson(defectStatus_);
    }
    if(ruleSystemTagsIsSet_) {
        val[utility::conversions::to_string_t("rule_system_tags")] = ModelBase::toJson(ruleSystemTags_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(lineNumberIsSet_) {
        val[utility::conversions::to_string_t("line_number")] = ModelBase::toJson(lineNumber_);
    }
    if(defectContentIsSet_) {
        val[utility::conversions::to_string_t("defect_content")] = ModelBase::toJson(defectContent_);
    }
    if(defectLevelIsSet_) {
        val[utility::conversions::to_string_t("defect_level")] = ModelBase::toJson(defectLevel_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(issueKeyIsSet_) {
        val[utility::conversions::to_string_t("issue_key")] = ModelBase::toJson(issueKey_);
    }
    if(fragmentIsSet_) {
        val[utility::conversions::to_string_t("fragment")] = ModelBase::toJson(fragment_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }

    return val;
}
bool DefectInfoV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defect_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_checker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_checker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectCheckerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_system_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_system_tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSystemTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fragment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fragment"));
        if(!fieldValue.is_null())
        {
            std::vector<DefectFragmentV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFragment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<DefectEvents> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    return ok;
}


std::string DefectInfoV2::getDefectId() const
{
    return defectId_;
}

void DefectInfoV2::setDefectId(const std::string& value)
{
    defectId_ = value;
    defectIdIsSet_ = true;
}

bool DefectInfoV2::defectIdIsSet() const
{
    return defectIdIsSet_;
}

void DefectInfoV2::unsetdefectId()
{
    defectIdIsSet_ = false;
}

std::string DefectInfoV2::getDefectCheckerName() const
{
    return defectCheckerName_;
}

void DefectInfoV2::setDefectCheckerName(const std::string& value)
{
    defectCheckerName_ = value;
    defectCheckerNameIsSet_ = true;
}

bool DefectInfoV2::defectCheckerNameIsSet() const
{
    return defectCheckerNameIsSet_;
}

void DefectInfoV2::unsetdefectCheckerName()
{
    defectCheckerNameIsSet_ = false;
}

std::string DefectInfoV2::getDefectStatus() const
{
    return defectStatus_;
}

void DefectInfoV2::setDefectStatus(const std::string& value)
{
    defectStatus_ = value;
    defectStatusIsSet_ = true;
}

bool DefectInfoV2::defectStatusIsSet() const
{
    return defectStatusIsSet_;
}

void DefectInfoV2::unsetdefectStatus()
{
    defectStatusIsSet_ = false;
}

std::string DefectInfoV2::getRuleSystemTags() const
{
    return ruleSystemTags_;
}

void DefectInfoV2::setRuleSystemTags(const std::string& value)
{
    ruleSystemTags_ = value;
    ruleSystemTagsIsSet_ = true;
}

bool DefectInfoV2::ruleSystemTagsIsSet() const
{
    return ruleSystemTagsIsSet_;
}

void DefectInfoV2::unsetruleSystemTags()
{
    ruleSystemTagsIsSet_ = false;
}

std::string DefectInfoV2::getRuleName() const
{
    return ruleName_;
}

void DefectInfoV2::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool DefectInfoV2::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void DefectInfoV2::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string DefectInfoV2::getLineNumber() const
{
    return lineNumber_;
}

void DefectInfoV2::setLineNumber(const std::string& value)
{
    lineNumber_ = value;
    lineNumberIsSet_ = true;
}

bool DefectInfoV2::lineNumberIsSet() const
{
    return lineNumberIsSet_;
}

void DefectInfoV2::unsetlineNumber()
{
    lineNumberIsSet_ = false;
}

std::string DefectInfoV2::getDefectContent() const
{
    return defectContent_;
}

void DefectInfoV2::setDefectContent(const std::string& value)
{
    defectContent_ = value;
    defectContentIsSet_ = true;
}

bool DefectInfoV2::defectContentIsSet() const
{
    return defectContentIsSet_;
}

void DefectInfoV2::unsetdefectContent()
{
    defectContentIsSet_ = false;
}

std::string DefectInfoV2::getDefectLevel() const
{
    return defectLevel_;
}

void DefectInfoV2::setDefectLevel(const std::string& value)
{
    defectLevel_ = value;
    defectLevelIsSet_ = true;
}

bool DefectInfoV2::defectLevelIsSet() const
{
    return defectLevelIsSet_;
}

void DefectInfoV2::unsetdefectLevel()
{
    defectLevelIsSet_ = false;
}

std::string DefectInfoV2::getFilePath() const
{
    return filePath_;
}

void DefectInfoV2::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool DefectInfoV2::filePathIsSet() const
{
    return filePathIsSet_;
}

void DefectInfoV2::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string DefectInfoV2::getCreatedAt() const
{
    return createdAt_;
}

void DefectInfoV2::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DefectInfoV2::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DefectInfoV2::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string DefectInfoV2::getIssueKey() const
{
    return issueKey_;
}

void DefectInfoV2::setIssueKey(const std::string& value)
{
    issueKey_ = value;
    issueKeyIsSet_ = true;
}

bool DefectInfoV2::issueKeyIsSet() const
{
    return issueKeyIsSet_;
}

void DefectInfoV2::unsetissueKey()
{
    issueKeyIsSet_ = false;
}

std::vector<DefectFragmentV2>& DefectInfoV2::getFragment()
{
    return fragment_;
}

void DefectInfoV2::setFragment(const std::vector<DefectFragmentV2>& value)
{
    fragment_ = value;
    fragmentIsSet_ = true;
}

bool DefectInfoV2::fragmentIsSet() const
{
    return fragmentIsSet_;
}

void DefectInfoV2::unsetfragment()
{
    fragmentIsSet_ = false;
}

std::vector<DefectEvents>& DefectInfoV2::getEvents()
{
    return events_;
}

void DefectInfoV2::setEvents(const std::vector<DefectEvents>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool DefectInfoV2::eventsIsSet() const
{
    return eventsIsSet_;
}

void DefectInfoV2::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


