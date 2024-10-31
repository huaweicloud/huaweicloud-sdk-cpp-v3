

#include "huaweicloud/lts/v2/model/Detail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Detail::Detail()
{
    sourceKey_ = "";
    sourceKeyIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
    keysIsSet_ = false;
    multiLineRegex_ = "";
    multiLineRegexIsSet_ = false;
    keepSource_ = false;
    keepSourceIsSet_ = false;
    keepSourceIfParseError_ = false;
    keepSourceIfParseErrorIsSet_ = false;
    splitSep_ = "";
    splitSepIsSet_ = false;
    splitType_ = "";
    splitTypeIsSet_ = false;
    fieldsIsSet_ = false;
    dropKeysIsSet_ = false;
    sourceKeysIsSet_ = false;
    destKeysIsSet_ = false;
    expandDepth_ = 0;
    expandDepthIsSet_ = false;
    expandConnector_ = "";
    expandConnectorIsSet_ = false;
    sourceFormat_ = "";
    sourceFormatIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    setTime_ = false;
    setTimeIsSet_ = false;
    includeIsSet_ = false;
    excludeIsSet_ = false;
}

Detail::~Detail() = default;

void Detail::validate()
{
}

web::json::value Detail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceKeyIsSet_) {
        val[utility::conversions::to_string_t("source_key")] = ModelBase::toJson(sourceKey_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }
    if(keysIsSet_) {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(keys_);
    }
    if(multiLineRegexIsSet_) {
        val[utility::conversions::to_string_t("multi_line_regex")] = ModelBase::toJson(multiLineRegex_);
    }
    if(keepSourceIsSet_) {
        val[utility::conversions::to_string_t("keep_source")] = ModelBase::toJson(keepSource_);
    }
    if(keepSourceIfParseErrorIsSet_) {
        val[utility::conversions::to_string_t("keep_source_if_parse_error")] = ModelBase::toJson(keepSourceIfParseError_);
    }
    if(splitSepIsSet_) {
        val[utility::conversions::to_string_t("split_sep")] = ModelBase::toJson(splitSep_);
    }
    if(splitTypeIsSet_) {
        val[utility::conversions::to_string_t("split_type")] = ModelBase::toJson(splitType_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(dropKeysIsSet_) {
        val[utility::conversions::to_string_t("drop_keys")] = ModelBase::toJson(dropKeys_);
    }
    if(sourceKeysIsSet_) {
        val[utility::conversions::to_string_t("source_keys")] = ModelBase::toJson(sourceKeys_);
    }
    if(destKeysIsSet_) {
        val[utility::conversions::to_string_t("dest_keys")] = ModelBase::toJson(destKeys_);
    }
    if(expandDepthIsSet_) {
        val[utility::conversions::to_string_t("expand_depth")] = ModelBase::toJson(expandDepth_);
    }
    if(expandConnectorIsSet_) {
        val[utility::conversions::to_string_t("expand_connector")] = ModelBase::toJson(expandConnector_);
    }
    if(sourceFormatIsSet_) {
        val[utility::conversions::to_string_t("source_format")] = ModelBase::toJson(sourceFormat_);
    }
    if(sourceValueIsSet_) {
        val[utility::conversions::to_string_t("source_value")] = ModelBase::toJson(sourceValue_);
    }
    if(setTimeIsSet_) {
        val[utility::conversions::to_string_t("set_time")] = ModelBase::toJson(setTime_);
    }
    if(includeIsSet_) {
        val[utility::conversions::to_string_t("include")] = ModelBase::toJson(include_);
    }
    if(excludeIsSet_) {
        val[utility::conversions::to_string_t("exclude")] = ModelBase::toJson(exclude_);
    }

    return val;
}
bool Detail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_line_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_line_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiLineRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_source"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_source_if_parse_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_source_if_parse_error"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepSourceIfParseError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("split_sep"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("split_sep"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSplitSep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("split_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("split_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSplitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drop_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drop_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDropKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expand_depth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expand_depth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpandDepth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expand_connector"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expand_connector"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpandConnector(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_time"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInclude(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExclude(refVal);
        }
    }
    return ok;
}


std::string Detail::getSourceKey() const
{
    return sourceKey_;
}

void Detail::setSourceKey(const std::string& value)
{
    sourceKey_ = value;
    sourceKeyIsSet_ = true;
}

bool Detail::sourceKeyIsSet() const
{
    return sourceKeyIsSet_;
}

void Detail::unsetsourceKey()
{
    sourceKeyIsSet_ = false;
}

std::string Detail::getRegex() const
{
    return regex_;
}

void Detail::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool Detail::regexIsSet() const
{
    return regexIsSet_;
}

void Detail::unsetregex()
{
    regexIsSet_ = false;
}

std::vector<std::string>& Detail::getKeys()
{
    return keys_;
}

void Detail::setKeys(const std::vector<std::string>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool Detail::keysIsSet() const
{
    return keysIsSet_;
}

void Detail::unsetkeys()
{
    keysIsSet_ = false;
}

std::string Detail::getMultiLineRegex() const
{
    return multiLineRegex_;
}

void Detail::setMultiLineRegex(const std::string& value)
{
    multiLineRegex_ = value;
    multiLineRegexIsSet_ = true;
}

bool Detail::multiLineRegexIsSet() const
{
    return multiLineRegexIsSet_;
}

void Detail::unsetmultiLineRegex()
{
    multiLineRegexIsSet_ = false;
}

bool Detail::isKeepSource() const
{
    return keepSource_;
}

void Detail::setKeepSource(bool value)
{
    keepSource_ = value;
    keepSourceIsSet_ = true;
}

bool Detail::keepSourceIsSet() const
{
    return keepSourceIsSet_;
}

void Detail::unsetkeepSource()
{
    keepSourceIsSet_ = false;
}

bool Detail::isKeepSourceIfParseError() const
{
    return keepSourceIfParseError_;
}

void Detail::setKeepSourceIfParseError(bool value)
{
    keepSourceIfParseError_ = value;
    keepSourceIfParseErrorIsSet_ = true;
}

bool Detail::keepSourceIfParseErrorIsSet() const
{
    return keepSourceIfParseErrorIsSet_;
}

void Detail::unsetkeepSourceIfParseError()
{
    keepSourceIfParseErrorIsSet_ = false;
}

std::string Detail::getSplitSep() const
{
    return splitSep_;
}

void Detail::setSplitSep(const std::string& value)
{
    splitSep_ = value;
    splitSepIsSet_ = true;
}

bool Detail::splitSepIsSet() const
{
    return splitSepIsSet_;
}

void Detail::unsetsplitSep()
{
    splitSepIsSet_ = false;
}

std::string Detail::getSplitType() const
{
    return splitType_;
}

void Detail::setSplitType(const std::string& value)
{
    splitType_ = value;
    splitTypeIsSet_ = true;
}

bool Detail::splitTypeIsSet() const
{
    return splitTypeIsSet_;
}

void Detail::unsetsplitType()
{
    splitTypeIsSet_ = false;
}

std::map<std::string, std::string>& Detail::getFields()
{
    return fields_;
}

void Detail::setFields(const std::map<std::string, std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool Detail::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void Detail::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& Detail::getDropKeys()
{
    return dropKeys_;
}

void Detail::setDropKeys(const std::vector<std::string>& value)
{
    dropKeys_ = value;
    dropKeysIsSet_ = true;
}

bool Detail::dropKeysIsSet() const
{
    return dropKeysIsSet_;
}

void Detail::unsetdropKeys()
{
    dropKeysIsSet_ = false;
}

std::vector<std::string>& Detail::getSourceKeys()
{
    return sourceKeys_;
}

void Detail::setSourceKeys(const std::vector<std::string>& value)
{
    sourceKeys_ = value;
    sourceKeysIsSet_ = true;
}

bool Detail::sourceKeysIsSet() const
{
    return sourceKeysIsSet_;
}

void Detail::unsetsourceKeys()
{
    sourceKeysIsSet_ = false;
}

std::vector<std::string>& Detail::getDestKeys()
{
    return destKeys_;
}

void Detail::setDestKeys(const std::vector<std::string>& value)
{
    destKeys_ = value;
    destKeysIsSet_ = true;
}

bool Detail::destKeysIsSet() const
{
    return destKeysIsSet_;
}

void Detail::unsetdestKeys()
{
    destKeysIsSet_ = false;
}

int32_t Detail::getExpandDepth() const
{
    return expandDepth_;
}

void Detail::setExpandDepth(int32_t value)
{
    expandDepth_ = value;
    expandDepthIsSet_ = true;
}

bool Detail::expandDepthIsSet() const
{
    return expandDepthIsSet_;
}

void Detail::unsetexpandDepth()
{
    expandDepthIsSet_ = false;
}

std::string Detail::getExpandConnector() const
{
    return expandConnector_;
}

void Detail::setExpandConnector(const std::string& value)
{
    expandConnector_ = value;
    expandConnectorIsSet_ = true;
}

bool Detail::expandConnectorIsSet() const
{
    return expandConnectorIsSet_;
}

void Detail::unsetexpandConnector()
{
    expandConnectorIsSet_ = false;
}

std::string Detail::getSourceFormat() const
{
    return sourceFormat_;
}

void Detail::setSourceFormat(const std::string& value)
{
    sourceFormat_ = value;
    sourceFormatIsSet_ = true;
}

bool Detail::sourceFormatIsSet() const
{
    return sourceFormatIsSet_;
}

void Detail::unsetsourceFormat()
{
    sourceFormatIsSet_ = false;
}

std::string Detail::getSourceValue() const
{
    return sourceValue_;
}

void Detail::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool Detail::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void Detail::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

bool Detail::isSetTime() const
{
    return setTime_;
}

void Detail::setSetTime(bool value)
{
    setTime_ = value;
    setTimeIsSet_ = true;
}

bool Detail::setTimeIsSet() const
{
    return setTimeIsSet_;
}

void Detail::unsetsetTime()
{
    setTimeIsSet_ = false;
}

std::map<std::string, std::string>& Detail::getInclude()
{
    return include_;
}

void Detail::setInclude(const std::map<std::string, std::string>& value)
{
    include_ = value;
    includeIsSet_ = true;
}

bool Detail::includeIsSet() const
{
    return includeIsSet_;
}

void Detail::unsetinclude()
{
    includeIsSet_ = false;
}

std::map<std::string, std::string>& Detail::getExclude()
{
    return exclude_;
}

void Detail::setExclude(const std::map<std::string, std::string>& value)
{
    exclude_ = value;
    excludeIsSet_ = true;
}

bool Detail::excludeIsSet() const
{
    return excludeIsSet_;
}

void Detail::unsetexclude()
{
    excludeIsSet_ = false;
}

}
}
}
}
}


