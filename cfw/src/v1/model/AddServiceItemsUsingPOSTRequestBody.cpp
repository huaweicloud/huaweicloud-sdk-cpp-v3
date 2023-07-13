

#include "huaweicloud/cfw/v1/model/AddServiceItemsUsingPOSTRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceItemsUsingPOSTRequestBody::AddServiceItemsUsingPOSTRequestBody()
{
    setId_ = "";
    setIdIsSet_ = false;
    serviceItemsIsSet_ = false;
}

AddServiceItemsUsingPOSTRequestBody::~AddServiceItemsUsingPOSTRequestBody() = default;

void AddServiceItemsUsingPOSTRequestBody::validate()
{
}

web::json::value AddServiceItemsUsingPOSTRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(serviceItemsIsSet_) {
        val[utility::conversions::to_string_t("service_items")] = ModelBase::toJson(serviceItems_);
    }

    return val;
}

bool AddServiceItemsUsingPOSTRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("service_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_items"));
        if(!fieldValue.is_null())
        {
            std::vector<AddServiceItemsUsingPOSTRequestBody_service_items> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceItems(refVal);
        }
    }
    return ok;
}

std::string AddServiceItemsUsingPOSTRequestBody::getSetId() const
{
    return setId_;
}

void AddServiceItemsUsingPOSTRequestBody::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody::setIdIsSet() const
{
    return setIdIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody::unsetsetId()
{
    setIdIsSet_ = false;
}

std::vector<AddServiceItemsUsingPOSTRequestBody_service_items>& AddServiceItemsUsingPOSTRequestBody::getServiceItems()
{
    return serviceItems_;
}

void AddServiceItemsUsingPOSTRequestBody::setServiceItems(const std::vector<AddServiceItemsUsingPOSTRequestBody_service_items>& value)
{
    serviceItems_ = value;
    serviceItemsIsSet_ = true;
}

bool AddServiceItemsUsingPOSTRequestBody::serviceItemsIsSet() const
{
    return serviceItemsIsSet_;
}

void AddServiceItemsUsingPOSTRequestBody::unsetserviceItems()
{
    serviceItemsIsSet_ = false;
}

}
}
}
}
}


