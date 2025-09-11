

#include "huaweicloud/dbss/v1/model/WhitelistBatchDeleteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




WhitelistBatchDeleteRequest::WhitelistBatchDeleteRequest()
{
    whitelistsIsSet_ = false;
}

WhitelistBatchDeleteRequest::~WhitelistBatchDeleteRequest() = default;

void WhitelistBatchDeleteRequest::validate()
{
}

web::json::value WhitelistBatchDeleteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(whitelistsIsSet_) {
        val[utility::conversions::to_string_t("whitelists")] = ModelBase::toJson(whitelists_);
    }

    return val;
}
bool WhitelistBatchDeleteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("whitelists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whitelists"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhitelists(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& WhitelistBatchDeleteRequest::getWhitelists()
{
    return whitelists_;
}

void WhitelistBatchDeleteRequest::setWhitelists(const std::vector<std::string>& value)
{
    whitelists_ = value;
    whitelistsIsSet_ = true;
}

bool WhitelistBatchDeleteRequest::whitelistsIsSet() const
{
    return whitelistsIsSet_;
}

void WhitelistBatchDeleteRequest::unsetwhitelists()
{
    whitelistsIsSet_ = false;
}

}
}
}
}
}


