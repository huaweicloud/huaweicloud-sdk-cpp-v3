

#include "huaweicloud/sdrs/v1/model/CreateProtectionGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectionGroupRequestBody::CreateProtectionGroupRequestBody()
{
    serverGroupIsSet_ = false;
}

CreateProtectionGroupRequestBody::~CreateProtectionGroupRequestBody() = default;

void CreateProtectionGroupRequestBody::validate()
{
}

web::json::value CreateProtectionGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIsSet_) {
        val[utility::conversions::to_string_t("server_group")] = ModelBase::toJson(serverGroup_);
    }

    return val;
}

bool CreateProtectionGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group"));
        if(!fieldValue.is_null())
        {
            CreateProtectionGroupRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroup(refVal);
        }
    }
    return ok;
}

CreateProtectionGroupRequestParams CreateProtectionGroupRequestBody::getServerGroup() const
{
    return serverGroup_;
}

void CreateProtectionGroupRequestBody::setServerGroup(const CreateProtectionGroupRequestParams& value)
{
    serverGroup_ = value;
    serverGroupIsSet_ = true;
}

bool CreateProtectionGroupRequestBody::serverGroupIsSet() const
{
    return serverGroupIsSet_;
}

void CreateProtectionGroupRequestBody::unsetserverGroup()
{
    serverGroupIsSet_ = false;
}

}
}
}
}
}


