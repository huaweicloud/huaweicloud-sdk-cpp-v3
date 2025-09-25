

#include "huaweicloud/codeartspipeline/v2/model/NewExtension_data_source_bindings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




NewExtension_data_source_bindings::NewExtension_data_source_bindings()
{
    target_ = "";
    targetIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
    dataSourceName_ = "";
    dataSourceNameIsSet_ = false;
}

NewExtension_data_source_bindings::~NewExtension_data_source_bindings() = default;

void NewExtension_data_source_bindings::validate()
{
}

web::json::value NewExtension_data_source_bindings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpointId")] = ModelBase::toJson(endpointId_);
    }
    if(dataSourceNameIsSet_) {
        val[utility::conversions::to_string_t("data_source_name")] = ModelBase::toJson(dataSourceName_);
    }

    return val;
}
bool NewExtension_data_source_bindings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpointId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpointId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_source_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_source_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSourceName(refVal);
        }
    }
    return ok;
}


std::string NewExtension_data_source_bindings::getTarget() const
{
    return target_;
}

void NewExtension_data_source_bindings::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool NewExtension_data_source_bindings::targetIsSet() const
{
    return targetIsSet_;
}

void NewExtension_data_source_bindings::unsettarget()
{
    targetIsSet_ = false;
}

std::string NewExtension_data_source_bindings::getEndpointId() const
{
    return endpointId_;
}

void NewExtension_data_source_bindings::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool NewExtension_data_source_bindings::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void NewExtension_data_source_bindings::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

std::string NewExtension_data_source_bindings::getDataSourceName() const
{
    return dataSourceName_;
}

void NewExtension_data_source_bindings::setDataSourceName(const std::string& value)
{
    dataSourceName_ = value;
    dataSourceNameIsSet_ = true;
}

bool NewExtension_data_source_bindings::dataSourceNameIsSet() const
{
    return dataSourceNameIsSet_;
}

void NewExtension_data_source_bindings::unsetdataSourceName()
{
    dataSourceNameIsSet_ = false;
}

}
}
}
}
}


