

#include "huaweicloud/codehub/v4/model/ShowRefCompareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowRefCompareRequest::ShowRefCompareRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    from_ = "";
    fromIsSet_ = false;
    to_ = "";
    toIsSet_ = false;
    compareType_ = "";
    compareTypeIsSet_ = false;
    targetId_ = 0;
    targetIdIsSet_ = false;
    straight_ = false;
    straightIsSet_ = false;
    ignoreWhitespaceChange_ = false;
    ignoreWhitespaceChangeIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    onlyCount_ = false;
    onlyCountIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    additionalFields_ = "";
    additionalFieldsIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowRefCompareRequest::~ShowRefCompareRequest() = default;

void ShowRefCompareRequest::validate()
{
}

web::json::value ShowRefCompareRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(fromIsSet_) {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(from_);
    }
    if(toIsSet_) {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(to_);
    }
    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(straightIsSet_) {
        val[utility::conversions::to_string_t("straight")] = ModelBase::toJson(straight_);
    }
    if(ignoreWhitespaceChangeIsSet_) {
        val[utility::conversions::to_string_t("ignore_whitespace_change")] = ModelBase::toJson(ignoreWhitespaceChange_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(onlyCountIsSet_) {
        val[utility::conversions::to_string_t("only_count")] = ModelBase::toJson(onlyCount_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(additionalFieldsIsSet_) {
        val[utility::conversions::to_string_t("additional_fields")] = ModelBase::toJson(additionalFields_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowRefCompareRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("straight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("straight"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStraight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignore_whitespace_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_whitespace_change"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreWhitespaceChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_count"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("additional_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalFields(refVal);
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
    return ok;
}


int32_t ShowRefCompareRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRefCompareRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRefCompareRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRefCompareRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowRefCompareRequest::getFrom() const
{
    return from_;
}

void ShowRefCompareRequest::setFrom(const std::string& value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowRefCompareRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowRefCompareRequest::unsetfrom()
{
    fromIsSet_ = false;
}

std::string ShowRefCompareRequest::getTo() const
{
    return to_;
}

void ShowRefCompareRequest::setTo(const std::string& value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ShowRefCompareRequest::toIsSet() const
{
    return toIsSet_;
}

void ShowRefCompareRequest::unsetto()
{
    toIsSet_ = false;
}

std::string ShowRefCompareRequest::getCompareType() const
{
    return compareType_;
}

void ShowRefCompareRequest::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ShowRefCompareRequest::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ShowRefCompareRequest::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

int32_t ShowRefCompareRequest::getTargetId() const
{
    return targetId_;
}

void ShowRefCompareRequest::setTargetId(int32_t value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool ShowRefCompareRequest::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void ShowRefCompareRequest::unsettargetId()
{
    targetIdIsSet_ = false;
}

bool ShowRefCompareRequest::isStraight() const
{
    return straight_;
}

void ShowRefCompareRequest::setStraight(bool value)
{
    straight_ = value;
    straightIsSet_ = true;
}

bool ShowRefCompareRequest::straightIsSet() const
{
    return straightIsSet_;
}

void ShowRefCompareRequest::unsetstraight()
{
    straightIsSet_ = false;
}

bool ShowRefCompareRequest::isIgnoreWhitespaceChange() const
{
    return ignoreWhitespaceChange_;
}

void ShowRefCompareRequest::setIgnoreWhitespaceChange(bool value)
{
    ignoreWhitespaceChange_ = value;
    ignoreWhitespaceChangeIsSet_ = true;
}

bool ShowRefCompareRequest::ignoreWhitespaceChangeIsSet() const
{
    return ignoreWhitespaceChangeIsSet_;
}

void ShowRefCompareRequest::unsetignoreWhitespaceChange()
{
    ignoreWhitespaceChangeIsSet_ = false;
}

std::string ShowRefCompareRequest::getView() const
{
    return view_;
}

void ShowRefCompareRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ShowRefCompareRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ShowRefCompareRequest::unsetview()
{
    viewIsSet_ = false;
}

bool ShowRefCompareRequest::isOnlyCount() const
{
    return onlyCount_;
}

void ShowRefCompareRequest::setOnlyCount(bool value)
{
    onlyCount_ = value;
    onlyCountIsSet_ = true;
}

bool ShowRefCompareRequest::onlyCountIsSet() const
{
    return onlyCountIsSet_;
}

void ShowRefCompareRequest::unsetonlyCount()
{
    onlyCountIsSet_ = false;
}

std::string ShowRefCompareRequest::getFilePath() const
{
    return filePath_;
}

void ShowRefCompareRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowRefCompareRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowRefCompareRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ShowRefCompareRequest::getAdditionalFields() const
{
    return additionalFields_;
}

void ShowRefCompareRequest::setAdditionalFields(const std::string& value)
{
    additionalFields_ = value;
    additionalFieldsIsSet_ = true;
}

bool ShowRefCompareRequest::additionalFieldsIsSet() const
{
    return additionalFieldsIsSet_;
}

void ShowRefCompareRequest::unsetadditionalFields()
{
    additionalFieldsIsSet_ = false;
}

int32_t ShowRefCompareRequest::getOffset() const
{
    return offset_;
}

void ShowRefCompareRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowRefCompareRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowRefCompareRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowRefCompareRequest::getLimit() const
{
    return limit_;
}

void ShowRefCompareRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowRefCompareRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowRefCompareRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


