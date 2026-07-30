

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchYamlTemplateContentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchYamlTemplateContentRequest::ShowAutoSearchYamlTemplateContentRequest()
{
    algorithmType_ = "";
    algorithmTypeIsSet_ = false;
    algorithmName_ = "";
    algorithmNameIsSet_ = false;
}

ShowAutoSearchYamlTemplateContentRequest::~ShowAutoSearchYamlTemplateContentRequest() = default;

void ShowAutoSearchYamlTemplateContentRequest::validate()
{
}

web::json::value ShowAutoSearchYamlTemplateContentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmTypeIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type")] = ModelBase::toJson(algorithmType_);
    }
    if(algorithmNameIsSet_) {
        val[utility::conversions::to_string_t("algorithm_name")] = ModelBase::toJson(algorithmName_);
    }

    return val;
}
bool ShowAutoSearchYamlTemplateContentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmName(refVal);
        }
    }
    return ok;
}


std::string ShowAutoSearchYamlTemplateContentRequest::getAlgorithmType() const
{
    return algorithmType_;
}

void ShowAutoSearchYamlTemplateContentRequest::setAlgorithmType(const std::string& value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool ShowAutoSearchYamlTemplateContentRequest::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void ShowAutoSearchYamlTemplateContentRequest::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

std::string ShowAutoSearchYamlTemplateContentRequest::getAlgorithmName() const
{
    return algorithmName_;
}

void ShowAutoSearchYamlTemplateContentRequest::setAlgorithmName(const std::string& value)
{
    algorithmName_ = value;
    algorithmNameIsSet_ = true;
}

bool ShowAutoSearchYamlTemplateContentRequest::algorithmNameIsSet() const
{
    return algorithmNameIsSet_;
}

void ShowAutoSearchYamlTemplateContentRequest::unsetalgorithmName()
{
    algorithmNameIsSet_ = false;
}

}
}
}
}
}


