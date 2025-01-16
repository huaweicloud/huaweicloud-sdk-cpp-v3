

#include "huaweicloud/smn/v2/model/BatchAddSubscriptionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchAddSubscriptionsRequestBody::BatchAddSubscriptionsRequestBody()
{
    protocol_ = "";
    protocolIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    extensionIsSet_ = false;
}

BatchAddSubscriptionsRequestBody::~BatchAddSubscriptionsRequestBody() = default;

void BatchAddSubscriptionsRequestBody::validate()
{
}

web::json::value BatchAddSubscriptionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(extensionIsSet_) {
        val[utility::conversions::to_string_t("extension")] = ModelBase::toJson(extension_);
    }

    return val;
}
bool BatchAddSubscriptionsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension"));
        if(!fieldValue.is_null())
        {
            SubscriptionExtension refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtension(refVal);
        }
    }
    return ok;
}


std::string BatchAddSubscriptionsRequestBody::getProtocol() const
{
    return protocol_;
}

void BatchAddSubscriptionsRequestBody::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool BatchAddSubscriptionsRequestBody::protocolIsSet() const
{
    return protocolIsSet_;
}

void BatchAddSubscriptionsRequestBody::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string BatchAddSubscriptionsRequestBody::getEndpoint() const
{
    return endpoint_;
}

void BatchAddSubscriptionsRequestBody::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool BatchAddSubscriptionsRequestBody::endpointIsSet() const
{
    return endpointIsSet_;
}

void BatchAddSubscriptionsRequestBody::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string BatchAddSubscriptionsRequestBody::getRemark() const
{
    return remark_;
}

void BatchAddSubscriptionsRequestBody::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool BatchAddSubscriptionsRequestBody::remarkIsSet() const
{
    return remarkIsSet_;
}

void BatchAddSubscriptionsRequestBody::unsetremark()
{
    remarkIsSet_ = false;
}

SubscriptionExtension BatchAddSubscriptionsRequestBody::getExtension() const
{
    return extension_;
}

void BatchAddSubscriptionsRequestBody::setExtension(const SubscriptionExtension& value)
{
    extension_ = value;
    extensionIsSet_ = true;
}

bool BatchAddSubscriptionsRequestBody::extensionIsSet() const
{
    return extensionIsSet_;
}

void BatchAddSubscriptionsRequestBody::unsetextension()
{
    extensionIsSet_ = false;
}

}
}
}
}
}


