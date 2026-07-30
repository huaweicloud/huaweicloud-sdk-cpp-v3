

#include "huaweicloud/modelarts/v1/model/YamlTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




YamlTemplate::YamlTemplate()
{
    algorithmTypeEn_ = "";
    algorithmTypeEnIsSet_ = false;
    algorithmTypeZh_ = "";
    algorithmTypeZhIsSet_ = false;
    algorithmNamesIsSet_ = false;
}

YamlTemplate::~YamlTemplate() = default;

void YamlTemplate::validate()
{
}

web::json::value YamlTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmTypeEnIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type_en")] = ModelBase::toJson(algorithmTypeEn_);
    }
    if(algorithmTypeZhIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type_zh")] = ModelBase::toJson(algorithmTypeZh_);
    }
    if(algorithmNamesIsSet_) {
        val[utility::conversions::to_string_t("algorithm_names")] = ModelBase::toJson(algorithmNames_);
    }

    return val;
}
bool YamlTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm_type_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmTypeEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm_type_zh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type_zh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmTypeZh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmNames(refVal);
        }
    }
    return ok;
}


std::string YamlTemplate::getAlgorithmTypeEn() const
{
    return algorithmTypeEn_;
}

void YamlTemplate::setAlgorithmTypeEn(const std::string& value)
{
    algorithmTypeEn_ = value;
    algorithmTypeEnIsSet_ = true;
}

bool YamlTemplate::algorithmTypeEnIsSet() const
{
    return algorithmTypeEnIsSet_;
}

void YamlTemplate::unsetalgorithmTypeEn()
{
    algorithmTypeEnIsSet_ = false;
}

std::string YamlTemplate::getAlgorithmTypeZh() const
{
    return algorithmTypeZh_;
}

void YamlTemplate::setAlgorithmTypeZh(const std::string& value)
{
    algorithmTypeZh_ = value;
    algorithmTypeZhIsSet_ = true;
}

bool YamlTemplate::algorithmTypeZhIsSet() const
{
    return algorithmTypeZhIsSet_;
}

void YamlTemplate::unsetalgorithmTypeZh()
{
    algorithmTypeZhIsSet_ = false;
}

std::vector<std::string>& YamlTemplate::getAlgorithmNames()
{
    return algorithmNames_;
}

void YamlTemplate::setAlgorithmNames(const std::vector<std::string>& value)
{
    algorithmNames_ = value;
    algorithmNamesIsSet_ = true;
}

bool YamlTemplate::algorithmNamesIsSet() const
{
    return algorithmNamesIsSet_;
}

void YamlTemplate::unsetalgorithmNames()
{
    algorithmNamesIsSet_ = false;
}

}
}
}
}
}


