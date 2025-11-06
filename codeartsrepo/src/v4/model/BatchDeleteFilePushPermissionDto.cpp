

#include "huaweicloud/codeartsrepo/v4/model/BatchDeleteFilePushPermissionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchDeleteFilePushPermissionDto::BatchDeleteFilePushPermissionDto()
{
    idsIsSet_ = false;
}

BatchDeleteFilePushPermissionDto::~BatchDeleteFilePushPermissionDto() = default;

void BatchDeleteFilePushPermissionDto::validate()
{
}

web::json::value BatchDeleteFilePushPermissionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool BatchDeleteFilePushPermissionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& BatchDeleteFilePushPermissionDto::getIds()
{
    return ids_;
}

void BatchDeleteFilePushPermissionDto::setIds(std::vector<int32_t> value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchDeleteFilePushPermissionDto::idsIsSet() const
{
    return idsIsSet_;
}

void BatchDeleteFilePushPermissionDto::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


