

#include "huaweicloud/eip/v3/model/ShowPublicipPoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowPublicipPoolResponse::ShowPublicipPoolResponse()
{
    publicipPoolIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowPublicipPoolResponse::~ShowPublicipPoolResponse() = default;

void ShowPublicipPoolResponse::validate()
{
}

web::json::value ShowPublicipPoolResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipPoolIsSet_) {
        val[utility::conversions::to_string_t("publicip_pool")] = ModelBase::toJson(publicipPool_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ShowPublicipPoolResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_pool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_pool"));
        if(!fieldValue.is_null())
        {
            PublicipPoolShowResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


PublicipPoolShowResp ShowPublicipPoolResponse::getPublicipPool() const
{
    return publicipPool_;
}

void ShowPublicipPoolResponse::setPublicipPool(const PublicipPoolShowResp& value)
{
    publicipPool_ = value;
    publicipPoolIsSet_ = true;
}

bool ShowPublicipPoolResponse::publicipPoolIsSet() const
{
    return publicipPoolIsSet_;
}

void ShowPublicipPoolResponse::unsetpublicipPool()
{
    publicipPoolIsSet_ = false;
}

std::string ShowPublicipPoolResponse::getRequestId() const
{
    return requestId_;
}

void ShowPublicipPoolResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowPublicipPoolResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowPublicipPoolResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


