

#include "huaweicloud/modelarts/v1/model/IntranetConnectionDeleteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




IntranetConnectionDeleteRequest::IntranetConnectionDeleteRequest()
{
    intranetConnectionIdsIsSet_ = false;
}

IntranetConnectionDeleteRequest::~IntranetConnectionDeleteRequest() = default;

void IntranetConnectionDeleteRequest::validate()
{
}

web::json::value IntranetConnectionDeleteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intranetConnectionIdsIsSet_) {
        val[utility::conversions::to_string_t("intranet_connection_ids")] = ModelBase::toJson(intranetConnectionIds_);
    }

    return val;
}
bool IntranetConnectionDeleteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("intranet_connection_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intranet_connection_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntranetConnectionIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& IntranetConnectionDeleteRequest::getIntranetConnectionIds()
{
    return intranetConnectionIds_;
}

void IntranetConnectionDeleteRequest::setIntranetConnectionIds(const std::vector<std::string>& value)
{
    intranetConnectionIds_ = value;
    intranetConnectionIdsIsSet_ = true;
}

bool IntranetConnectionDeleteRequest::intranetConnectionIdsIsSet() const
{
    return intranetConnectionIdsIsSet_;
}

void IntranetConnectionDeleteRequest::unsetintranetConnectionIds()
{
    intranetConnectionIdsIsSet_ = false;
}

}
}
}
}
}


