

#include "huaweicloud/codeartsrepo/v4/model/TransferGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




TransferGroupRequest::TransferGroupRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

TransferGroupRequest::~TransferGroupRequest() = default;

void TransferGroupRequest::validate()
{
}

web::json::value TransferGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool TransferGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BussinessGroupTransferBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t TransferGroupRequest::getGroupId() const
{
    return groupId_;
}

void TransferGroupRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TransferGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TransferGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

BussinessGroupTransferBodyDto TransferGroupRequest::getBody() const
{
    return body_;
}

void TransferGroupRequest::setBody(const BussinessGroupTransferBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TransferGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TransferGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


