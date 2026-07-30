

#include "huaweicloud/modelarts/v1/model/EndpointsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




EndpointsReq::EndpointsReq()
{
    service_ = "";
    serviceIsSet_ = false;
    keyPairNamesIsSet_ = false;
}

EndpointsReq::~EndpointsReq() = default;

void EndpointsReq::validate()
{
}

web::json::value EndpointsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(keyPairNamesIsSet_) {
        val[utility::conversions::to_string_t("key_pair_names")] = ModelBase::toJson(keyPairNames_);
    }

    return val;
}
bool EndpointsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
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


std::string EndpointsReq::getService() const
{
    return service_;
}

void EndpointsReq::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool EndpointsReq::serviceIsSet() const
{
    return serviceIsSet_;
}

void EndpointsReq::unsetservice()
{
    serviceIsSet_ = false;
}

std::vector<std::string>& EndpointsReq::getKeyPairNames()
{
    return keyPairNames_;
}

void EndpointsReq::setKeyPairNames(const std::vector<std::string>& value)
{
    keyPairNames_ = value;
    keyPairNamesIsSet_ = true;
}

bool EndpointsReq::keyPairNamesIsSet() const
{
    return keyPairNamesIsSet_;
}

void EndpointsReq::unsetkeyPairNames()
{
    keyPairNamesIsSet_ = false;
}

}
}
}
}
}


