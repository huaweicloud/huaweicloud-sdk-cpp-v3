

#include "huaweicloud/cfw/v1/model/DeleteServiceItemDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteServiceItemDto::DeleteServiceItemDto()
{
    setId_ = "";
    setIdIsSet_ = false;
    serviceItemIdsIsSet_ = false;
}

DeleteServiceItemDto::~DeleteServiceItemDto() = default;

void DeleteServiceItemDto::validate()
{
}

web::json::value DeleteServiceItemDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(serviceItemIdsIsSet_) {
        val[utility::conversions::to_string_t("service_item_ids")] = ModelBase::toJson(serviceItemIds_);
    }

    return val;
}
bool DeleteServiceItemDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_item_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_item_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceItemIds(refVal);
        }
    }
    return ok;
}


std::string DeleteServiceItemDto::getSetId() const
{
    return setId_;
}

void DeleteServiceItemDto::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool DeleteServiceItemDto::setIdIsSet() const
{
    return setIdIsSet_;
}

void DeleteServiceItemDto::unsetsetId()
{
    setIdIsSet_ = false;
}

std::vector<std::string>& DeleteServiceItemDto::getServiceItemIds()
{
    return serviceItemIds_;
}

void DeleteServiceItemDto::setServiceItemIds(const std::vector<std::string>& value)
{
    serviceItemIds_ = value;
    serviceItemIdsIsSet_ = true;
}

bool DeleteServiceItemDto::serviceItemIdsIsSet() const
{
    return serviceItemIdsIsSet_;
}

void DeleteServiceItemDto::unsetserviceItemIds()
{
    serviceItemIdsIsSet_ = false;
}

}
}
}
}
}


