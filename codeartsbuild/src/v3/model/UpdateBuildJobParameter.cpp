

#include "huaweicloud/codeartsbuild/v3/model/UpdateBuildJobParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateBuildJobParameter::UpdateBuildJobParameter()
{
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
}

UpdateBuildJobParameter::~UpdateBuildJobParameter() = default;

void UpdateBuildJobParameter::validate()
{
}

web::json::value UpdateBuildJobParameter::toJson() const
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
bool UpdateBuildJobParameter::fromJson(const web::json::value& val)
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
            std::vector<UpdateBuildJobParameterParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string UpdateBuildJobParameter::getName() const
{
    return name_;
}

void UpdateBuildJobParameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateBuildJobParameter::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateBuildJobParameter::unsetname()
{
    nameIsSet_ = false;
}

std::vector<UpdateBuildJobParameterParam>& UpdateBuildJobParameter::getParams()
{
    return params_;
}

void UpdateBuildJobParameter::setParams(const std::vector<UpdateBuildJobParameterParam>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool UpdateBuildJobParameter::paramsIsSet() const
{
    return paramsIsSet_;
}

void UpdateBuildJobParameter::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


