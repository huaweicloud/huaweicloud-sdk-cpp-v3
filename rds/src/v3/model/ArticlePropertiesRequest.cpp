

#include "huaweicloud/rds/v3/model/ArticlePropertiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ArticlePropertiesRequest::ArticlePropertiesRequest()
{
    destinationObjectName_ = "";
    destinationObjectNameIsSet_ = false;
    destinationObjectOwner_ = "";
    destinationObjectOwnerIsSet_ = false;
    insertDeliveryFormat_ = "";
    insertDeliveryFormatIsSet_ = false;
    insertStoredProcedure_ = "";
    insertStoredProcedureIsSet_ = false;
    updateDeliveryFormat_ = "";
    updateDeliveryFormatIsSet_ = false;
    updateStoredProcedure_ = "";
    updateStoredProcedureIsSet_ = false;
    deleteDeliveryFormat_ = "";
    deleteDeliveryFormatIsSet_ = false;
    deleteStoredProcedure_ = "";
    deleteStoredProcedureIsSet_ = false;
}

ArticlePropertiesRequest::~ArticlePropertiesRequest() = default;

void ArticlePropertiesRequest::validate()
{
}

web::json::value ArticlePropertiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationObjectNameIsSet_) {
        val[utility::conversions::to_string_t("destination_object_name")] = ModelBase::toJson(destinationObjectName_);
    }
    if(destinationObjectOwnerIsSet_) {
        val[utility::conversions::to_string_t("destination_object_owner")] = ModelBase::toJson(destinationObjectOwner_);
    }
    if(insertDeliveryFormatIsSet_) {
        val[utility::conversions::to_string_t("insert_delivery_format")] = ModelBase::toJson(insertDeliveryFormat_);
    }
    if(insertStoredProcedureIsSet_) {
        val[utility::conversions::to_string_t("insert_stored_procedure")] = ModelBase::toJson(insertStoredProcedure_);
    }
    if(updateDeliveryFormatIsSet_) {
        val[utility::conversions::to_string_t("update_delivery_format")] = ModelBase::toJson(updateDeliveryFormat_);
    }
    if(updateStoredProcedureIsSet_) {
        val[utility::conversions::to_string_t("update_stored_procedure")] = ModelBase::toJson(updateStoredProcedure_);
    }
    if(deleteDeliveryFormatIsSet_) {
        val[utility::conversions::to_string_t("delete_delivery_format")] = ModelBase::toJson(deleteDeliveryFormat_);
    }
    if(deleteStoredProcedureIsSet_) {
        val[utility::conversions::to_string_t("delete_stored_procedure")] = ModelBase::toJson(deleteStoredProcedure_);
    }

    return val;
}
bool ArticlePropertiesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination_object_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_object_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationObjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_object_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_object_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationObjectOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_delivery_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_delivery_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertDeliveryFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_stored_procedure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_stored_procedure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertStoredProcedure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_delivery_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_delivery_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateDeliveryFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_stored_procedure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_stored_procedure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateStoredProcedure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_delivery_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_delivery_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteDeliveryFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_stored_procedure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_stored_procedure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteStoredProcedure(refVal);
        }
    }
    return ok;
}


std::string ArticlePropertiesRequest::getDestinationObjectName() const
{
    return destinationObjectName_;
}

void ArticlePropertiesRequest::setDestinationObjectName(const std::string& value)
{
    destinationObjectName_ = value;
    destinationObjectNameIsSet_ = true;
}

bool ArticlePropertiesRequest::destinationObjectNameIsSet() const
{
    return destinationObjectNameIsSet_;
}

void ArticlePropertiesRequest::unsetdestinationObjectName()
{
    destinationObjectNameIsSet_ = false;
}

std::string ArticlePropertiesRequest::getDestinationObjectOwner() const
{
    return destinationObjectOwner_;
}

void ArticlePropertiesRequest::setDestinationObjectOwner(const std::string& value)
{
    destinationObjectOwner_ = value;
    destinationObjectOwnerIsSet_ = true;
}

