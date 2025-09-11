

#include "huaweicloud/dbss/v1/model/AddWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddWhitelistRequest::AddWhitelistRequest()
{
    whitelistsIsSet_ = false;
}

AddWhitelistRequest::~AddWhitelistRequest() = default;

void AddWhitelistRequest::validate()
{
}

web::json::value AddWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(whitelistsIsSet_) {
        val[utility::conversions::to_string_t("whitelists")] = ModelBase::toJson(whitelists_);
    }

    return val;
}
bool AddWhitelistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("whitelists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whitelists"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjWhitelist> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhitelists(refVal);
        }
    }
    return ok;
}


std::vector<ObjWhitelist>& AddWhitelistRequest::getWhitelists()
{
    return whitelists_;
}

void AddWhitelistRequest::setWhitelists(const std::vector<ObjWhitelist>& value)
{
    whitelists_ = value;
    whitelistsIsSet_ = true;
}

bool AddWhitelistRequest::whitelistsIsSet() const
{
    return whitelistsIsSet_;
}

void AddWhitelistRequest::unsetwhitelists()
{
    whitelistsIsSet_ = false;
}

}
}
}
}
}


