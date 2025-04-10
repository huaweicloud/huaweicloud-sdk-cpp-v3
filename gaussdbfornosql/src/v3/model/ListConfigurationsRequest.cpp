

#include "huaweicloud/gaussdbfornosql/v3/model/ListConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListConfigurationsRequest::ListConfigurationsRequest()
{
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

ListConfigurationsRequest::~ListConfigurationsRequest() = default;

void ListConfigurationsRequest::validate()
{
}

web::json::value ListConfigurationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool ListConfigurationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListConfigurationsRequest::getDatastoreName() const
{
    return datastoreName_;
}

void ListConfigurationsRequest::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ListConfigurationsRequest::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ListConfigurationsRequest::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ListConfigurationsRequest::getMode() const
{
    return mode_;
}

void ListConfigurationsRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListConfigurationsRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListConfigurationsRequest::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


