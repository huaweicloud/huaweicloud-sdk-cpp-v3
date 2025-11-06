

#include "huaweicloud/codeartsrepo/v4/model/ListGroupDeployKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupDeployKeysResponse::ListGroupDeployKeysResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListGroupDeployKeysResponse::~ListGroupDeployKeysResponse() = default;

void ListGroupDeployKeysResponse::validate()
{
}

web::json::value ListGroupDeployKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListGroupDeployKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<DeployKeyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<DeployKeyDto>& ListGroupDeployKeysResponse::getBody()
{
    return body_;
}

void ListGroupDeployKeysResponse::setBody(const std::vector<DeployKeyDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupDeployKeysResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupDeployKeysResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListGroupDeployKeysResponse::getXTotal() const
{
    return xTotal_;
}

void ListGroupDeployKeysResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListGroupDeployKeysResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListGroupDeployKeysResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


