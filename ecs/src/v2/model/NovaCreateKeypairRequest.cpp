

#include "huaweicloud/ecs/v2/model/NovaCreateKeypairRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateKeypairRequest::NovaCreateKeypairRequest()
{
    openStackAPIVersion_ = "";
    openStackAPIVersionIsSet_ = false;
    bodyIsSet_ = false;
}

NovaCreateKeypairRequest::~NovaCreateKeypairRequest() = default;

void NovaCreateKeypairRequest::validate()
{
}

web::json::value NovaCreateKeypairRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openStackAPIVersionIsSet_) {
        val[utility::conversions::to_string_t("OpenStack-API-Version")] = ModelBase::toJson(openStackAPIVersion_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NovaCreateKeypairRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("OpenStack-API-Version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OpenStack-API-Version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenStackAPIVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NovaCreateKeypairRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NovaCreateKeypairRequest::getOpenStackAPIVersion() const
{
    return openStackAPIVersion_;
}

void NovaCreateKeypairRequest::setOpenStackAPIVersion(const std::string& value)
{
    openStackAPIVersion_ = value;
    openStackAPIVersionIsSet_ = true;
}

bool NovaCreateKeypairRequest::openStackAPIVersionIsSet() const
{
    return openStackAPIVersionIsSet_;
}

void NovaCreateKeypairRequest::unsetopenStackAPIVersion()
{
    openStackAPIVersionIsSet_ = false;
}

NovaCreateKeypairRequestBody NovaCreateKeypairRequest::getBody() const
{
    return body_;
}

void NovaCreateKeypairRequest::setBody(const NovaCreateKeypairRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NovaCreateKeypairRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NovaCreateKeypairRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


