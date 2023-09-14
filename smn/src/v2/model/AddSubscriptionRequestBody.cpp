

#include "huaweicloud/smn/v2/model/AddSubscriptionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AddSubscriptionRequestBody::AddSubscriptionRequestBody()
{
    protocol_ = "";
    protocolIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    extensionIsSet_ = false;
}

AddSubscriptionRequestBody::~AddSubscriptionRequestBody() = default;

void AddSubscriptionRequestBody::validate()
{
}

web::json::value AddSubscriptionRequestBody::toJson() const
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

bool AddSubscriptionRequestBody::fromJson(const web::json::value& val)
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

std::string AddSubscriptionRequestBody::getProtocol() const
{
    return protocol_;
}

void AddSubscriptionRequestBody::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool AddSubscriptionRequestBody::protocolIsSet() const
{
    return protocolIsSet_;
}

void AddSubscriptionRequestBody::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string AddSubscriptionRequestBody::getEndpoint() const
{
    return endpoint_;
}

void AddSubscriptionRequestBody::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool AddSubscriptionRequestBody::endpointIsSet() const
{
    return endpointIsSet_;
}

void AddSubscriptionRequestBody::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string AddSubscriptionRequestBody::getRemark() const
{
    return remark_;
}

void AddSubscriptionRequestBody::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool AddSubscriptionRequestBody::remarkIsSet() const
{
    return remarkIsSet_;
}

void AddSubscriptionRequestBody::unsetremark()
{
    remarkIsSet_ = false;
}

SubscriptionExtension AddSubscriptionRequestBody::getExtension() const
{
    return extension_;
}

void AddSubscriptionRequestBody::setExtension(const SubscriptionExtension& value)
{
    extension_ = value;
    extensionIsSet_ = true;
}

bool AddSubscriptionRequestBody::extensionIsSet() const
{
    return extensionIsSet_;
}

void AddSubscriptionRequestBody::unsetextension()
{
    extensionIsSet_ = false;
}

}
}
}
}
}


