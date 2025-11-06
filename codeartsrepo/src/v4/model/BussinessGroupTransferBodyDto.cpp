

#include "huaweicloud/codeartsrepo/v4/model/BussinessGroupTransferBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BussinessGroupTransferBodyDto::BussinessGroupTransferBodyDto()
{
    ownerId_ = 0;
    ownerIdIsSet_ = false;
}

BussinessGroupTransferBodyDto::~BussinessGroupTransferBodyDto() = default;

void BussinessGroupTransferBodyDto::validate()
{
}

web::json::value BussinessGroupTransferBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }

    return val;
}
bool BussinessGroupTransferBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
        }
    }
    return ok;
}


int32_t BussinessGroupTransferBodyDto::getOwnerId() const
{
    return ownerId_;
}

void BussinessGroupTransferBodyDto::setOwnerId(int32_t value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool BussinessGroupTransferBodyDto::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void BussinessGroupTransferBodyDto::unsetownerId()
{
    ownerIdIsSet_ = false;
}

}
}
}
}
}


