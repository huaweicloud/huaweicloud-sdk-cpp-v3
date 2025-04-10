

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheStartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterDataCacheStartRequest::ExecuteCrossCloudDisasterDataCacheStartRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteCrossCloudDisasterDataCacheStartRequest::~ExecuteCrossCloudDisasterDataCacheStartRequest() = default;

void ExecuteCrossCloudDisasterDataCacheStartRequest::validate()
{
}

web::json::value ExecuteCrossCloudDisasterDataCacheStartRequest::toJson() const
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
bool ExecuteCrossCloudDisasterDataCacheStartRequest::fromJson(const web::json::value& val)
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
            DisasterRecoverStartXlogKeepRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteCrossCloudDisasterDataCacheStartRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteCrossCloudDisasterDataCacheStartRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheStartRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheStartRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteCrossCloudDisasterDataCacheStartRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteCrossCloudDisasterDataCacheStartRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheStartRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheStartRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DisasterRecoverStartXlogKeepRequestBody ExecuteCrossCloudDisasterDataCacheStartRequest::getBody() const
{
    return body_;
}

void ExecuteCrossCloudDisasterDataCacheStartRequest::setBody(const DisasterRecoverStartXlogKeepRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheStartRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheStartRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


