

#include "huaweicloud/cce/v3/model/ChartResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ChartResp::ChartResp()
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

ChartResp::~ChartResp() = default;

void ChartResp::validate()
{
}

web::json::value ChartResp::toJson() const
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
bool ChartResp::fromJson(const web::json::value& val)
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


std::string ChartResp::getId() const
{
    return id_;
}

void ChartResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChartResp::idIsSet() const
{
    return idIsSet_;
}

void ChartResp::unsetid()
{
    idIsSet_ = false;
}

std::string ChartResp::getName() const
{
    return name_;
}

void ChartResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChartResp::nameIsSet() const
{
    return nameIsSet_;
}

void ChartResp::unsetname()
{
    nameIsSet_ = false;
}

std::string ChartResp::getValues() const
{
    return values_;
}

void ChartResp::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ChartResp::valuesIsSet() const
{
    return valuesIsSet_;
}

void ChartResp::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string ChartResp::getTranslate() const
{
    return translate_;
}

void ChartResp::setTranslate(const std::string& value)
{
    translate_ = value;
    translateIsSet_ = true;
}

bool ChartResp::translateIsSet() const
{
    return translateIsSet_;
}

void ChartResp::unsettranslate()
{
    translateIsSet_ = false;
}

std::string ChartResp::getInstruction() const
{
    return instruction_;
}

void ChartResp::setInstruction(const std::string& value)
{
    instruction_ = value;
    instructionIsSet_ = true;
}

bool ChartResp::instructionIsSet() const
{
    return instructionIsSet_;
}

void ChartResp::unsetinstruction()
{
    instructionIsSet_ = false;
}

std::string ChartResp::getVersion() const
{
    return version_;
}

void ChartResp::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ChartResp::versionIsSet() const
{
    return versionIsSet_;
}

void ChartResp::unsetversion()
{
    versionIsSet_ = false;
}

std::string ChartResp::getDescription() const
{
    return description_;
}

void ChartResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChartResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChartResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ChartResp::getSource() const
{
    return source_;
}

void ChartResp::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ChartResp::sourceIsSet() const
{
    return sourceIsSet_;
}

void ChartResp::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ChartResp::getIconUrl() const
{
    return iconUrl_;
}

void ChartResp::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool ChartResp::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void ChartResp::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

bool ChartResp::isPublic() const
{
    return public_;
}

void ChartResp::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool ChartResp::publicIsSet() const
{
    return publicIsSet_;
}

void ChartResp::unsetpublic()
{
    publicIsSet_ = false;
}

std::string ChartResp::getChartUrl() const
{
    return chartUrl_;
}

void ChartResp::setChartUrl(const std::string& value)
{
    chartUrl_ = value;
    chartUrlIsSet_ = true;
}

bool ChartResp::chartUrlIsSet() const
{
    return chartUrlIsSet_;
}

void ChartResp::unsetchartUrl()
{
    chartUrlIsSet_ = false;
}

std::string ChartResp::getCreateAt() const
{
    return createAt_;
}

void ChartResp::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ChartResp::createAtIsSet() const
{
    return createAtIsSet_;
}

void ChartResp::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ChartResp::getUpdateAt() const
{
    return updateAt_;
}

void ChartResp::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ChartResp::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ChartResp::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


