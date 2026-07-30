

#include "huaweicloud/modelarts/v1/model/Model.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Model::Model()
{
    name_ = "";
    nameIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    quantType_ = "";
    quantTypeIsSet_ = false;
}

Model::~Model() = default;

void Model::validate()
{
}

web::json::value Model::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(quantTypeIsSet_) {
        val[utility::conversions::to_string_t("quant_type")] = ModelBase::toJson(quantType_);
    }

    return val;
}
bool Model::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quant_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quant_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuantType(refVal);
        }
    }
    return ok;
}


std::string Model::getName() const
{
    return name_;
}

void Model::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Model::nameIsSet() const
{
    return nameIsSet_;
}

void Model::unsetname()
{
    nameIsSet_ = false;
}

std::string Model::getUrl() const
{
    return url_;
}

void Model::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Model::urlIsSet() const
{
    return urlIsSet_;
}

void Model::unseturl()
{
    urlIsSet_ = false;
}

std::string Model::getQuantType() const
{
    return quantType_;
}

void Model::setQuantType(const std::string& value)
{
    quantType_ = value;
    quantTypeIsSet_ = true;
}

bool Model::quantTypeIsSet() const
{
    return quantTypeIsSet_;
}

void Model::unsetquantType()
{
    quantTypeIsSet_ = false;
}

}
}
}
}
}


