

#include "huaweicloud/codeartsbuild/v3/model/QueryTemplatesItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




QueryTemplatesItems::QueryTemplatesItems()
{
    favourite_ = false;
    favouriteIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
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

QueryTemplatesItems::~QueryTemplatesItems() = default;

void QueryTemplatesItems::validate()
{
}

web::json::value QueryTemplatesItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(favouriteIsSet_) {
        val[utility::conversions::to_string_t("favourite")] = ModelBase::toJson(favourite_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
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
bool QueryTemplatesItems::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
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


bool QueryTemplatesItems::isFavourite() const
{
    return favourite_;
}

void QueryTemplatesItems::setFavourite(bool value)
{
    favourite_ = value;
    favouriteIsSet_ = true;
}

bool QueryTemplatesItems::favouriteIsSet() const
{
    return favouriteIsSet_;
}

void QueryTemplatesItems::unsetfavourite()
{
    favouriteIsSet_ = false;
}

std::string QueryTemplatesItems::getNickName() const
{
    return nickName_;
}

void QueryTemplatesItems::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool QueryTemplatesItems::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void QueryTemplatesItems::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string QueryTemplatesItems::getId() const
{
    return id_;
}

void QueryTemplatesItems::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryTemplatesItems::idIsSet() const
{
    return idIsSet_;
}

void QueryTemplatesItems::unsetid()
{
    idIsSet_ = false;
}

std::string QueryTemplatesItems::getUuid() const
{
    return uuid_;
}

void QueryTemplatesItems::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool QueryTemplatesItems::uuidIsSet() const
{
    return uuidIsSet_;
}

void QueryTemplatesItems::unsetuuid()
{
    uuidIsSet_ = false;
}

QueryTemplate QueryTemplatesItems::getTemplate() const
{
    return template_;
}

void QueryTemplatesItems::setTemplate(const QueryTemplate& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool QueryTemplatesItems::templateIsSet() const
{
    return templateIsSet_;
}

void QueryTemplatesItems::unsettemplate()
{
    templateIsSet_ = false;
}

std::string QueryTemplatesItems::getType() const
{
    return type_;
}

void QueryTemplatesItems::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QueryTemplatesItems::typeIsSet() const
{
    return typeIsSet_;
}

void QueryTemplatesItems::unsettype()
{
    typeIsSet_ = false;
}

bool QueryTemplatesItems::isPublic() const
{
    return public_;
}

void QueryTemplatesItems::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool QueryTemplatesItems::publicIsSet() const
{
    return publicIsSet_;
}

void QueryTemplatesItems::unsetpublic()
{
    publicIsSet_ = false;
}

std::string QueryTemplatesItems::getName() const
{
    return name_;
}

void QueryTemplatesItems::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryTemplatesItems::nameIsSet() const
{
    return nameIsSet_;
}

void QueryTemplatesItems::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryTemplatesItems::getCreateTime() const
{
    return createTime_;
}

void QueryTemplatesItems::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QueryTemplatesItems::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QueryTemplatesItems::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string QueryTemplatesItems::getDomainId() const
{
    return domainId_;
}

void QueryTemplatesItems::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool QueryTemplatesItems::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void QueryTemplatesItems::unsetdomainId()
{
    domainIdIsSet_ = false;
}

double QueryTemplatesItems::getWeight() const
{
    return weight_;
}

void QueryTemplatesItems::setWeight(double value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool QueryTemplatesItems::weightIsSet() const
{
    return weightIsSet_;
}

void QueryTemplatesItems::unsetweight()
{
    weightIsSet_ = false;
}

std::string QueryTemplatesItems::getUserId() const
{
    return userId_;
}

void QueryTemplatesItems::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool QueryTemplatesItems::userIdIsSet() const
{
    return userIdIsSet_;
}

void QueryTemplatesItems::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string QueryTemplatesItems::getUserName() const
{
    return userName_;
}

void QueryTemplatesItems::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool QueryTemplatesItems::userNameIsSet() const
{
    return userNameIsSet_;
}

void QueryTemplatesItems::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string QueryTemplatesItems::getDomainName() const
{
    return domainName_;
}

void QueryTemplatesItems::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool QueryTemplatesItems::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void QueryTemplatesItems::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string QueryTemplatesItems::getScope() const
{
    return scope_;
}

void QueryTemplatesItems::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool QueryTemplatesItems::scopeIsSet() const
{
    return scopeIsSet_;
}

void QueryTemplatesItems::unsetscope()
{
    scopeIsSet_ = false;
}

std::string QueryTemplatesItems::getDescription() const
{
    return description_;
}

void QueryTemplatesItems::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryTemplatesItems::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryTemplatesItems::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string QueryTemplatesItems::getToolType() const
{
    return toolType_;
}

void QueryTemplatesItems::setToolType(const std::string& value)
{
    toolType_ = value;
    toolTypeIsSet_ = true;
}

bool QueryTemplatesItems::toolTypeIsSet() const
{
    return toolTypeIsSet_;
}

void QueryTemplatesItems::unsettoolType()
{
    toolTypeIsSet_ = false;
}

Object QueryTemplatesItems::getIntlDescription() const
{
    return intlDescription_;
}

void QueryTemplatesItems::setIntlDescription(const Object& value)
{
    intlDescription_ = value;
    intlDescriptionIsSet_ = true;
}

bool QueryTemplatesItems::intlDescriptionIsSet() const
{
    return intlDescriptionIsSet_;
}

void QueryTemplatesItems::unsetintlDescription()
{
    intlDescriptionIsSet_ = false;
}

std::vector<CreateBuildJobParameter>& QueryTemplatesItems::getParameters()
{
    return parameters_;
}

void QueryTemplatesItems::setParameters(const std::vector<CreateBuildJobParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool QueryTemplatesItems::parametersIsSet() const
{
    return parametersIsSet_;
}

void QueryTemplatesItems::unsetparameters()
{
    parametersIsSet_ = false;
}

Object QueryTemplatesItems::getI18n() const
{
    return i18n_;
}

void QueryTemplatesItems::setI18n(const Object& value)
{
    i18n_ = value;
    i18nIsSet_ = true;
}

bool QueryTemplatesItems::i18nIsSet() const
{
    return i18nIsSet_;
}

void QueryTemplatesItems::unseti18n()
{
    i18nIsSet_ = false;
}

}
}
}
}
}


