

#include "huaweicloud/cbr/v1/model/AddAgentPathResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AddAgentPathResponse::AddAgentPathResponse()
{
    addedIsSet_ = false;
    existedIsSet_ = false;
}

AddAgentPathResponse::~AddAgentPathResponse() = default;

void AddAgentPathResponse::validate()
{
}

web::json::value AddAgentPathResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addedIsSet_) {
        val[utility::conversions::to_string_t("added")] = ModelBase::toJson(added_);
    }
    if(existedIsSet_) {
        val[utility::conversions::to_string_t("existed")] = ModelBase::toJson(existed_);
    }

    return val;
}

bool AddAgentPathResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("added"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("existed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("existed"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExisted(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& AddAgentPathResponse::getAdded()
{
    return added_;
}

void AddAgentPathResponse::setAdded(const std::vector<std::string>& value)
{
    added_ = value;
    addedIsSet_ = true;
}

bool AddAgentPathResponse::addedIsSet() const
{
    return addedIsSet_;
}

void AddAgentPathResponse::unsetadded()
{
    addedIsSet_ = false;
}

std::vector<std::string>& AddAgentPathResponse::getExisted()
{
    return existed_;
}

void AddAgentPathResponse::setExisted(const std::vector<std::string>& value)
{
    existed_ = value;
    existedIsSet_ = true;
}

bool AddAgentPathResponse::existedIsSet() const
{
    return existedIsSet_;
}

void AddAgentPathResponse::unsetexisted()
{
    existedIsSet_ = false;
}

}
}
}
}
}


