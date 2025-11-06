

#include "huaweicloud/codeartsrepo/v4/model/ListFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListFilesResponse::ListFilesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListFilesResponse::~ListFilesResponse() = default;

void ListFilesResponse::validate()
{
}

web::json::value ListFilesResponse::toJson() const
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
bool ListFilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
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


std::vector<std::string>& ListFilesResponse::getBody()
{
    return body_;
}

void ListFilesResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListFilesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListFilesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListFilesResponse::getXTotal() const
{
    return xTotal_;
}

void ListFilesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListFilesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListFilesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


