

#include "huaweicloud/lts/v2/model/DeleteAccessConfigRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteAccessConfigRequestBody::DeleteAccessConfigRequestBody()
{
    accessConfigIdListIsSet_ = false;
}

DeleteAccessConfigRequestBody::~DeleteAccessConfigRequestBody() = default;

void DeleteAccessConfigRequestBody::validate()
{
}

web::json::value DeleteAccessConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessConfigIdListIsSet_) {
        val[utility::conversions::to_string_t("access_config_id_list")] = ModelBase::toJson(accessConfigIdList_);
    }

    return val;
}

bool DeleteAccessConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_config_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigIdList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteAccessConfigRequestBody::getAccessConfigIdList()
{
    return accessConfigIdList_;
}

void DeleteAccessConfigRequestBody::setAccessConfigIdList(const std::vector<std::string>& value)
{
    accessConfigIdList_ = value;
    accessConfigIdListIsSet_ = true;
}

bool DeleteAccessConfigRequestBody::accessConfigIdListIsSet() const
{
    return accessConfigIdListIsSet_;
}

void DeleteAccessConfigRequestBody::unsetaccessConfigIdList()
{
    accessConfigIdListIsSet_ = false;
}

}
}
}
}
}


