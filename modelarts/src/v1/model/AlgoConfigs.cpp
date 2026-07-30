

#include "huaweicloud/modelarts/v1/model/AlgoConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgoConfigs::AlgoConfigs()
{
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
}

AlgoConfigs::~AlgoConfigs() = default;

void AlgoConfigs::validate()
{
}

web::json::value AlgoConfigs::toJson() const
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
bool AlgoConfigs::fromJson(const web::json::value& val)
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
            std::vector<AutoSearchAlgoConfigParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string AlgoConfigs::getName() const
{
    return name_;
}

void AlgoConfigs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgoConfigs::nameIsSet() const
{
    return nameIsSet_;
}

void AlgoConfigs::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AutoSearchAlgoConfigParameter>& AlgoConfigs::getParams()
{
    return params_;
}

void AlgoConfigs::setParams(const std::vector<AutoSearchAlgoConfigParameter>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool AlgoConfigs::paramsIsSet() const
{
    return paramsIsSet_;
}

void AlgoConfigs::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


