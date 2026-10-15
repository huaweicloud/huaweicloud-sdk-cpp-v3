

#include "huaweicloud/drs/v5/model/ReplaySourceConfigResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplaySourceConfigResp::ReplaySourceConfigResp()
{
    engineType_ = "";
    engineTypeIsSet_ = false;
    sourceEndpointType_ = "";
    sourceEndpointTypeIsSet_ = false;
    sourceDbOrigin_ = "";
    sourceDbOriginIsSet_ = false;
    trafficSource_ = "";
    trafficSourceIsSet_ = false;
    supportTrafficTypesIsSet_ = false;
    supportOsTypesIsSet_ = false;
    supportMirrorDatabaseTypesIsSet_ = false;
}

ReplaySourceConfigResp::~ReplaySourceConfigResp() = default;

void ReplaySourceConfigResp::validate()
{
}

web::json::value ReplaySourceConfigResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(sourceEndpointTypeIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint_type")] = ModelBase::toJson(sourceEndpointType_);
    }
    if(sourceDbOriginIsSet_) {
        val[utility::conversions::to_string_t("source_db_origin")] = ModelBase::toJson(sourceDbOrigin_);
    }
    if(trafficSourceIsSet_) {
        val[utility::conversions::to_string_t("traffic_source")] = ModelBase::toJson(trafficSource_);
    }
    if(supportTrafficTypesIsSet_) {
        val[utility::conversions::to_string_t("support_traffic_types")] = ModelBase::toJson(supportTrafficTypes_);
    }
    if(supportOsTypesIsSet_) {
        val[utility::conversions::to_string_t("support_os_types")] = ModelBase::toJson(supportOsTypes_);
    }
    if(supportMirrorDatabaseTypesIsSet_) {
        val[utility::conversions::to_string_t("support_mirror_database_types")] = ModelBase::toJson(supportMirrorDatabaseTypes_);
    }

    return val;
}
bool ReplaySourceConfigResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpointType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db_origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_traffic_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_traffic_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportTrafficTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_os_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_os_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportOsTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_mirror_database_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_mirror_database_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportMirrorDatabaseTypes(refVal);
        }
    }
    return ok;
}


std::string ReplaySourceConfigResp::getEngineType() const
{
    return engineType_;
}

void ReplaySourceConfigResp::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ReplaySourceConfigResp::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ReplaySourceConfigResp::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ReplaySourceConfigResp::getSourceEndpointType() const
{
    return sourceEndpointType_;
}

void ReplaySourceConfigResp::setSourceEndpointType(const std::string& value)
{
    sourceEndpointType_ = value;
    sourceEndpointTypeIsSet_ = true;
}

bool ReplaySourceConfigResp::sourceEndpointTypeIsSet() const
{
    return sourceEndpointTypeIsSet_;
}

void ReplaySourceConfigResp::unsetsourceEndpointType()
{
    sourceEndpointTypeIsSet_ = false;
}

std::string ReplaySourceConfigResp::getSourceDbOrigin() const
{
    return sourceDbOrigin_;
}

void ReplaySourceConfigResp::setSourceDbOrigin(const std::string& value)
{
    sourceDbOrigin_ = value;
    sourceDbOriginIsSet_ = true;
}

bool ReplaySourceConfigResp::sourceDbOriginIsSet() const
{
    return sourceDbOriginIsSet_;
}

void ReplaySourceConfigResp::unsetsourceDbOrigin()
{
    sourceDbOriginIsSet_ = false;
}

std::string ReplaySourceConfigResp::getTrafficSource() const
{
    return trafficSource_;
}

void ReplaySourceConfigResp::setTrafficSource(const std::string& value)
{
    trafficSource_ = value;
    trafficSourceIsSet_ = true;
}

bool ReplaySourceConfigResp::trafficSourceIsSet() const
{
    return trafficSourceIsSet_;
}

void ReplaySourceConfigResp::unsettrafficSource()
{
    trafficSourceIsSet_ = false;
}

std::vector<std::string>& ReplaySourceConfigResp::getSupportTrafficTypes()
{
    return supportTrafficTypes_;
}

void ReplaySourceConfigResp::setSupportTrafficTypes(const std::vector<std::string>& value)
{
    supportTrafficTypes_ = value;
    supportTrafficTypesIsSet_ = true;
}

bool ReplaySourceConfigResp::supportTrafficTypesIsSet() const
{
    return supportTrafficTypesIsSet_;
}

void ReplaySourceConfigResp::unsetsupportTrafficTypes()
{
    supportTrafficTypesIsSet_ = false;
}

std::vector<std::string>& ReplaySourceConfigResp::getSupportOsTypes()
{
    return supportOsTypes_;
}

void ReplaySourceConfigResp::setSupportOsTypes(const std::vector<std::string>& value)
{
    supportOsTypes_ = value;
    supportOsTypesIsSet_ = true;
}

bool ReplaySourceConfigResp::supportOsTypesIsSet() const
{
    return supportOsTypesIsSet_;
}

void ReplaySourceConfigResp::unsetsupportOsTypes()
{
    supportOsTypesIsSet_ = false;
}

std::vector<std::string>& ReplaySourceConfigResp::getSupportMirrorDatabaseTypes()
{
    return supportMirrorDatabaseTypes_;
}

void ReplaySourceConfigResp::setSupportMirrorDatabaseTypes(const std::vector<std::string>& value)
{
    supportMirrorDatabaseTypes_ = value;
    supportMirrorDatabaseTypesIsSet_ = true;
}

bool ReplaySourceConfigResp::supportMirrorDatabaseTypesIsSet() const
{
    return supportMirrorDatabaseTypesIsSet_;
}

void ReplaySourceConfigResp::unsetsupportMirrorDatabaseTypes()
{
    supportMirrorDatabaseTypesIsSet_ = false;
}

}
}
}
}
}


