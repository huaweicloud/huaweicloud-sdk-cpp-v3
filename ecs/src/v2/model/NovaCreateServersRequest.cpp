

#include "huaweicloud/ecs/v2/model/NovaCreateServersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateServersRequest::NovaCreateServersRequest()
{
    openStackAPIVersion_ = "";
    openStackAPIVersionIsSet_ = false;
    bodyIsSet_ = false;
}

NovaCreateServersRequest::~NovaCreateServersRequest() = default;

void NovaCreateServersRequest::validate()
{
}

web::json::value NovaCreateServersRequest::toJson() const
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

bool NovaCreateServersRequest::fromJson(const web::json::value& val)
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
            NovaCreateServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NovaCreateServersRequest::getOpenStackAPIVersion() const
{
    return openStackAPIVersion_;
}

void NovaCreateServersRequest::setOpenStackAPIVersion(const std::string& value)
{
    openStackAPIVersion_ = value;
    openStackAPIVersionIsSet_ = true;
}

bool NovaCreateServersRequest::openStackAPIVersionIsSet() const
{
    return openStackAPIVersionIsSet_;
}

void NovaCreateServersRequest::unsetopenStackAPIVersion()
{
    openStackAPIVersionIsSet_ = false;
}

NovaCreateServersRequestBody NovaCreateServersRequest::getBody() const
{
    return body_;
}

void NovaCreateServersRequest::setBody(const NovaCreateServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NovaCreateServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NovaCreateServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


