

#include "huaweicloud/cpcs/v1/model/ShowClusterUriResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowClusterUriResponse::ShowClusterUriResponse()
{
    uri_ = "";
    uriIsSet_ = false;
}

ShowClusterUriResponse::~ShowClusterUriResponse() = default;

void ShowClusterUriResponse::validate()
{
}

web::json::value ShowClusterUriResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }

    return val;
}
bool ShowClusterUriResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    return ok;
}


std::string ShowClusterUriResponse::getUri() const
{
    return uri_;
}

void ShowClusterUriResponse::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ShowClusterUriResponse::uriIsSet() const
{
    return uriIsSet_;
}

void ShowClusterUriResponse::unseturi()
{
    uriIsSet_ = false;
}

}
}
}
}
}


