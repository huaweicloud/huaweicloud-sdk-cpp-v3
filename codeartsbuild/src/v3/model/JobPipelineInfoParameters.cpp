

#include "huaweicloud/codeartsbuild/v3/model/JobPipelineInfoParameters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobPipelineInfoParameters::JobPipelineInfoParameters()
{
    region_ = "";
    regionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
}

JobPipelineInfoParameters::~JobPipelineInfoParameters() = default;

void JobPipelineInfoParameters::validate()
{
}

web::json::value JobPipelineInfoParameters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool JobPipelineInfoParameters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<JobPipelineInfoParamsItems> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string JobPipelineInfoParameters::getRegion() const
{
    return region_;
}

void JobPipelineInfoParameters::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool JobPipelineInfoParameters::regionIsSet() const
{
    return regionIsSet_;
}

void JobPipelineInfoParameters::unsetregion()
{
    regionIsSet_ = false;
}

std::string JobPipelineInfoParameters::getLanguage() const
{
    return language_;
}

void JobPipelineInfoParameters::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool JobPipelineInfoParameters::languageIsSet() const
{
    return languageIsSet_;
}

void JobPipelineInfoParameters::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string JobPipelineInfoParameters::getName() const
{
    return name_;
}

void JobPipelineInfoParameters::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobPipelineInfoParameters::nameIsSet() const
{
    return nameIsSet_;
}

void JobPipelineInfoParameters::unsetname()
{
    nameIsSet_ = false;
}

std::vector<JobPipelineInfoParamsItems>& JobPipelineInfoParameters::getParams()
{
    return params_;
}

void JobPipelineInfoParameters::setParams(const std::vector<JobPipelineInfoParamsItems>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool JobPipelineInfoParameters::paramsIsSet() const
{
    return paramsIsSet_;
}

void JobPipelineInfoParameters::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


