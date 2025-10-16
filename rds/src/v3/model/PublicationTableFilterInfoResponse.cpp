

#include "huaweicloud/rds/v3/model/PublicationTableFilterInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PublicationTableFilterInfoResponse::PublicationTableFilterInfoResponse()
{
    relation_ = "";
    relationIsSet_ = false;
    column_ = "";
    columnIsSet_ = false;
    condition_ = "";
    conditionIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    filtersIsSet_ = false;
}

PublicationTableFilterInfoResponse::~PublicationTableFilterInfoResponse() = default;

void PublicationTableFilterInfoResponse::validate()
{
}

web::json::value PublicationTableFilterInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(relationIsSet_) {
        val[utility::conversions::to_string_t("relation")] = ModelBase::toJson(relation_);
    }
    if(columnIsSet_) {
        val[utility::conversions::to_string_t("column")] = ModelBase::toJson(column_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(filtersIsSet_) {
        val[utility::conversions::to_string_t("filters")] = ModelBase::toJson(*filters_);
    }

    return val;
}
bool PublicationTableFilterInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("relation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filters"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicationTableFilterInfoResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilters(refVal);
        }
    }
    return ok;
}


std::string PublicationTableFilterInfoResponse::getRelation() const
{
    return relation_;
}

void PublicationTableFilterInfoResponse::setRelation(const std::string& value)
{
    relation_ = value;
    relationIsSet_ = true;
}

bool PublicationTableFilterInfoResponse::relationIsSet() const
{
    return relationIsSet_;
}

void PublicationTableFilterInfoResponse::unsetrelation()
{
    relationIsSet_ = false;
}

std::string PublicationTableFilterInfoResponse::getColumn() const
{
    return column_;
}

void PublicationTableFilterInfoResponse::setColumn(const std::string& value)
{
    column_ = value;
    columnIsSet_ = true;
}

bool PublicationTableFilterInfoResponse::columnIsSet() const
{
    return columnIsSet_;
}

void PublicationTableFilterInfoResponse::unsetcolumn()
{
    columnIsSet_ = false;
}

std::string PublicationTableFilterInfoResponse::getCondition() const
{
    return condition_;
}

void PublicationTableFilterInfoResponse::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool PublicationTableFilterInfoResponse::conditionIsSet() const
{
    return conditionIsSet_;
}

void PublicationTableFilterInfoResponse::unsetcondition()
{
    conditionIsSet_ = false;
}

std::string PublicationTableFilterInfoResponse::getValue() const
{
    return value_;
}

void PublicationTableFilterInfoResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PublicationTableFilterInfoResponse::valueIsSet() const
{
    return valueIsSet_;
}

void PublicationTableFilterInfoResponse::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<PublicationTableFilterInfoResponse>& PublicationTableFilterInfoResponse::getFilters()
{
    return *filters_;
}

void PublicationTableFilterInfoResponse::setFilters(const std::vector<PublicationTableFilterInfoResponse>& value)
{
    *filters_ = value;
    filtersIsSet_ = true;
}

bool PublicationTableFilterInfoResponse::filtersIsSet() const
{
    return filtersIsSet_;
}

void PublicationTableFilterInfoResponse::unsetfilters()
{
    filtersIsSet_ = false;
}

}
}
}
}
}


