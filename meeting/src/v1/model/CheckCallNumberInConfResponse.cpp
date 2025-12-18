

#include "huaweicloud/meeting/v1/model/CheckCallNumberInConfResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckCallNumberInConfResponse::CheckCallNumberInConfResponse()
{
    inConf_ = false;
    inConfIsSet_ = false;
    confId_ = "";
    confIdIsSet_ = false;
}

CheckCallNumberInConfResponse::~CheckCallNumberInConfResponse() = default;

void CheckCallNumberInConfResponse::validate()
{
}

web::json::value CheckCallNumberInConfResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inConfIsSet_) {
        val[utility::conversions::to_string_t("in_conf")] = ModelBase::toJson(inConf_);
    }
    if(confIdIsSet_) {
        val[utility::conversions::to_string_t("conf_id")] = ModelBase::toJson(confId_);
    }

    return val;
}
bool CheckCallNumberInConfResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("in_conf"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_conf"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInConf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conf_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfId(refVal);
        }
    }
    return ok;
}


bool CheckCallNumberInConfResponse::isInConf() const
{
    return inConf_;
}

void CheckCallNumberInConfResponse::setInConf(bool value)
{
    inConf_ = value;
    inConfIsSet_ = true;
}

bool CheckCallNumberInConfResponse::inConfIsSet() const
{
    return inConfIsSet_;
}

void CheckCallNumberInConfResponse::unsetinConf()
{
    inConfIsSet_ = false;
}

std::string CheckCallNumberInConfResponse::getConfId() const
{
    return confId_;
}

void CheckCallNumberInConfResponse::setConfId(const std::string& value)
{
    confId_ = value;
    confIdIsSet_ = true;
}

bool CheckCallNumberInConfResponse::confIdIsSet() const
{
    return confIdIsSet_;
}

void CheckCallNumberInConfResponse::unsetconfId()
{
    confIdIsSet_ = false;
}

}
}
}
}
}


