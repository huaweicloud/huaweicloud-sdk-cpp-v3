

#include "huaweicloud/kms/v2/model/DeleteTrustedKeySpaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteTrustedKeySpaceRequest::DeleteTrustedKeySpaceRequest()
{
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
}

DeleteTrustedKeySpaceRequest::~DeleteTrustedKeySpaceRequest() = default;

void DeleteTrustedKeySpaceRequest::validate()
{
}

web::json::value DeleteTrustedKeySpaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }

    return val;
}
bool DeleteTrustedKeySpaceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteTrustedKeySpaceRequest::getKeyspaceId() const
{
    return keyspaceId_;
}

void DeleteTrustedKeySpaceRequest::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool DeleteTrustedKeySpaceRequest::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void DeleteTrustedKeySpaceRequest::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

}
}
}
}
}


