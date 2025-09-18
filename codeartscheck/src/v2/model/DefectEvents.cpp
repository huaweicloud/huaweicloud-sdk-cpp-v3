

#include "huaweicloud/codeartscheck/v2/model/DefectEvents.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




DefectEvents::DefectEvents()
{
    eventsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    fixSuggestionsIsSet_ = false;
    line_ = 0;
    lineIsSet_ = false;
    endLine_ = 0;
    endLineIsSet_ = false;
    codeContextStartLine_ = 0;
    codeContextStartLineIsSet_ = false;
    main_ = false;
    mainIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    mainBuggyCode_ = "";
    mainBuggyCodeIsSet_ = false;
    codeContext_ = "";
    codeContextIsSet_ = false;
}

DefectEvents::~DefectEvents() = default;

void DefectEvents::validate()
{
}

web::json::value DefectEvents::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(*events_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(fixSuggestionsIsSet_) {
        val[utility::conversions::to_string_t("fix_suggestions")] = ModelBase::toJson(fixSuggestions_);
    }
    if(lineIsSet_) {
        val[utility::conversions::to_string_t("line")] = ModelBase::toJson(line_);
    }
    if(endLineIsSet_) {
        val[utility::conversions::to_string_t("end_line")] = ModelBase::toJson(endLine_);
    }
    if(codeContextStartLineIsSet_) {
        val[utility::conversions::to_string_t("code_context_start_line")] = ModelBase::toJson(codeContextStartLine_);
    }
    if(mainIsSet_) {
        val[utility::conversions::to_string_t("main")] = ModelBase::toJson(main_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(mainBuggyCodeIsSet_) {
        val[utility::conversions::to_string_t("main_buggy_code")] = ModelBase::toJson(mainBuggyCode_);
    }
    if(codeContextIsSet_) {
        val[utility::conversions::to_string_t("code_context")] = ModelBase::toJson(codeContext_);
    }

    return val;
}
bool DefectEvents::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<DefectEvents> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fix_suggestions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fix_suggestions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixSuggestions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_context_start_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_context_start_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeContextStartLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("main"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("main_buggy_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_buggy_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainBuggyCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeContext(refVal);
        }
    }
    return ok;
}


std::vector<DefectEvents>& DefectEvents::getEvents()
{
    return *events_;
}

void DefectEvents::setEvents(const std::vector<DefectEvents>& value)
{
    *events_ = value;
    eventsIsSet_ = true;
}

bool DefectEvents::eventsIsSet() const
{
    return eventsIsSet_;
}

void DefectEvents::unsetevents()
{
    eventsIsSet_ = false;
}

std::string DefectEvents::getDescription() const
{
    return description_;
}

void DefectEvents::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DefectEvents::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DefectEvents::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& DefectEvents::getFixSuggestions()
{
    return fixSuggestions_;
}

void DefectEvents::setFixSuggestions(const std::vector<std::string>& value)
{
    fixSuggestions_ = value;
    fixSuggestionsIsSet_ = true;
}

bool DefectEvents::fixSuggestionsIsSet() const
{
    return fixSuggestionsIsSet_;
}

void DefectEvents::unsetfixSuggestions()
{
    fixSuggestionsIsSet_ = false;
}

int32_t DefectEvents::getLine() const
{
    return line_;
}

void DefectEvents::setLine(int32_t value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool DefectEvents::lineIsSet() const
{
    return lineIsSet_;
}

void DefectEvents::unsetline()
{
    lineIsSet_ = false;
}

int32_t DefectEvents::getEndLine() const
{
    return endLine_;
}

void DefectEvents::setEndLine(int32_t value)
{
    endLine_ = value;
    endLineIsSet_ = true;
}

bool DefectEvents::endLineIsSet() const
{
    return endLineIsSet_;
}

void DefectEvents::unsetendLine()
{
    endLineIsSet_ = false;
}

int32_t DefectEvents::getCodeContextStartLine() const
{
    return codeContextStartLine_;
}

void DefectEvents::setCodeContextStartLine(int32_t value)
{
    codeContextStartLine_ = value;
    codeContextStartLineIsSet_ = true;
}

bool DefectEvents::codeContextStartLineIsSet() const
{
    return codeContextStartLineIsSet_;
}

void DefectEvents::unsetcodeContextStartLine()
{
    codeContextStartLineIsSet_ = false;
}

bool DefectEvents::isMain() const
{
    return main_;
}

void DefectEvents::setMain(bool value)
{
    main_ = value;
    mainIsSet_ = true;
}

bool DefectEvents::mainIsSet() const
{
    return mainIsSet_;
}

void DefectEvents::unsetmain()
{
    mainIsSet_ = false;
}

std::string DefectEvents::getPath() const
{
    return path_;
}

void DefectEvents::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool DefectEvents::pathIsSet() const
{
    return pathIsSet_;
}

void DefectEvents::unsetpath()
{
    pathIsSet_ = false;
}

std::string DefectEvents::getTag() const
{
    return tag_;
}

void DefectEvents::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool DefectEvents::tagIsSet() const
{
    return tagIsSet_;
}

void DefectEvents::unsettag()
{
    tagIsSet_ = false;
}

std::string DefectEvents::getMainBuggyCode() const
{
    return mainBuggyCode_;
}

void DefectEvents::setMainBuggyCode(const std::string& value)
{
    mainBuggyCode_ = value;
    mainBuggyCodeIsSet_ = true;
}

bool DefectEvents::mainBuggyCodeIsSet() const
{
    return mainBuggyCodeIsSet_;
}

void DefectEvents::unsetmainBuggyCode()
{
    mainBuggyCodeIsSet_ = false;
}

std::string DefectEvents::getCodeContext() const
{
    return codeContext_;
}

void DefectEvents::setCodeContext(const std::string& value)
{
    codeContext_ = value;
    codeContextIsSet_ = true;
}

bool DefectEvents::codeContextIsSet() const
{
    return codeContextIsSet_;
}

void DefectEvents::unsetcodeContext()
{
    codeContextIsSet_ = false;
}

}
}
}
}
}


