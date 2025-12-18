

#include "huaweicloud/meeting/v1/model/ListNetworkQualityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListNetworkQualityResponse::ListNetworkQualityResponse()
{
    returnCode_ = 0;
    returnCodeIsSet_ = false;
    returnDesc_ = "";
    returnDescIsSet_ = false;
    qosListIsSet_ = false;
}

ListNetworkQualityResponse::~ListNetworkQualityResponse() = default;

void ListNetworkQualityResponse::validate()
{
}

web::json::value ListNetworkQualityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(returnCodeIsSet_) {
        val[utility::conversions::to_string_t("returnCode")] = ModelBase::toJson(returnCode_);
    }
    if(returnDescIsSet_) {
        val[utility::conversions::to_string_t("returnDesc")] = ModelBase::toJson(returnDesc_);
    }
    if(qosListIsSet_) {
        val[utility::conversions::to_string_t("qosList")] = ModelBase::toJson(qosList_);
    }

    return val;
}
bool ListNetworkQualityResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("returnCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("returnDesc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnDesc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qosList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qosList"));
        if(!fieldValue.is_null())
        {
            std::vector<UserQos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosList(refVal);
        }
    }
    return ok;
}


int32_t ListNetworkQualityResponse::getReturnCode() const
{
    return returnCode_;
}

void ListNetworkQualityResponse::setReturnCode(int32_t value)
{
    returnCode_ = value;
    returnCodeIsSet_ = true;
}

bool ListNetworkQualityResponse::returnCodeIsSet() const
{
    return returnCodeIsSet_;
}

void ListNetworkQualityResponse::unsetreturnCode()
{
    returnCodeIsSet_ = false;
}

std::string ListNetworkQualityResponse::getReturnDesc() const
{
    return returnDesc_;
}

void ListNetworkQualityResponse::setReturnDesc(const std::string& value)
{
    returnDesc_ = value;
    returnDescIsSet_ = true;
}

bool ListNetworkQualityResponse::returnDescIsSet() const
{
    return returnDescIsSet_;
}

void ListNetworkQualityResponse::unsetreturnDesc()
{
    returnDescIsSet_ = false;
}

std::vector<UserQos>& ListNetworkQualityResponse::getQosList()
{
    return qosList_;
}

void ListNetworkQualityResponse::setQosList(const std::vector<UserQos>& value)
{
    qosList_ = value;
    qosListIsSet_ = true;
}

bool ListNetworkQualityResponse::qosListIsSet() const
{
    return qosListIsSet_;
}

void ListNetworkQualityResponse::unsetqosList()
{
    qosListIsSet_ = false;
}

}
}
}
}
}


