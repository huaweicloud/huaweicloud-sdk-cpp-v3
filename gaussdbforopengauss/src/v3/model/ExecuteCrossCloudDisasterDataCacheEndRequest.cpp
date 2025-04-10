

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheEndRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterDataCacheEndRequest::ExecuteCrossCloudDisasterDataCacheEndRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteCrossCloudDisasterDataCacheEndRequest::~ExecuteCrossCloudDisasterDataCacheEndRequest() = default;

void ExecuteCrossCloudDisasterDataCacheEndRequest::validate()
{
}

web::json::value ExecuteCrossCloudDisasterDataCacheEndRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterDataCacheEndRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DisasterRecoverStopXlogKeepRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteCrossCloudDisasterDataCacheEndRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteCrossCloudDisasterDataCacheEndRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheEndRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheEndRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteCrossCloudDisasterDataCacheEndRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteCrossCloudDisasterDataCacheEndRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheEndRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheEndRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DisasterRecoverStopXlogKeepRequestBody ExecuteCrossCloudDisasterDataCacheEndRequest::getBody() const
{
    return body_;
}

void ExecuteCrossCloudDisasterDataCacheEndRequest::setBody(const DisasterRecoverStopXlogKeepRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheEndRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheEndRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


