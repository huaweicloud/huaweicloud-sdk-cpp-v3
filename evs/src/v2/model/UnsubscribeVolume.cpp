

#include "huaweicloud/evs/v2/model/UnsubscribeVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UnsubscribeVolume::UnsubscribeVolume()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

UnsubscribeVolume::~UnsubscribeVolume() = default;

void UnsubscribeVolume::validate()
{
}

web::json::value UnsubscribeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool UnsubscribeVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    return ok;
}


std::string UnsubscribeVolume::getVolumeId() const
{
    return volumeId_;
}

void UnsubscribeVolume::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool UnsubscribeVolume::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void UnsubscribeVolume::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string UnsubscribeVolume::getOrderId() const
{
    return orderId_;
}

void UnsubscribeVolume::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UnsubscribeVolume::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UnsubscribeVolume::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string UnsubscribeVolume::getResult() const
{
    return result_;
}

void UnsubscribeVolume::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UnsubscribeVolume::resultIsSet() const
{
    return resultIsSet_;
}

void UnsubscribeVolume::unsetresult()
{
    resultIsSet_ = false;
}

std::string UnsubscribeVolume::getFailReason() const
{
    return failReason_;
}

void UnsubscribeVolume::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool UnsubscribeVolume::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void UnsubscribeVolume::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


