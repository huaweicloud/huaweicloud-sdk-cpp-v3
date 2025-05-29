

#include "huaweicloud/codeartsbuild/v3/model/Parameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Parameter::Parameter()
{
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
}

Parameter::~Parameter() = default;

void Parameter::validate()
{
}

web::json::value Parameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool Parameter::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobParameterParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string Parameter::getName() const
{
    return name_;
}

void Parameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Parameter::nameIsSet() const
{
    return nameIsSet_;
}

void Parameter::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CreateBuildJobParameterParam>& Parameter::getParams()
{
    return params_;
}

void Parameter::setParams(const std::vector<CreateBuildJobParameterParam>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool Parameter::paramsIsSet() const
{
    return paramsIsSet_;
}

void Parameter::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


