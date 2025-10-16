

#include "huaweicloud/rds/v3/model/PublicationTableFilterInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PublicationTableFilterInfoRequest::PublicationTableFilterInfoRequest()
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

PublicationTableFilterInfoRequest::~PublicationTableFilterInfoRequest() = default;

void PublicationTableFilterInfoRequest::validate()
{
}

web::json::value PublicationTableFilterInfoRequest::toJson() const
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
bool PublicationTableFilterInfoRequest::fromJson(const web::json::value& val)
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
            std::vector<PublicationTableFilterInfoRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilters(refVal);
        }
    }
    return ok;
}


std::string PublicationTableFilterInfoRequest::getRelation() const
{
    return relation_;
}

void PublicationTableFilterInfoRequest::setRelation(const std::string& value)
{
    relation_ = value;
    relationIsSet_ = true;
}

bool PublicationTableFilterInfoRequest::relationIsSet() const
{
    return relationIsSet_;
}

void PublicationTableFilterInfoRequest::unsetrelation()
{
    relationIsSet_ = false;
}

std::string PublicationTableFilterInfoRequest::getColumn() const
{
    return column_;
}

void PublicationTableFilterInfoRequest::setColumn(const std::string& value)
{
    column_ = value;
    columnIsSet_ = true;
}

bool PublicationTableFilterInfoRequest::columnIsSet() const
{
    return columnIsSet_;
}

void PublicationTableFilterInfoRequest::unsetcolumn()
{
    columnIsSet_ = false;
}

std::string PublicationTableFilterInfoRequest::getCondition() const
{
    return condition_;
}

void PublicationTableFilterInfoRequest::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool PublicationTableFilterInfoRequest::conditionIsSet() const
{
    return conditionIsSet_;
}

void PublicationTableFilterInfoRequest::unsetcondition()
{
    conditionIsSet_ = false;
}

std::string PublicationTableFilterInfoRequest::getValue() const
{
    return value_;
}

void PublicationTableFilterInfoRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PublicationTableFilterInfoRequest::valueIsSet() const
{
    return valueIsSet_;
}

void PublicationTableFilterInfoRequest::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<PublicationTableFilterInfoRequest>& PublicationTableFilterInfoRequest::getFilters()
{
    return *filters_;
}

void PublicationTableFilterInfoRequest::setFilters(const std::vector<PublicationTableFilterInfoRequest>& value)
{
    *filters_ = value;
    filtersIsSet_ = true;
}

bool PublicationTableFilterInfoRequest::filtersIsSet() const
{
    return filtersIsSet_;
}

void PublicationTableFilterInfoRequest::unsetfilters()
{
    filtersIsSet_ = false;
}

}
}
}
}
}


