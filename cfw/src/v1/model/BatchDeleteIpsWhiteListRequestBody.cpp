

#include "huaweicloud/cfw/v1/model/BatchDeleteIpsWhiteListRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteIpsWhiteListRequestBody::BatchDeleteIpsWhiteListRequestBody()
{
    listIdsIsSet_ = false;
}

BatchDeleteIpsWhiteListRequestBody::~BatchDeleteIpsWhiteListRequestBody() = default;

void BatchDeleteIpsWhiteListRequestBody::validate()
{
}

web::json::value BatchDeleteIpsWhiteListRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIdsIsSet_) {
        val[utility::conversions::to_string_t("list_ids")] = ModelBase::toJson(listIds_);
    }

    return val;
}
bool BatchDeleteIpsWhiteListRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchDeleteIpsWhiteListRequestBody::getListIds()
{
    return listIds_;
}

void BatchDeleteIpsWhiteListRequestBody::setListIds(const std::vector<std::string>& value)
{
    listIds_ = value;
    listIdsIsSet_ = true;
}

bool BatchDeleteIpsWhiteListRequestBody::listIdsIsSet() const
{
    return listIdsIsSet_;
}

void BatchDeleteIpsWhiteListRequestBody::unsetlistIds()
{
    listIdsIsSet_ = false;
}

}
}
}
}
}


