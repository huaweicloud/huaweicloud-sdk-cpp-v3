

#include "huaweicloud/cce/v5/model/ListImageCachesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ListImageCachesRequest::ListImageCachesRequest()
{
    name_ = "";
    nameIsSet_ = false;
}

ListImageCachesRequest::~ListImageCachesRequest() = default;

void ListImageCachesRequest::validate()
{
}

web::json::value ListImageCachesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListImageCachesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListImageCachesRequest::getName() const
{
    return name_;
}

void ListImageCachesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListImageCachesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListImageCachesRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


