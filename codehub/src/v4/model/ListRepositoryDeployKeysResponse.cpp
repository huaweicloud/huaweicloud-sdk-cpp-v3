

#include "huaweicloud/codehub/v4/model/ListRepositoryDeployKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryDeployKeysResponse::ListRepositoryDeployKeysResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryDeployKeysResponse::~ListRepositoryDeployKeysResponse() = default;

void ListRepositoryDeployKeysResponse::validate()
{
}

web::json::value ListRepositoryDeployKeysResponse::toJson() const
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
bool ListRepositoryDeployKeysResponse::fromJson(const web::json::value& val)
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


std::vector<DeployKeyDto>& ListRepositoryDeployKeysResponse::getBody()
{
    return body_;
}

void ListRepositoryDeployKeysResponse::setBody(const std::vector<DeployKeyDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryDeployKeysResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryDeployKeysResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryDeployKeysResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryDeployKeysResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryDeployKeysResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryDeployKeysResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


