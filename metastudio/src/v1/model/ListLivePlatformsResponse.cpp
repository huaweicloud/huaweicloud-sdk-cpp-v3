

#include "huaweicloud/metastudio/v1/model/ListLivePlatformsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListLivePlatformsResponse::ListLivePlatformsResponse()
{
    livePlatformsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListLivePlatformsResponse::~ListLivePlatformsResponse() = default;

void ListLivePlatformsResponse::validate()
{
}

web::json::value ListLivePlatformsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(livePlatformsIsSet_) {
        val[utility::conversions::to_string_t("live_platforms")] = ModelBase::toJson(livePlatforms_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListLivePlatformsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("live_platforms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_platforms"));
        if(!fieldValue.is_null())
        {
            std::vector<LivePlatformInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLivePlatforms(refVal);
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


std::vector<LivePlatformInfo>& ListLivePlatformsResponse::getLivePlatforms()
{
    return livePlatforms_;
}

void ListLivePlatformsResponse::setLivePlatforms(const std::vector<LivePlatformInfo>& value)
{
    livePlatforms_ = value;
    livePlatformsIsSet_ = true;
}

bool ListLivePlatformsResponse::livePlatformsIsSet() const
{
    return livePlatformsIsSet_;
}

void ListLivePlatformsResponse::unsetlivePlatforms()
{
    livePlatformsIsSet_ = false;
}

std::string ListLivePlatformsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListLivePlatformsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListLivePlatformsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListLivePlatformsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


