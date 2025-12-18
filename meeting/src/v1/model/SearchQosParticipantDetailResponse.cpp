

#include "huaweicloud/meeting/v1/model/SearchQosParticipantDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosParticipantDetailResponse::SearchQosParticipantDetailResponse()
{
    userIsSet_ = false;
    qosIsSet_ = false;
}

SearchQosParticipantDetailResponse::~SearchQosParticipantDetailResponse() = default;

void SearchQosParticipantDetailResponse::validate()
{
}

web::json::value SearchQosParticipantDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(qosIsSet_) {
        val[utility::conversions::to_string_t("qos")] = ModelBase::toJson(qos_);
    }

    return val;
}
bool SearchQosParticipantDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            QosParticipantInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos"));
        if(!fieldValue.is_null())
        {
            QosInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQos(refVal);
        }
    }
    return ok;
}


QosParticipantInfo SearchQosParticipantDetailResponse::getUser() const
{
    return user_;
}

void SearchQosParticipantDetailResponse::setUser(const QosParticipantInfo& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool SearchQosParticipantDetailResponse::userIsSet() const
{
    return userIsSet_;
}

void SearchQosParticipantDetailResponse::unsetuser()
{
    userIsSet_ = false;
}

QosInfo SearchQosParticipantDetailResponse::getQos() const
{
    return qos_;
}

void SearchQosParticipantDetailResponse::setQos(const QosInfo& value)
{
    qos_ = value;
    qosIsSet_ = true;
}

bool SearchQosParticipantDetailResponse::qosIsSet() const
{
    return qosIsSet_;
}

void SearchQosParticipantDetailResponse::unsetqos()
{
    qosIsSet_ = false;
}

}
}
}
}
}


