

#include "huaweicloud/dbss/v1/model/CountOperationStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountOperationStatisticsRequest::CountOperationStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountOperationStatisticsRequest::~CountOperationStatisticsRequest() = default;

void CountOperationStatisticsRequest::validate()
{
}

web::json::value CountOperationStatisticsRequest::toJson() const
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
bool CountOperationStatisticsRequest::fromJson(const web::json::value& val)
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
            GeneralRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CountOperationStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void CountOperationStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountOperationStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountOperationStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GeneralRequest CountOperationStatisticsRequest::getBody() const
{
    return body_;
}

void CountOperationStatisticsRequest::setBody(const GeneralRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountOperationStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountOperationStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


