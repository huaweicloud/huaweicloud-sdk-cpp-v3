

#include "huaweicloud/cce/v3/model/ShowChartResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowChartResponse::ShowChartResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    values_ = "";
    valuesIsSet_ = false;
    translate_ = "";
    translateIsSet_ = false;
    instruction_ = "";
    instructionIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    iconUrl_ = "";
    iconUrlIsSet_ = false;
    public_ = false;
    publicIsSet_ = false;
    chartUrl_ = "";
    chartUrlIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
}

ShowChartResponse::~ShowChartResponse() = default;

void ShowChartResponse::validate()
{
}

web::json::value ShowChartResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(translateIsSet_) {
        val[utility::conversions::to_string_t("translate")] = ModelBase::toJson(translate_);
    }
    if(instructionIsSet_) {
        val[utility::conversions::to_string_t("instruction")] = ModelBase::toJson(instruction_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(iconUrlIsSet_) {
        val[utility::conversions::to_string_t("icon_url")] = ModelBase::toJson(iconUrl_);
    }
    if(publicIsSet_) {
        val[utility::conversions::to_string_t("public")] = ModelBase::toJson(public_);
    }
    if(chartUrlIsSet_) {
        val[utility::conversions::to_string_t("chart_url")] = ModelBase::toJson(chartUrl_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool ShowChartResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("translate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("translate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranslate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instruction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstruction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIconUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("chart_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string ShowChartResponse::getId() const
{
    return id_;
}

void ShowChartResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowChartResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowChartResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowChartResponse::getName() const
{
    return name_;
}

void ShowChartResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowChartResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowChartResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowChartResponse::getValues() const
{
    return values_;
}

void ShowChartResponse::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ShowChartResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ShowChartResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string ShowChartResponse::getTranslate() const
{
    return translate_;
}

void ShowChartResponse::setTranslate(const std::string& value)
{
    translate_ = value;
    translateIsSet_ = true;
}

bool ShowChartResponse::translateIsSet() const
{
    return translateIsSet_;
}

void ShowChartResponse::unsettranslate()
{
    translateIsSet_ = false;
}

std::string ShowChartResponse::getInstruction() const
{
    return instruction_;
}

void ShowChartResponse::setInstruction(const std::string& value)
{
    instruction_ = value;
    instructionIsSet_ = true;
}

bool ShowChartResponse::instructionIsSet() const
{
    return instructionIsSet_;
}

void ShowChartResponse::unsetinstruction()
{
    instructionIsSet_ = false;
}

std::string ShowChartResponse::getVersion() const
{
    return version_;
}

void ShowChartResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowChartResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowChartResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowChartResponse::getDescription() const
{
    return description_;
}

void ShowChartResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowChartResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowChartResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowChartResponse::getSource() const
{
    return source_;
}

void ShowChartResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ShowChartResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void ShowChartResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ShowChartResponse::getIconUrl() const
{
    return iconUrl_;
}

void ShowChartResponse::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool ShowChartResponse::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void ShowChartResponse::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

bool ShowChartResponse::isPublic() const
{
    return public_;
}

void ShowChartResponse::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool ShowChartResponse::publicIsSet() const
{
    return publicIsSet_;
}

void ShowChartResponse::unsetpublic()
{
    publicIsSet_ = false;
}

std::string ShowChartResponse::getChartUrl() const
{
    return chartUrl_;
}

void ShowChartResponse::setChartUrl(const std::string& value)
{
    chartUrl_ = value;
    chartUrlIsSet_ = true;
}

bool ShowChartResponse::chartUrlIsSet() const
{
    return chartUrlIsSet_;
}

void ShowChartResponse::unsetchartUrl()
{
    chartUrlIsSet_ = false;
}

std::string ShowChartResponse::getCreateAt() const
{
    return createAt_;
}

void ShowChartResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ShowChartResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ShowChartResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ShowChartResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowChartResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowChartResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowChartResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


