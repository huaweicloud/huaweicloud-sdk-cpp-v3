

#include "huaweicloud/modelarts/v1/model/EndpointsRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




EndpointsRes::EndpointsRes()
{
    devService_ = "";
    devServiceIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    keyPairNamesIsSet_ = false;
}

EndpointsRes::~EndpointsRes() = default;

void EndpointsRes::validate()
{
}

web::json::value EndpointsRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(devServiceIsSet_) {
        val[utility::conversions::to_string_t("dev_service")] = ModelBase::toJson(devService_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(keyPairNamesIsSet_) {
        val[utility::conversions::to_string_t("key_pair_names")] = ModelBase::toJson(keyPairNames_);
    }

    return val;
}
bool EndpointsRes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dev_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dev_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_pair_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_pair_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPairNames(refVal);
        }
    }
    return ok;
}


std::string EndpointsRes::getDevService() const
{
    return devService_;
}

void EndpointsRes::setDevService(const std::string& value)
{
    devService_ = value;
    devServiceIsSet_ = true;
}

bool EndpointsRes::devServiceIsSet() const
{
    return devServiceIsSet_;
}

void EndpointsRes::unsetdevService()
{
    devServiceIsSet_ = false;
}

std::string EndpointsRes::getService() const
{
    return service_;
}

void EndpointsRes::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool EndpointsRes::serviceIsSet() const
{
    return serviceIsSet_;
}

void EndpointsRes::unsetservice()
{
    serviceIsSet_ = false;
}

std::string EndpointsRes::getUri() const
{
    return uri_;
}

void EndpointsRes::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool EndpointsRes::uriIsSet() const
{
    return uriIsSet_;
}

void EndpointsRes::unseturi()
{
    uriIsSet_ = false;
}

std::vector<std::string>& EndpointsRes::getKeyPairNames()
{
    return keyPairNames_;
}

void EndpointsRes::setKeyPairNames(const std::vector<std::string>& value)
{
    keyPairNames_ = value;
    keyPairNamesIsSet_ = true;
}

bool EndpointsRes::keyPairNamesIsSet() const
{
    return keyPairNamesIsSet_;
}

void EndpointsRes::unsetkeyPairNames()
{
    keyPairNamesIsSet_ = false;
}

}
}
}
}
}


