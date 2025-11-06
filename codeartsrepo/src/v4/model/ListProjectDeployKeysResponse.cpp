

#include "huaweicloud/codeartsrepo/v4/model/ListProjectDeployKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectDeployKeysResponse::ListProjectDeployKeysResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListProjectDeployKeysResponse::~ListProjectDeployKeysResponse() = default;

void ListProjectDeployKeysResponse::validate()
{
}

web::json::value ListProjectDeployKeysResponse::toJson() const
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
bool ListProjectDeployKeysResponse::fromJson(const web::json::value& val)
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


std::vector<DeployKeyDto>& ListProjectDeployKeysResponse::getBody()
{
    return body_;
}

void ListProjectDeployKeysResponse::setBody(const std::vector<DeployKeyDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectDeployKeysResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectDeployKeysResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListProjectDeployKeysResponse::getXTotal() const
{
    return xTotal_;
}

void ListProjectDeployKeysResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListProjectDeployKeysResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListProjectDeployKeysResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


