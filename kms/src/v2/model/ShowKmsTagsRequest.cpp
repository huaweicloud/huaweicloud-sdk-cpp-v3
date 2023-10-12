

#include "huaweicloud/kms/v2/model/ShowKmsTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKmsTagsRequest::ShowKmsTagsRequest()
{
    keyId_ = "";
    keyIdIsSet_ = false;
}

ShowKmsTagsRequest::~ShowKmsTagsRequest() = default;

void ShowKmsTagsRequest::validate()
{
}

web::json::value ShowKmsTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool ShowKmsTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ShowKmsTagsRequest::getKeyId() const
{
    return keyId_;
}

void ShowKmsTagsRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ShowKmsTagsRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ShowKmsTagsRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


