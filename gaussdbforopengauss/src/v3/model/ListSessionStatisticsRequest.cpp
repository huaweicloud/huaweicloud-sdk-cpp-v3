

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSessionStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSessionStatisticsRequest::ListSessionStatisticsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dimension_ = "";
    dimensionIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    orderField_ = "";
    orderFieldIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

ListSessionStatisticsRequest::~ListSessionStatisticsRequest() = default;

void ListSessionStatisticsRequest::validate()
{
}

web::json::value ListSessionStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dimensionIsSet_) {
        val[utility::conversions::to_string_t("dimension")] = ModelBase::toJson(dimension_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderFieldIsSet_) {
        val[utility::conversions::to_string_t("order_field")] = ModelBase::toJson(orderField_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}
bool ListSessionStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dimension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dimension"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDimension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    return ok;
}


std::string ListSessionStatisticsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSessionStatisticsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSessionStatisticsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSessionStatisticsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSessionStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSessionStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSessionStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSessionStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSessionStatisticsRequest::getDimension() const
{
    return dimension_;
}

void ListSessionStatisticsRequest::setDimension(const std::string& value)
{
    dimension_ = value;
    dimensionIsSet_ = true;
}

bool ListSessionStatisticsRequest::dimensionIsSet() const
{
    return dimensionIsSet_;
}

void ListSessionStatisticsRequest::unsetdimension()
{
    dimensionIsSet_ = false;
}

int32_t ListSessionStatisticsRequest::getOffset() const
{
    return offset_;
}

void ListSessionStatisticsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSessionStatisticsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSessionStatisticsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSessionStatisticsRequest::getLimit() const
{
    return limit_;
}

void ListSessionStatisticsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSessionStatisticsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSessionStatisticsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSessionStatisticsRequest::getOrderField() const
{
    return orderField_;
}

void ListSessionStatisticsRequest::setOrderField(const std::string& value)
{
    orderField_ = value;
    orderFieldIsSet_ = true;
}

bool ListSessionStatisticsRequest::orderFieldIsSet() const
{
    return orderFieldIsSet_;
}

void ListSessionStatisticsRequest::unsetorderField()
{
    orderFieldIsSet_ = false;
}

std::string ListSessionStatisticsRequest::getOrder() const
{
    return order_;
}

void ListSessionStatisticsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListSessionStatisticsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListSessionStatisticsRequest::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


