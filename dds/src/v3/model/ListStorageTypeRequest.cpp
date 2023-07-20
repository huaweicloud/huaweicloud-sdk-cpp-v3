

#include "huaweicloud/dds/v3/model/ListStorageTypeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListStorageTypeRequest::ListStorageTypeRequest()
{
    engineName_ = "";
    engineNameIsSet_ = false;
}

ListStorageTypeRequest::~ListStorageTypeRequest() = default;

void ListStorageTypeRequest::validate()
{
}

web::json::value ListStorageTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }

    return val;
}

bool ListStorageTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    return ok;
}

std::string ListStorageTypeRequest::getEngineName() const
{
    return engineName_;
}

void ListStorageTypeRequest::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListStorageTypeRequest::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListStorageTypeRequest::unsetengineName()
{
    engineNameIsSet_ = false;
}

}
}
}
}
}


