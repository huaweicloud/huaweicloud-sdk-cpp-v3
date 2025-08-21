

#include "huaweicloud/cdn/v2/model/CreateTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateTemplateRequestBody::CreateTemplateRequestBody()
{
    tmlName_ = "";
    tmlNameIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    configsIsSet_ = false;
}

CreateTemplateRequestBody::~CreateTemplateRequestBody() = default;

void CreateTemplateRequestBody::validate()
{
}

web::json::value CreateTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tmlNameIsSet_) {
        val[utility::conversions::to_string_t("tml_name")] = ModelBase::toJson(tmlName_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool CreateTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tml_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            TemplateConfigs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}


std::string CreateTemplateRequestBody::getTmlName() const
{
    return tmlName_;
}

void CreateTemplateRequestBody::setTmlName(const std::string& value)
{
    tmlName_ = value;
    tmlNameIsSet_ = true;
}

bool CreateTemplateRequestBody::tmlNameIsSet() const
{
    return tmlNameIsSet_;
}

void CreateTemplateRequestBody::unsettmlName()
{
    tmlNameIsSet_ = false;
}

std::string CreateTemplateRequestBody::getRemark() const
{
    return remark_;
}

void CreateTemplateRequestBody::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool CreateTemplateRequestBody::remarkIsSet() const
{
    return remarkIsSet_;
}

void CreateTemplateRequestBody::unsetremark()
{
    remarkIsSet_ = false;
}

TemplateConfigs CreateTemplateRequestBody::getConfigs() const
{
    return configs_;
}

void CreateTemplateRequestBody::setConfigs(const TemplateConfigs& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool CreateTemplateRequestBody::configsIsSet() const
{
    return configsIsSet_;
}

void CreateTemplateRequestBody::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


