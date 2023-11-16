

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplatesItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplatesItems::CreateTemplatesItems()
{
    favourite_ = false;
    favouriteIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    templateIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    public_ = false;
    publicIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    weight_ = 0.0;
    weightIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    toolType_ = "";
    toolTypeIsSet_ = false;
    intlDescriptionIsSet_ = false;
    parametersIsSet_ = false;
    i18nIsSet_ = false;
}

CreateTemplatesItems::~CreateTemplatesItems() = default;

void CreateTemplatesItems::validate()
{
}

web::json::value CreateTemplatesItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(favouriteIsSet_) {
        val[utility::conversions::to_string_t("favourite")] = ModelBase::toJson(favourite_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(publicIsSet_) {
        val[utility::conversions::to_string_t("public")] = ModelBase::toJson(public_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(toolTypeIsSet_) {
        val[utility::conversions::to_string_t("tool_type")] = ModelBase::toJson(toolType_);
    }
    if(intlDescriptionIsSet_) {
        val[utility::conversions::to_string_t("intl_description")] = ModelBase::toJson(intlDescription_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(i18nIsSet_) {
        val[utility::conversions::to_string_t("i18n")] = ModelBase::toJson(i18n_);
    }

    return val;
}
bool CreateTemplatesItems::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("favourite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favourite"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavourite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            QueryTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublic(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intl_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intl_description"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntlDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("i18n"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("i18n"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18n(refVal);
        }
    }
    return ok;
}


bool CreateTemplatesItems::isFavourite() const
{
    return favourite_;
}

void CreateTemplatesItems::setFavourite(bool value)
{
    favourite_ = value;
    favouriteIsSet_ = true;
}

bool CreateTemplatesItems::favouriteIsSet() const
{
    return favouriteIsSet_;
}

void CreateTemplatesItems::unsetfavourite()
{
    favouriteIsSet_ = false;
}

std::string CreateTemplatesItems::getId() const
{
    return id_;
}

void CreateTemplatesItems::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateTemplatesItems::idIsSet() const
{
    return idIsSet_;
}

void CreateTemplatesItems::unsetid()
{
    idIsSet_ = false;
}

std::string CreateTemplatesItems::getUuid() const
{
    return uuid_;
}

void CreateTemplatesItems::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool CreateTemplatesItems::uuidIsSet() const
{
    return uuidIsSet_;
}

void CreateTemplatesItems::unsetuuid()
{
    uuidIsSet_ = false;
}

QueryTemplate CreateTemplatesItems::getTemplate() const
{
    return template_;
}

void CreateTemplatesItems::setTemplate(const QueryTemplate& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool CreateTemplatesItems::templateIsSet() const
{
    return templateIsSet_;
}

void CreateTemplatesItems::unsettemplate()
{
    templateIsSet_ = false;
}

std::string CreateTemplatesItems::getType() const
{
    return type_;
}

void CreateTemplatesItems::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateTemplatesItems::typeIsSet() const
{
    return typeIsSet_;
}

void CreateTemplatesItems::unsettype()
{
    typeIsSet_ = false;
}

bool CreateTemplatesItems::isPublic() const
{
    return public_;
}

void CreateTemplatesItems::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool CreateTemplatesItems::publicIsSet() const
{
    return publicIsSet_;
}

void CreateTemplatesItems::unsetpublic()
{
    publicIsSet_ = false;
}

std::string CreateTemplatesItems::getName() const
{
    return name_;
}

void CreateTemplatesItems::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTemplatesItems::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTemplatesItems::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateTemplatesItems::getCreateTime() const
{
    return createTime_;
}

void CreateTemplatesItems::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateTemplatesItems::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateTemplatesItems::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateTemplatesItems::getDomainId() const
{
    return domainId_;
}

void CreateTemplatesItems::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateTemplatesItems::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateTemplatesItems::unsetdomainId()
{
    domainIdIsSet_ = false;
}

double CreateTemplatesItems::getWeight() const
{
    return weight_;
}

void CreateTemplatesItems::setWeight(double value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool CreateTemplatesItems::weightIsSet() const
{
    return weightIsSet_;
}

void CreateTemplatesItems::unsetweight()
{
    weightIsSet_ = false;
}

std::string CreateTemplatesItems::getUserId() const
{
    return userId_;
}

void CreateTemplatesItems::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateTemplatesItems::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateTemplatesItems::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string CreateTemplatesItems::getUserName() const
{
    return userName_;
}

void CreateTemplatesItems::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateTemplatesItems::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateTemplatesItems::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CreateTemplatesItems::getDomainName() const
{
    return domainName_;
}

void CreateTemplatesItems::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateTemplatesItems::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateTemplatesItems::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string CreateTemplatesItems::getScope() const
{
    return scope_;
}

void CreateTemplatesItems::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool CreateTemplatesItems::scopeIsSet() const
{
    return scopeIsSet_;
}

void CreateTemplatesItems::unsetscope()
{
    scopeIsSet_ = false;
}

std::string CreateTemplatesItems::getDescription() const
{
    return description_;
}

void CreateTemplatesItems::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateTemplatesItems::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateTemplatesItems::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateTemplatesItems::getToolType() const
{
    return toolType_;
}

void CreateTemplatesItems::setToolType(const std::string& value)
{
    toolType_ = value;
    toolTypeIsSet_ = true;
}

bool CreateTemplatesItems::toolTypeIsSet() const
{
    return toolTypeIsSet_;
}

void CreateTemplatesItems::unsettoolType()
{
    toolTypeIsSet_ = false;
}

Object CreateTemplatesItems::getIntlDescription() const
{
    return intlDescription_;
}

void CreateTemplatesItems::setIntlDescription(const Object& value)
{
    intlDescription_ = value;
    intlDescriptionIsSet_ = true;
}

bool CreateTemplatesItems::intlDescriptionIsSet() const
{
    return intlDescriptionIsSet_;
}

void CreateTemplatesItems::unsetintlDescription()
{
    intlDescriptionIsSet_ = false;
}

std::vector<CreateBuildJobParameter>& CreateTemplatesItems::getParameters()
{
    return parameters_;
}

void CreateTemplatesItems::setParameters(const std::vector<CreateBuildJobParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateTemplatesItems::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateTemplatesItems::unsetparameters()
{
    parametersIsSet_ = false;
}

Object CreateTemplatesItems::getI18n() const
{
    return i18n_;
}

void CreateTemplatesItems::setI18n(const Object& value)
{
    i18n_ = value;
    i18nIsSet_ = true;
}

bool CreateTemplatesItems::i18nIsSet() const
{
    return i18nIsSet_;
}

void CreateTemplatesItems::unseti18n()
{
    i18nIsSet_ = false;
}

}
}
}
}
}


