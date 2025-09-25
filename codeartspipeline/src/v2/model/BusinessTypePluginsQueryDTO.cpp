

#include "huaweicloud/codeartspipeline/v2/model/BusinessTypePluginsQueryDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




BusinessTypePluginsQueryDTO::BusinessTypePluginsQueryDTO()
{
    useCondition_ = "";
    useConditionIsSet_ = false;
    inputRepoType_ = "";
    inputRepoTypeIsSet_ = false;
    inputSourceType_ = "";
    inputSourceTypeIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    regexName_ = "";
    regexNameIsSet_ = false;
}

BusinessTypePluginsQueryDTO::~BusinessTypePluginsQueryDTO() = default;

void BusinessTypePluginsQueryDTO::validate()
{
}

web::json::value BusinessTypePluginsQueryDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(useConditionIsSet_) {
        val[utility::conversions::to_string_t("use_condition")] = ModelBase::toJson(useCondition_);
    }
    if(inputRepoTypeIsSet_) {
        val[utility::conversions::to_string_t("input_repo_type")] = ModelBase::toJson(inputRepoType_);
    }
    if(inputSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("input_source_type")] = ModelBase::toJson(inputSourceType_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(regexNameIsSet_) {
        val[utility::conversions::to_string_t("regex_name")] = ModelBase::toJson(regexName_);
    }

    return val;
}
bool BusinessTypePluginsQueryDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("use_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_repo_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_repo_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputRepoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regex_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegexName(refVal);
        }
    }
    return ok;
}


std::string BusinessTypePluginsQueryDTO::getUseCondition() const
{
    return useCondition_;
}

void BusinessTypePluginsQueryDTO::setUseCondition(const std::string& value)
{
    useCondition_ = value;
    useConditionIsSet_ = true;
}

bool BusinessTypePluginsQueryDTO::useConditionIsSet() const
{
    return useConditionIsSet_;
}

void BusinessTypePluginsQueryDTO::unsetuseCondition()
{
    useConditionIsSet_ = false;
}

std::string BusinessTypePluginsQueryDTO::getInputRepoType() const
{
    return inputRepoType_;
}

void BusinessTypePluginsQueryDTO::setInputRepoType(const std::string& value)
{
    inputRepoType_ = value;
    inputRepoTypeIsSet_ = true;
}

bool BusinessTypePluginsQueryDTO::inputRepoTypeIsSet() const
{
    return inputRepoTypeIsSet_;
}

void BusinessTypePluginsQueryDTO::unsetinputRepoType()
{
    inputRepoTypeIsSet_ = false;
}

std::string BusinessTypePluginsQueryDTO::getInputSourceType() const
{
    return inputSourceType_;
}

void BusinessTypePluginsQueryDTO::setInputSourceType(const std::string& value)
{
    inputSourceType_ = value;
    inputSourceTypeIsSet_ = true;
}

bool BusinessTypePluginsQueryDTO::inputSourceTypeIsSet() const
{
    return inputSourceTypeIsSet_;
}

void BusinessTypePluginsQueryDTO::unsetinputSourceType()
{
    inputSourceTypeIsSet_ = false;
}

std::string BusinessTypePluginsQueryDTO::getBusinessType() const
{
    return businessType_;
}

void BusinessTypePluginsQueryDTO::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool BusinessTypePluginsQueryDTO::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void BusinessTypePluginsQueryDTO::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string BusinessTypePluginsQueryDTO::getRegexName() const
{
    return regexName_;
}

void BusinessTypePluginsQueryDTO::setRegexName(const std::string& value)
{
    regexName_ = value;
    regexNameIsSet_ = true;
}

bool BusinessTypePluginsQueryDTO::regexNameIsSet() const
{
    return regexNameIsSet_;
}

void BusinessTypePluginsQueryDTO::unsetregexName()
{
    regexNameIsSet_ = false;
}

}
}
}
}
}


