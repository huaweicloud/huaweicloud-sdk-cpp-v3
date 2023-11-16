

#include "huaweicloud/aad/v1/model/ListInstanceIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListInstanceIdResponse::ListInstanceIdResponse()
{
    instanceIdsIsSet_ = false;
}

ListInstanceIdResponse::~ListInstanceIdResponse() = default;

void ListInstanceIdResponse::validate()
{
}

web::json::value ListInstanceIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}
bool ListInstanceIdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListInstanceIdResponse::getInstanceIds()
{
    return instanceIds_;
}

void ListInstanceIdResponse::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ListInstanceIdResponse::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ListInstanceIdResponse::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


