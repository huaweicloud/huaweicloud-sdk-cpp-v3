

#include "huaweicloud/gaussdbfornosql/v3/model/ListConfigurationTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListConfigurationTemplatesRequest::ListConfigurationTemplatesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

ListConfigurationTemplatesRequest::~ListConfigurationTemplatesRequest() = default;

void ListConfigurationTemplatesRequest::validate()
{
}

web::json::value ListConfigurationTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool ListConfigurationTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("datastore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


int32_t ListConfigurationTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListConfigurationTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListConfigurationTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListConfigurationTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListConfigurationTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListConfigurationTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListConfigurationTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListConfigurationTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListConfigurationTemplatesRequest::getDatastoreName() const
{
    return datastoreName_;
}

void ListConfigurationTemplatesRequest::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ListConfigurationTemplatesRequest::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ListConfigurationTemplatesRequest::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ListConfigurationTemplatesRequest::getMode() const
{
    return mode_;
}

void ListConfigurationTemplatesRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListConfigurationTemplatesRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListConfigurationTemplatesRequest::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


