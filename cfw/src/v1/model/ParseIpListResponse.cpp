

#include "huaweicloud/cfw/v1/model/ParseIpListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ParseIpListResponse::ParseIpListResponse()
{
    excessIpIsSet_ = false;
    parsedSuccessIpIsSet_ = false;
}

ParseIpListResponse::~ParseIpListResponse() = default;

void ParseIpListResponse::validate()
{
}

web::json::value ParseIpListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(excessIpIsSet_) {
        val[utility::conversions::to_string_t("excess_ip")] = ModelBase::toJson(excessIp_);
    }
    if(parsedSuccessIpIsSet_) {
        val[utility::conversions::to_string_t("parsed_success_ip")] = ModelBase::toJson(parsedSuccessIp_);
    }

    return val;
}
bool ParseIpListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("excess_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excess_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcessIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parsed_success_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parsed_success_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParsedSuccessIp(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ParseIpListResponse::getExcessIp()
{
    return excessIp_;
}

void ParseIpListResponse::setExcessIp(const std::vector<std::string>& value)
{
    excessIp_ = value;
    excessIpIsSet_ = true;
}

bool ParseIpListResponse::excessIpIsSet() const
{
    return excessIpIsSet_;
}

void ParseIpListResponse::unsetexcessIp()
{
    excessIpIsSet_ = false;
}

std::vector<std::string>& ParseIpListResponse::getParsedSuccessIp()
{
    return parsedSuccessIp_;
}

void ParseIpListResponse::setParsedSuccessIp(const std::vector<std::string>& value)
{
    parsedSuccessIp_ = value;
    parsedSuccessIpIsSet_ = true;
}

bool ParseIpListResponse::parsedSuccessIpIsSet() const
{
    return parsedSuccessIpIsSet_;
}

void ParseIpListResponse::unsetparsedSuccessIp()
{
    parsedSuccessIpIsSet_ = false;
}

}
}
}
}
}


