

#include "huaweicloud/ecs/v2/model/BatchAddServerGroupMemberReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerGroupMemberReq::BatchAddServerGroupMemberReq()
{
    serverIdsIsSet_ = false;
}

BatchAddServerGroupMemberReq::~BatchAddServerGroupMemberReq() = default;

void BatchAddServerGroupMemberReq::validate()
{
}

web::json::value BatchAddServerGroupMemberReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdsIsSet_) {
        val[utility::conversions::to_string_t("server_ids")] = ModelBase::toJson(serverIds_);
    }

    return val;
}
bool BatchAddServerGroupMemberReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchAddServerGroupMemberReq::getServerIds()
{
    return serverIds_;
}

void BatchAddServerGroupMemberReq::setServerIds(const std::vector<std::string>& value)
{
    serverIds_ = value;
    serverIdsIsSet_ = true;
}

bool BatchAddServerGroupMemberReq::serverIdsIsSet() const
{
    return serverIdsIsSet_;
}

void BatchAddServerGroupMemberReq::unsetserverIds()
{
    serverIdsIsSet_ = false;
}

}
}
}
}
}


