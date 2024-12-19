

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRecycleInstancesDetailsRequest::ListRecycleInstancesDetailsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRecycleInstancesDetailsRequest::~ListRecycleInstancesDetailsRequest() = default;

void ListRecycleInstancesDetailsRequest::validate()
{
}

web::json::value ListRecycleInstancesDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRecycleInstancesDetailsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
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
    return ok;
}


std::string ListRecycleInstancesDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRecycleInstancesDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRecycleInstancesDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRecycleInstancesDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListRecycleInstancesDetailsRequest::getInstanceName() const
{
    return instanceName_;
}

void ListRecycleInstancesDetailsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListRecycleInstancesDetailsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListRecycleInstancesDetailsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int32_t ListRecycleInstancesDetailsRequest::getOffset() const
{
    return offset_;
}

void ListRecycleInstancesDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRecycleInstancesDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRecycleInstancesDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRecycleInstancesDetailsRequest::getLimit() const
{
    return limit_;
}

void ListRecycleInstancesDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecycleInstancesDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecycleInstancesDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


