

#include "huaweicloud/cce/v3/model/CreateReleaseReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateReleaseReqBody::CreateReleaseReqBody()
{
    chartId_ = "";
    chartIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    parametersIsSet_ = false;
    valuesIsSet_ = false;
}

CreateReleaseReqBody::~CreateReleaseReqBody() = default;

void CreateReleaseReqBody::validate()
{
}

web::json::value CreateReleaseReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool CreateReleaseReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chart_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            ReleaseReqBodyParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            CreateReleaseReqBody_values refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string CreateReleaseReqBody::getChartId() const
{
    return chartId_;
}

void CreateReleaseReqBody::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool CreateReleaseReqBody::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void CreateReleaseReqBody::unsetchartId()
{
    chartIdIsSet_ = false;
}

std::string CreateReleaseReqBody::getDescription() const
{
    return description_;
}

void CreateReleaseReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateReleaseReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateReleaseReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateReleaseReqBody::getName() const
{
    return name_;
}

void CreateReleaseReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateReleaseReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateReleaseReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateReleaseReqBody::getNamespace() const
{
    return namespace_;
}

void CreateReleaseReqBody::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreateReleaseReqBody::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreateReleaseReqBody::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreateReleaseReqBody::getVersion() const
{
    return version_;
}

void CreateReleaseReqBody::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateReleaseReqBody::versionIsSet() const
{
    return versionIsSet_;
}

void CreateReleaseReqBody::unsetversion()
{
    versionIsSet_ = false;
}

ReleaseReqBodyParams CreateReleaseReqBody::getParameters() const
{
    return parameters_;
}

void CreateReleaseReqBody::setParameters(const ReleaseReqBodyParams& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateReleaseReqBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateReleaseReqBody::unsetparameters()
{
    parametersIsSet_ = false;
}

CreateReleaseReqBody_values CreateReleaseReqBody::getValues() const
{
    return values_;
}

void CreateReleaseReqBody::setValues(const CreateReleaseReqBody_values& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool CreateReleaseReqBody::valuesIsSet() const
{
    return valuesIsSet_;
}

void CreateReleaseReqBody::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


