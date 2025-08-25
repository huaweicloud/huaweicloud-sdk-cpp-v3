

#include "huaweicloud/cce/v3/model/ScaleNodePoolRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleNodePoolRequestBody::ScaleNodePoolRequestBody()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    specIsSet_ = false;
}

ScaleNodePoolRequestBody::~ScaleNodePoolRequestBody() = default;

void ScaleNodePoolRequestBody::validate()
{
}

web::json::value ScaleNodePoolRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool ScaleNodePoolRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ScaleNodePoolSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string ScaleNodePoolRequestBody::getKind() const
{
    return kind_;
}

void ScaleNodePoolRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ScaleNodePoolRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void ScaleNodePoolRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

std::string ScaleNodePoolRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void ScaleNodePoolRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ScaleNodePoolRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ScaleNodePoolRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

ScaleNodePoolSpec ScaleNodePoolRequestBody::getSpec() const
{
    return spec_;
}

void ScaleNodePoolRequestBody::setSpec(const ScaleNodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ScaleNodePoolRequestBody::specIsSet() const
{
    return specIsSet_;
}

void ScaleNodePoolRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


