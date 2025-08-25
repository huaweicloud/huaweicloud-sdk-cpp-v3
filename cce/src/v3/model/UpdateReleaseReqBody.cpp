

#include "huaweicloud/cce/v3/model/UpdateReleaseReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateReleaseReqBody::UpdateReleaseReqBody()
{
    chartId_ = "";
    chartIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    parametersIsSet_ = false;
    valuesIsSet_ = false;
}

UpdateReleaseReqBody::~UpdateReleaseReqBody() = default;

void UpdateReleaseReqBody::validate()
{
}

web::json::value UpdateReleaseReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool UpdateReleaseReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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


std::string UpdateReleaseReqBody::getChartId() const
{
    return chartId_;
}

void UpdateReleaseReqBody::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool UpdateReleaseReqBody::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void UpdateReleaseReqBody::unsetchartId()
{
    chartIdIsSet_ = false;
}

std::string UpdateReleaseReqBody::getAction() const
{
    return action_;
}

void UpdateReleaseReqBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateReleaseReqBody::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateReleaseReqBody::unsetaction()
{
    actionIsSet_ = false;
}

ReleaseReqBodyParams UpdateReleaseReqBody::getParameters() const
{
    return parameters_;
}

void UpdateReleaseReqBody::setParameters(const ReleaseReqBodyParams& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool UpdateReleaseReqBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void UpdateReleaseReqBody::unsetparameters()
{
    parametersIsSet_ = false;
}

CreateReleaseReqBody_values UpdateReleaseReqBody::getValues() const
{
    return values_;
}

void UpdateReleaseReqBody::setValues(const CreateReleaseReqBody_values& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool UpdateReleaseReqBody::valuesIsSet() const
{
    return valuesIsSet_;
}

void UpdateReleaseReqBody::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


