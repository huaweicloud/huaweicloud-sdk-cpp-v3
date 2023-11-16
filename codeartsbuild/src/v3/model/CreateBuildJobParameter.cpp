

#include "huaweicloud/codeartsbuild/v3/model/CreateBuildJobParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateBuildJobParameter::CreateBuildJobParameter()
{
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
}

CreateBuildJobParameter::~CreateBuildJobParameter() = default;

void CreateBuildJobParameter::validate()
{
}

web::json::value CreateBuildJobParameter::toJson() const
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
bool CreateBuildJobParameter::fromJson(const web::json::value& val)
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


std::string CreateBuildJobParameter::getName() const
{
    return name_;
}

void CreateBuildJobParameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateBuildJobParameter::nameIsSet() const
{
    return nameIsSet_;
}

void CreateBuildJobParameter::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CreateBuildJobParameterParam>& CreateBuildJobParameter::getParams()
{
    return params_;
}

void CreateBuildJobParameter::setParams(const std::vector<CreateBuildJobParameterParam>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CreateBuildJobParameter::paramsIsSet() const
{
    return paramsIsSet_;
}

void CreateBuildJobParameter::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


