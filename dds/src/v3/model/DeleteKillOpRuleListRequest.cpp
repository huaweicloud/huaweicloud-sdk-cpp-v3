

#include "huaweicloud/dds/v3/model/DeleteKillOpRuleListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteKillOpRuleListRequest::DeleteKillOpRuleListRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteKillOpRuleListRequest::~DeleteKillOpRuleListRequest() = default;

void DeleteKillOpRuleListRequest::validate()
{
}

web::json::value DeleteKillOpRuleListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteKillOpRuleListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteKillOpRuleListRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteKillOpRuleListRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteKillOpRuleListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteKillOpRuleListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteKillOpRuleListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteKillOpRuleListRequestBody DeleteKillOpRuleListRequest::getBody() const
{
    return body_;
}

void DeleteKillOpRuleListRequest::setBody(const DeleteKillOpRuleListRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteKillOpRuleListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteKillOpRuleListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


