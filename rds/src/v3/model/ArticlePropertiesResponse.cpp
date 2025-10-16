

#include "huaweicloud/rds/v3/model/ArticlePropertiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ArticlePropertiesResponse::ArticlePropertiesResponse()
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

ArticlePropertiesResponse::~ArticlePropertiesResponse() = default;

void ArticlePropertiesResponse::validate()
{
}

web::json::value ArticlePropertiesResponse::toJson() const
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
bool ArticlePropertiesResponse::fromJson(const web::json::value& val)
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


std::string ArticlePropertiesResponse::getDestinationObjectName() const
{
    return destinationObjectName_;
}

void ArticlePropertiesResponse::setDestinationObjectName(const std::string& value)
{
    destinationObjectName_ = value;
    destinationObjectNameIsSet_ = true;
}

bool ArticlePropertiesResponse::destinationObjectNameIsSet() const
{
    return destinationObjectNameIsSet_;
}

void ArticlePropertiesResponse::unsetdestinationObjectName()
{
    destinationObjectNameIsSet_ = false;
}

std::string ArticlePropertiesResponse::getDestinationObjectOwner() const
{
    return destinationObjectOwner_;
}

void ArticlePropertiesResponse::setDestinationObjectOwner(const std::string& value)
{
    destinationObjectOwner_ = value;
    destinationObjectOwnerIsSet_ = true;
}

bool ArticlePropertiesResponse::destinationObjectOwnerIsSet() const
{
    return destinationObjectOwnerIsSet_;
}

void ArticlePropertiesResponse::unsetdestinationObjectOwner()
{
    destinationObjectOwnerIsSet_ = false;
}

std::string ArticlePropertiesResponse::getInsertDeliveryFormat() const
{
    return insertDeliveryFormat_;
}

void ArticlePropertiesResponse::setInsertDeliveryFormat(const std::string& value)
{
    insertDeliveryFormat_ = value;
    insertDeliveryFormatIsSet_ = true;
}

bool ArticlePropertiesResponse::insertDeliveryFormatIsSet() const
{
    return insertDeliveryFormatIsSet_;
}

void ArticlePropertiesResponse::unsetinsertDeliveryFormat()
{
    insertDeliveryFormatIsSet_ = false;
}

std::string ArticlePropertiesResponse::getInsertStoredProcedure() const
{
    return insertStoredProcedure_;
}

void ArticlePropertiesResponse::setInsertStoredProcedure(const std::string& value)
{
    insertStoredProcedure_ = value;
    insertStoredProcedureIsSet_ = true;
}

bool ArticlePropertiesResponse::insertStoredProcedureIsSet() const
{
    return insertStoredProcedureIsSet_;
}

void ArticlePropertiesResponse::unsetinsertStoredProcedure()
{
    insertStoredProcedureIsSet_ = false;
}

std::string ArticlePropertiesResponse::getUpdateDeliveryFormat() const
{
    return updateDeliveryFormat_;
}

void ArticlePropertiesResponse::setUpdateDeliveryFormat(const std::string& value)
{
    updateDeliveryFormat_ = value;
    updateDeliveryFormatIsSet_ = true;
}

bool ArticlePropertiesResponse::updateDeliveryFormatIsSet() const
{
    return updateDeliveryFormatIsSet_;
}

void ArticlePropertiesResponse::unsetupdateDeliveryFormat()
{
    updateDeliveryFormatIsSet_ = false;
}

std::string ArticlePropertiesResponse::getUpdateStoredProcedure() const
{
    return updateStoredProcedure_;
}

void ArticlePropertiesResponse::setUpdateStoredProcedure(const std::string& value)
{
    updateStoredProcedure_ = value;
    updateStoredProcedureIsSet_ = true;
}

bool ArticlePropertiesResponse::updateStoredProcedureIsSet() const
{
    return updateStoredProcedureIsSet_;
}

void ArticlePropertiesResponse::unsetupdateStoredProcedure()
{
    updateStoredProcedureIsSet_ = false;
}

std::string ArticlePropertiesResponse::getDeleteDeliveryFormat() const
{
    return deleteDeliveryFormat_;
}

void ArticlePropertiesResponse::setDeleteDeliveryFormat(const std::string& value)
{
    deleteDeliveryFormat_ = value;
    deleteDeliveryFormatIsSet_ = true;
}

bool ArticlePropertiesResponse::deleteDeliveryFormatIsSet() const
{
    return deleteDeliveryFormatIsSet_;
}

void ArticlePropertiesResponse::unsetdeleteDeliveryFormat()
{
    deleteDeliveryFormatIsSet_ = false;
}

std::string ArticlePropertiesResponse::getDeleteStoredProcedure() const
{
    return deleteStoredProcedure_;
}

void ArticlePropertiesResponse::setDeleteStoredProcedure(const std::string& value)
{
    deleteStoredProcedure_ = value;
    deleteStoredProcedureIsSet_ = true;
}

bool ArticlePropertiesResponse::deleteStoredProcedureIsSet() const
{
    return deleteStoredProcedureIsSet_;
}

void ArticlePropertiesResponse::unsetdeleteStoredProcedure()
{
    deleteStoredProcedureIsSet_ = false;
}

}
}
}
}
}


