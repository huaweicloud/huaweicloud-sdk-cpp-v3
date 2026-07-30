

#include "huaweicloud/modelarts/v1/model/Metrics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Metrics::Metrics()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    scheme_ = "";
    schemeIsSet_ = false;
    metricsSource_ = "";
    metricsSourceIsSet_ = false;
}

Metrics::~Metrics() = default;

void Metrics::validate()
{
}

web::json::value Metrics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(schemeIsSet_) {
        val[utility::conversions::to_string_t("scheme")] = ModelBase::toJson(scheme_);
    }
    if(metricsSourceIsSet_) {
        val[utility::conversions::to_string_t("metrics_source")] = ModelBase::toJson(metricsSource_);
    }

    return val;
}
bool Metrics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheme"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheme"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheme(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metrics_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricsSource(refVal);
        }
    }
    return ok;
}


std::string Metrics::getEndpoint() const
{
    return endpoint_;
}

void Metrics::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool Metrics::endpointIsSet() const
{
    return endpointIsSet_;
}

void Metrics::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string Metrics::getPath() const
{
    return path_;
}

void Metrics::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool Metrics::pathIsSet() const
{
    return pathIsSet_;
}

void Metrics::unsetpath()
{
    pathIsSet_ = false;
}

std::string Metrics::getPort() const
{
    return port_;
}

void Metrics::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool Metrics::portIsSet() const
{
    return portIsSet_;
}

void Metrics::unsetport()
{
    portIsSet_ = false;
}

std::string Metrics::getScheme() const
{
    return scheme_;
}

void Metrics::setScheme(const std::string& value)
{
    scheme_ = value;
    schemeIsSet_ = true;
}

bool Metrics::schemeIsSet() const
{
    return schemeIsSet_;
}

void Metrics::unsetscheme()
{
    schemeIsSet_ = false;
}

std::string Metrics::getMetricsSource() const
{
    return metricsSource_;
}

void Metrics::setMetricsSource(const std::string& value)
{
    metricsSource_ = value;
    metricsSourceIsSet_ = true;
}

bool Metrics::metricsSourceIsSet() const
{
    return metricsSourceIsSet_;
}

void Metrics::unsetmetricsSource()
{
    metricsSourceIsSet_ = false;
}

}
}
}
}
}


