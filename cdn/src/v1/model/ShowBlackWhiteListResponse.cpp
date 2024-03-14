

#include "huaweicloud/cdn/v1/model/ShowBlackWhiteListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowBlackWhiteListResponse::ShowBlackWhiteListResponse()
{
    type_ = 0;
    typeIsSet_ = false;
    ipListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowBlackWhiteListResponse::~ShowBlackWhiteListResponse() = default;

void ShowBlackWhiteListResponse::validate()
{
}

web::json::value ShowBlackWhiteListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowBlackWhiteListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ShowBlackWhiteListResponse::getType() const
{
    return type_;
}

void ShowBlackWhiteListResponse::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowBlackWhiteListResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowBlackWhiteListResponse::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& ShowBlackWhiteListResponse::getIpList()
{
    return ipList_;
}

void ShowBlackWhiteListResponse::setIpList(const std::vector<std::string>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool ShowBlackWhiteListResponse::ipListIsSet() const
{
    return ipListIsSet_;
}

void ShowBlackWhiteListResponse::unsetipList()
{
    ipListIsSet_ = false;
}

std::string ShowBlackWhiteListResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowBlackWhiteListResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowBlackWhiteListResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowBlackWhiteListResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


