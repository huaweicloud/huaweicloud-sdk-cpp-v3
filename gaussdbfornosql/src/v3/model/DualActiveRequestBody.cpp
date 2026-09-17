

#include "huaweicloud/gaussdbfornosql/v3/model/DualActiveRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DualActiveRequestBody::DualActiveRequestBody()
{
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationInstanceId_ = "";
    destinationInstanceIdIsSet_ = false;
    tablesIsSet_ = false;
}

DualActiveRequestBody::~DualActiveRequestBody() = default;

void DualActiveRequestBody::validate()
{
}

web::json::value DualActiveRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(destinationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("destination_instance_id")] = ModelBase::toJson(destinationInstanceId_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool DualActiveRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string DualActiveRequestBody::getDestinationRegion() const
{
    return destinationRegion_;
}

void DualActiveRequestBody::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool DualActiveRequestBody::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void DualActiveRequestBody::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string DualActiveRequestBody::getDestinationInstanceId() const
{
    return destinationInstanceId_;
}

void DualActiveRequestBody::setDestinationInstanceId(const std::string& value)
{
    destinationInstanceId_ = value;
    destinationInstanceIdIsSet_ = true;
}

bool DualActiveRequestBody::destinationInstanceIdIsSet() const
{
    return destinationInstanceIdIsSet_;
}

void DualActiveRequestBody::unsetdestinationInstanceId()
{
    destinationInstanceIdIsSet_ = false;
}

std::vector<std::string>& DualActiveRequestBody::getTables()
{
    return tables_;
}

void DualActiveRequestBody::setTables(const std::vector<std::string>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool DualActiveRequestBody::tablesIsSet() const
{
    return tablesIsSet_;
}

void DualActiveRequestBody::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


