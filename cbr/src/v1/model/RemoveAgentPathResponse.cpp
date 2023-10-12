

#include "huaweicloud/cbr/v1/model/RemoveAgentPathResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RemoveAgentPathResponse::RemoveAgentPathResponse()
{
    removedIsSet_ = false;
    notExistedIsSet_ = false;
}

RemoveAgentPathResponse::~RemoveAgentPathResponse() = default;

void RemoveAgentPathResponse::validate()
{
}

web::json::value RemoveAgentPathResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(removedIsSet_) {
        val[utility::conversions::to_string_t("removed")] = ModelBase::toJson(removed_);
    }
    if(notExistedIsSet_) {
        val[utility::conversions::to_string_t("not_existed")] = ModelBase::toJson(notExisted_);
    }

    return val;
}
bool RemoveAgentPathResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("removed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removed"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_existed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_existed"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotExisted(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RemoveAgentPathResponse::getRemoved()
{
    return removed_;
}

void RemoveAgentPathResponse::setRemoved(const std::vector<std::string>& value)
{
    removed_ = value;
    removedIsSet_ = true;
}

bool RemoveAgentPathResponse::removedIsSet() const
{
    return removedIsSet_;
}

void RemoveAgentPathResponse::unsetremoved()
{
    removedIsSet_ = false;
}

std::vector<std::string>& RemoveAgentPathResponse::getNotExisted()
{
    return notExisted_;
}

void RemoveAgentPathResponse::setNotExisted(const std::vector<std::string>& value)
{
    notExisted_ = value;
    notExistedIsSet_ = true;
}

bool RemoveAgentPathResponse::notExistedIsSet() const
{
    return notExistedIsSet_;
}

void RemoveAgentPathResponse::unsetnotExisted()
{
    notExistedIsSet_ = false;
}

}
}
}
}
}


