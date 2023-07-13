

#include "huaweicloud/csms/v1/model/ListSecretTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretTagsRequest::ListSecretTagsRequest()
{
    secretId_ = "";
    secretIdIsSet_ = false;
}

ListSecretTagsRequest::~ListSecretTagsRequest() = default;

void ListSecretTagsRequest::validate()
{
}

web::json::value ListSecretTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIdIsSet_) {
        val[utility::conversions::to_string_t("secret_id")] = ModelBase::toJson(secretId_);
    }

    return val;
}

bool ListSecretTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretId(refVal);
        }
    }
    return ok;
}

std::string ListSecretTagsRequest::getSecretId() const
{
    return secretId_;
}

void ListSecretTagsRequest::setSecretId(const std::string& value)
{
    secretId_ = value;
    secretIdIsSet_ = true;
}

bool ListSecretTagsRequest::secretIdIsSet() const
{
    return secretIdIsSet_;
}

void ListSecretTagsRequest::unsetsecretId()
{
    secretIdIsSet_ = false;
}

}
}
}
}
}


