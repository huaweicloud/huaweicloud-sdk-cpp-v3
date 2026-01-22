

#include "huaweicloud/cfw/v1/model/IpsWhitelistRespData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsWhitelistRespData::IpsWhitelistRespData()
{
    listIdsIsSet_ = false;
}

IpsWhitelistRespData::~IpsWhitelistRespData() = default;

void IpsWhitelistRespData::validate()
{
}

web::json::value IpsWhitelistRespData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIdsIsSet_) {
        val[utility::conversions::to_string_t("list_ids")] = ModelBase::toJson(listIds_);
    }

    return val;
}
bool IpsWhitelistRespData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& IpsWhitelistRespData::getListIds()
{
    return listIds_;
}

void IpsWhitelistRespData::setListIds(const std::vector<std::string>& value)
{
    listIds_ = value;
    listIdsIsSet_ = true;
}

bool IpsWhitelistRespData::listIdsIsSet() const
{
    return listIdsIsSet_;
}

void IpsWhitelistRespData::unsetlistIds()
{
    listIdsIsSet_ = false;
}

}
}
}
}
}