bool ArticlePropertiesRequest::destinationObjectOwnerIsSet() const
{
    return destinationObjectOwnerIsSet_;
}

void ArticlePropertiesRequest::unsetdestinationObjectOwner()
{
    destinationObjectOwnerIsSet_ = false;
}

std::string ArticlePropertiesRequest::getInsertDeliveryFormat() const
{
    return insertDeliveryFormat_;
}

void ArticlePropertiesRequest::setInsertDeliveryFormat(const std::string& value)
{
    insertDeliveryFormat_ = value;
    insertDeliveryFormatIsSet_ = true;
}

bool ArticlePropertiesRequest::insertDeliveryFormatIsSet() const
{
    return insertDeliveryFormatIsSet_;
}

void ArticlePropertiesRequest::unsetinsertDeliveryFormat()
{
    insertDeliveryFormatIsSet_ = false;
}

std::string ArticlePropertiesRequest::getInsertStoredProcedure() const
{
    return insertStoredProcedure_;
}

void ArticlePropertiesRequest::setInsertStoredProcedure(const std::string& value)
{
    insertStoredProcedure_ = value;
    insertStoredProcedureIsSet_ = true;
}

bool ArticlePropertiesRequest::insertStoredProcedureIsSet() const
{
    return insertStoredProcedureIsSet_;
}

void ArticlePropertiesRequest::unsetinsertStoredProcedure()
{
    insertStoredProcedureIsSet_ = false;
}

std::string ArticlePropertiesRequest::getUpdateDeliveryFormat() const
{
    return updateDeliveryFormat_;
}

void ArticlePropertiesRequest::setUpdateDeliveryFormat(const std::string& value)
{
    updateDeliveryFormat_ = value;
    updateDeliveryFormatIsSet_ = true;
}

bool ArticlePropertiesRequest::updateDeliveryFormatIsSet() const
{
    return updateDeliveryFormatIsSet_;
}

void ArticlePropertiesRequest::unsetupdateDeliveryFormat()
{
    updateDeliveryFormatIsSet_ = false;
}

std::string ArticlePropertiesRequest::getUpdateStoredProcedure() const
{
    return updateStoredProcedure_;
}

void ArticlePropertiesRequest::setUpdateStoredProcedure(const std::string& value)
{
    updateStoredProcedure_ = value;
    updateStoredProcedureIsSet_ = true;
}

bool ArticlePropertiesRequest::updateStoredProcedureIsSet() const
{
    return updateStoredProcedureIsSet_;
}

void ArticlePropertiesRequest::unsetupdateStoredProcedure()
{
    updateStoredProcedureIsSet_ = false;
}

std::string ArticlePropertiesRequest::getDeleteDeliveryFormat() const
{
    return deleteDeliveryFormat_;
}

void ArticlePropertiesRequest::setDeleteDeliveryFormat(const std::string& value)
{
    deleteDeliveryFormat_ = value;
    deleteDeliveryFormatIsSet_ = true;
}

bool ArticlePropertiesRequest::deleteDeliveryFormatIsSet() const
{
    return deleteDeliveryFormatIsSet_;
}

void ArticlePropertiesRequest::unsetdeleteDeliveryFormat()
{
    deleteDeliveryFormatIsSet_ = false;
}

std::string ArticlePropertiesRequest::getDeleteStoredProcedure() const
{
    return deleteStoredProcedure_;
}

void ArticlePropertiesRequest::setDeleteStoredProcedure(const std::string& value)
{
    deleteStoredProcedure_ = value;
    deleteStoredProcedureIsSet_ = true;
}

bool ArticlePropertiesRequest::deleteStoredProcedureIsSet() const
{
    return deleteStoredProcedureIsSet_;
}

void ArticlePropertiesRequest::unsetdeleteStoredProcedure()
{
    deleteStoredProcedureIsSet_ = false;
}

}
}
}
}
}


