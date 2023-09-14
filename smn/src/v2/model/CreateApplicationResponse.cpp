

#include "huaweicloud/smn/v2/model/CreateApplicationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateApplicationResponse::CreateApplicationResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

CreateApplicationResponse::~CreateApplicationResponse() = default;

void CreateApplicationResponse::validate()
{
}

web::json::value CreateApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }

    return val;
}

bool CreateApplicationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    return ok;
}

std::string CreateApplicationResponse::getRequestId() const
{
    return requestId_;
}

void CreateApplicationResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateApplicationResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateApplicationResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateApplicationResponse::getApplicationUrn() const
{
    return applicationUrn_;
}

void CreateApplicationResponse::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool CreateApplicationResponse::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void CreateApplicationResponse::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

std::string CreateApplicationResponse::getApplicationId() const
{
    return applicationId_;
}

void CreateApplicationResponse::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool CreateApplicationResponse::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void CreateApplicationResponse::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


