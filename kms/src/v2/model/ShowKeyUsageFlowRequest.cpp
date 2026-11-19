

#include "huaweicloud/kms/v2/model/ShowKeyUsageFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyUsageFlowRequest::ShowKeyUsageFlowRequest()
{
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
}

ShowKeyUsageFlowRequest::~ShowKeyUsageFlowRequest() = default;

void ShowKeyUsageFlowRequest::validate()
{
}

web::json::value ShowKeyUsageFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool ShowKeyUsageFlowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    return ok;
}


std::string ShowKeyUsageFlowRequest::getKeyspaceId() const
{
    return keyspaceId_;
}

void ShowKeyUsageFlowRequest::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool ShowKeyUsageFlowRequest::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void ShowKeyUsageFlowRequest::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

std::string ShowKeyUsageFlowRequest::getKeyId() const
{
    return keyId_;
}

void ShowKeyUsageFlowRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ShowKeyUsageFlowRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ShowKeyUsageFlowRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


