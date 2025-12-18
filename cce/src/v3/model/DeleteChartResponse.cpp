

#include "huaweicloud/cce/v3/model/DeleteChartResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteChartResponse::DeleteChartResponse()
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

DeleteChartResponse::~DeleteChartResponse() = default;

void DeleteChartResponse::validate()
{
}

web::json::value DeleteChartResponse::toJson() const
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
bool DeleteChartResponse::fromJson(const web::json::value& val)
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


std::string DeleteChartResponse::getId() const
{
    return id_;
}

void DeleteChartResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteChartResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteChartResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteChartResponse::getName() const
{
    return name_;
}

void DeleteChartResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteChartResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteChartResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteChartResponse::getValues() const
{
    return values_;
}

void DeleteChartResponse::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool DeleteChartResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void DeleteChartResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string DeleteChartResponse::getTranslate() const
{
    return translate_;
}

void DeleteChartResponse::setTranslate(const std::string& value)
{
    translate_ = value;
    translateIsSet_ = true;
}

bool DeleteChartResponse::translateIsSet() const
{
    return translateIsSet_;
}

void DeleteChartResponse::unsettranslate()
{
    translateIsSet_ = false;
}

std::string DeleteChartResponse::getInstruction() const
{
    return instruction_;
}

void DeleteChartResponse::setInstruction(const std::string& value)
{
    instruction_ = value;
    instructionIsSet_ = true;
}

bool DeleteChartResponse::instructionIsSet() const
{
    return instructionIsSet_;
}

void DeleteChartResponse::unsetinstruction()
{
    instructionIsSet_ = false;
}

std::string DeleteChartResponse::getVersion() const
{
    return version_;
}

void DeleteChartResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DeleteChartResponse::versionIsSet() const
{
    return versionIsSet_;
}

void DeleteChartResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string DeleteChartResponse::getDescription() const
{
    return description_;
}

void DeleteChartResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeleteChartResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeleteChartResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DeleteChartResponse::getSource() const
{
    return source_;
}

void DeleteChartResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool DeleteChartResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void DeleteChartResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string DeleteChartResponse::getIconUrl() const
{
    return iconUrl_;
}

void DeleteChartResponse::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool DeleteChartResponse::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void DeleteChartResponse::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

bool DeleteChartResponse::isPublic() const
{
    return public_;
}

void DeleteChartResponse::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool DeleteChartResponse::publicIsSet() const
{
    return publicIsSet_;
}

void DeleteChartResponse::unsetpublic()
{
    publicIsSet_ = false;
}

std::string DeleteChartResponse::getChartUrl() const
{
    return chartUrl_;
}

void DeleteChartResponse::setChartUrl(const std::string& value)
{
    chartUrl_ = value;
    chartUrlIsSet_ = true;
}

bool DeleteChartResponse::chartUrlIsSet() const
{
    return chartUrlIsSet_;
}

void DeleteChartResponse::unsetchartUrl()
{
    chartUrlIsSet_ = false;
}

std::string DeleteChartResponse::getCreateAt() const
{
    return createAt_;
}

void DeleteChartResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool DeleteChartResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void DeleteChartResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string DeleteChartResponse::getUpdateAt() const
{
    return updateAt_;
}

void DeleteChartResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool DeleteChartResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void DeleteChartResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


