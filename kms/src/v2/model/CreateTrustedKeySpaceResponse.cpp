

#include "huaweicloud/kms/v2/model/CreateTrustedKeySpaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateTrustedKeySpaceResponse::CreateTrustedKeySpaceResponse()
{
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
}

CreateTrustedKeySpaceResponse::~CreateTrustedKeySpaceResponse() = default;

void CreateTrustedKeySpaceResponse::validate()
{
}

web::json::value CreateTrustedKeySpaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }

    return val;
}
bool CreateTrustedKeySpaceResponse::fromJson(const web::json::value& val)
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


std::string CreateTrustedKeySpaceResponse::getKeyspaceId() const
{
    return keyspaceId_;
}

void CreateTrustedKeySpaceResponse::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool CreateTrustedKeySpaceResponse::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void CreateTrustedKeySpaceResponse::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

}
}
}
}
}


