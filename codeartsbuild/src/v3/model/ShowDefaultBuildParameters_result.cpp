

#include "huaweicloud/codeartsbuild/v3/model/ShowDefaultBuildParameters_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDefaultBuildParameters_result::ShowDefaultBuildParameters_result()
{
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
}

ShowDefaultBuildParameters_result::~ShowDefaultBuildParameters_result() = default;

void ShowDefaultBuildParameters_result::validate()
{
}

web::json::value ShowDefaultBuildParameters_result::toJson() const
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
bool ShowDefaultBuildParameters_result::fromJson(const web::json::value& val)
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
            std::vector<ShowDefaultBuildParameters_params> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string ShowDefaultBuildParameters_result::getName() const
{
    return name_;
}

void ShowDefaultBuildParameters_result::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDefaultBuildParameters_result::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDefaultBuildParameters_result::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ShowDefaultBuildParameters_params>& ShowDefaultBuildParameters_result::getParams()
{
    return params_;
}

void ShowDefaultBuildParameters_result::setParams(const std::vector<ShowDefaultBuildParameters_params>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ShowDefaultBuildParameters_result::paramsIsSet() const
{
    return paramsIsSet_;
}

void ShowDefaultBuildParameters_result::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


