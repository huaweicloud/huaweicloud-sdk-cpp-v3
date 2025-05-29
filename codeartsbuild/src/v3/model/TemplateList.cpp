

#include "huaweicloud/codeartsbuild/v3/model/TemplateList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




TemplateList::TemplateList()
{
    language_ = "";
    languageIsSet_ = false;
    favourite_ = false;
    favouriteIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    weight_ = 0.0;
    weightIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    public_ = false;
    publicIsSet_ = false;
    toolType_ = "";
    toolTypeIsSet_ = false;
    templateIsSet_ = false;
    parametersIsSet_ = false;
}

TemplateList::~TemplateList() = default;

void TemplateList::validate()
{
}

web::json::value TemplateList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(favouriteIsSet_) {
        val[utility::conversions::to_string_t("favourite")] = ModelBase::toJson(favourite_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(publicIsSet_) {
        val[utility::conversions::to_string_t("public")] = ModelBase::toJson(public_);
    }
    if(toolTypeIsSet_) {
        val[utility::conversions::to_string_t("tool_type")] = ModelBase::toJson(toolType_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}
bool TemplateList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favourite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favourite"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavourite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            QueryTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<Parameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}


std::string TemplateList::getLanguage() const
{
    return language_;
}

void TemplateList::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool TemplateList::languageIsSet() const
{
    return languageIsSet_;
}

void TemplateList::unsetlanguage()
{
    languageIsSet_ = false;
}

bool TemplateList::isFavourite() const
{
    return favourite_;
}

void TemplateList::setFavourite(bool value)
{
    favourite_ = value;
    favouriteIsSet_ = true;
}

bool TemplateList::favouriteIsSet() const
{
    return favouriteIsSet_;
}

void TemplateList::unsetfavourite()
{
    favouriteIsSet_ = false;
}

std::string TemplateList::getUuid() const
{
    return uuid_;
}

void TemplateList::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool TemplateList::uuidIsSet() const
{
    return uuidIsSet_;
}

void TemplateList::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string TemplateList::getType() const
{
    return type_;
}

void TemplateList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TemplateList::typeIsSet() const
{
    return typeIsSet_;
}

void TemplateList::unsettype()
{
    typeIsSet_ = false;
}

std::string TemplateList::getName() const
{
    return name_;
}

void TemplateList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateList::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateList::unsetname()
{
    nameIsSet_ = false;
}

double TemplateList::getWeight() const
{
    return weight_;
}

void TemplateList::setWeight(double value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool TemplateList::weightIsSet() const
{
    return weightIsSet_;
}

void TemplateList::unsetweight()
{
    weightIsSet_ = false;
}

std::string TemplateList::getScope() const
{
    return scope_;
}

void TemplateList::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool TemplateList::scopeIsSet() const
{
    return scopeIsSet_;
}

void TemplateList::unsetscope()
{
    scopeIsSet_ = false;
}

std::string TemplateList::getDescription() const
{
    return description_;
}

void TemplateList::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateList::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateList::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TemplateList::getNickName() const
{
    return nickName_;
}

void TemplateList::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool TemplateList::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void TemplateList::unsetnickName()
{
    nickNameIsSet_ = false;
}

bool TemplateList::isPublic() const
{
    return public_;
}

void TemplateList::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool TemplateList::publicIsSet() const
{
    return publicIsSet_;
}

void TemplateList::unsetpublic()
{
    publicIsSet_ = false;
}

std::string TemplateList::getToolType() const
{
    return toolType_;
}

void TemplateList::setToolType(const std::string& value)
{
    toolType_ = value;
    toolTypeIsSet_ = true;
}

bool TemplateList::toolTypeIsSet() const
{
    return toolTypeIsSet_;
}

void TemplateList::unsettoolType()
{
    toolTypeIsSet_ = false;
}

QueryTemplate TemplateList::getTemplate() const
{
    return template_;
}

void TemplateList::setTemplate(const QueryTemplate& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool TemplateList::templateIsSet() const
{
    return templateIsSet_;
}

void TemplateList::unsettemplate()
{
    templateIsSet_ = false;
}

std::vector<Parameter>& TemplateList::getParameters()
{
    return parameters_;
}

void TemplateList::setParameters(const std::vector<Parameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool TemplateList::parametersIsSet() const
{
    return parametersIsSet_;
}

void TemplateList::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


