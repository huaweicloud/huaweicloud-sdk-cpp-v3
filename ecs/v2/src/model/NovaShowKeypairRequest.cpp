

#include "huaweicloud/ecs/model/NovaShowKeypairRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowKeypairRequest::NovaShowKeypairRequest()
{
    keypairName_ = "";
    keypairNameIsSet_ = false;
    openStackAPIVersion_ = "";
    openStackAPIVersionIsSet_ = false;
}

NovaShowKeypairRequest::~NovaShowKeypairRequest() = default;

void NovaShowKeypairRequest::validate()
{
}

web::json::value NovaShowKeypairRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keypairNameIsSet_) {
        val[utility::conversions::to_string_t("keypair_name")] = ModelBase::toJson(keypairName_);
    }
    if(openStackAPIVersionIsSet_) {
        val[utility::conversions::to_string_t("OpenStack-API-Version")] = ModelBase::toJson(openStackAPIVersion_);
    }

    return val;
}

bool NovaShowKeypairRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keypair_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keypair_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeypairName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OpenStack-API-Version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OpenStack-API-Version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenStackAPIVersion(refVal);
        }
    }
    return ok;
}


std::string NovaShowKeypairRequest::getKeypairName() const
{
    return keypairName_;
}

void NovaShowKeypairRequest::setKeypairName(const std::string& value)
{
    keypairName_ = value;
    keypairNameIsSet_ = true;
}

bool NovaShowKeypairRequest::keypairNameIsSet() const
{
    return keypairNameIsSet_;
}

void NovaShowKeypairRequest::unsetkeypairName()
{
    keypairNameIsSet_ = false;
}

std::string NovaShowKeypairRequest::getOpenStackAPIVersion() const
{
    return openStackAPIVersion_;
}

void NovaShowKeypairRequest::setOpenStackAPIVersion(const std::string& value)
{
    openStackAPIVersion_ = value;
    openStackAPIVersionIsSet_ = true;
}

bool NovaShowKeypairRequest::openStackAPIVersionIsSet() const
{
    return openStackAPIVersionIsSet_;
}

void NovaShowKeypairRequest::unsetopenStackAPIVersion()
{
    openStackAPIVersionIsSet_ = false;
}

}
}
}
}
}


