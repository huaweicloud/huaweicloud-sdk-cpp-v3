

#include "huaweicloud/codeartsbuild/v3/model/BuildParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildParams::BuildParams()
{
    name_ = "";
    nameIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    paramsIsSet_ = false;
}

BuildParams::~BuildParams() = default;

void BuildParams::validate()
{
}

web::json::value BuildParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool BuildParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<Params> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string BuildParams::getName() const
{
    return name_;
}

void BuildParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BuildParams::nameIsSet() const
{
    return nameIsSet_;
}

void BuildParams::unsetname()
{
    nameIsSet_ = false;
}

std::string BuildParams::getTitle() const
{
    return title_;
}

void BuildParams::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool BuildParams::titleIsSet() const
{
    return titleIsSet_;
}

void BuildParams::unsettitle()
{
    titleIsSet_ = false;
}

std::vector<Params>& BuildParams::getParams()
{
    return params_;
}

void BuildParams::setParams(const std::vector<Params>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool BuildParams::paramsIsSet() const
{
    return paramsIsSet_;
}

void BuildParams::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


