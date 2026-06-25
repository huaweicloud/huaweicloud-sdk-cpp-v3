

#include "huaweicloud/rds/v3/model/ListSparseBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSparseBackupPolicyRequest::ListSparseBackupPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListSparseBackupPolicyRequest::~ListSparseBackupPolicyRequest() = default;

void ListSparseBackupPolicyRequest::validate()
{
}

web::json::value ListSparseBackupPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListSparseBackupPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListSparseBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSparseBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSparseBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSparseBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


