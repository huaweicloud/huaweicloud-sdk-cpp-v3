

#include "huaweicloud/modelarts/v1/model/InputDataInfoResp_dataset.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputDataInfoResp_dataset::InputDataInfoResp_dataset()
{
    id_ = "";
    idIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    obsUrl_ = "";
    obsUrlIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

InputDataInfoResp_dataset::~InputDataInfoResp_dataset() = default;

void InputDataInfoResp_dataset::validate()
{
}

web::json::value InputDataInfoResp_dataset::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool InputDataInfoResp_dataset::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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
    return ok;
}


std::string InputDataInfoResp_dataset::getId() const
{
    return id_;
}

void InputDataInfoResp_dataset::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InputDataInfoResp_dataset::idIsSet() const
{
    return idIsSet_;
}

void InputDataInfoResp_dataset::unsetid()
{
    idIsSet_ = false;
}

std::string InputDataInfoResp_dataset::getVersionId() const
{
    return versionId_;
}

void InputDataInfoResp_dataset::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool InputDataInfoResp_dataset::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void InputDataInfoResp_dataset::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string InputDataInfoResp_dataset::getObsUrl() const
{
    return obsUrl_;
}

void InputDataInfoResp_dataset::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool InputDataInfoResp_dataset::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void InputDataInfoResp_dataset::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

std::string InputDataInfoResp_dataset::getServiceType() const
{
    return serviceType_;
}

void InputDataInfoResp_dataset::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool InputDataInfoResp_dataset::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void InputDataInfoResp_dataset::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string InputDataInfoResp_dataset::getName() const
{
    return name_;
}

void InputDataInfoResp_dataset::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InputDataInfoResp_dataset::nameIsSet() const
{
    return nameIsSet_;
}

void InputDataInfoResp_dataset::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


