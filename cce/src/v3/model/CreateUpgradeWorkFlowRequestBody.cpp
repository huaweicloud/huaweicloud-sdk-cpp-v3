

#include "huaweicloud/cce/v3/model/CreateUpgradeWorkFlowRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateUpgradeWorkFlowRequestBody::CreateUpgradeWorkFlowRequestBody()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    specIsSet_ = false;
}

CreateUpgradeWorkFlowRequestBody::~CreateUpgradeWorkFlowRequestBody() = default;

void CreateUpgradeWorkFlowRequestBody::validate()
{
}

web::json::value CreateUpgradeWorkFlowRequestBody::toJson() const
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
bool CreateUpgradeWorkFlowRequestBody::fromJson(const web::json::value& val)
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
            WorkFlowSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string CreateUpgradeWorkFlowRequestBody::getKind() const
{
    return kind_;
}

void CreateUpgradeWorkFlowRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateUpgradeWorkFlowRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void CreateUpgradeWorkFlowRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateUpgradeWorkFlowRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void CreateUpgradeWorkFlowRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateUpgradeWorkFlowRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateUpgradeWorkFlowRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

WorkFlowSpec CreateUpgradeWorkFlowRequestBody::getSpec() const
{
    return spec_;
}

void CreateUpgradeWorkFlowRequestBody::setSpec(const WorkFlowSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateUpgradeWorkFlowRequestBody::specIsSet() const
{
    return specIsSet_;
}

void CreateUpgradeWorkFlowRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


