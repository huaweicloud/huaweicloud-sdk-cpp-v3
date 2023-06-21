

#include "huaweicloud/cloudtable/v2/model/RebootCloudTableClusterResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




RebootCloudTableClusterResponse::RebootCloudTableClusterResponse()
{
    bodyIsSet_ = false;
}

RebootCloudTableClusterResponse::~RebootCloudTableClusterResponse() = default;

void RebootCloudTableClusterResponse::validate()
{
}

web::json::value RebootCloudTableClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RebootCloudTableClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RestartInstanceRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RestartInstanceRsp>& RebootCloudTableClusterResponse::getBody()
{
    return body_;
}

void RebootCloudTableClusterResponse::setBody(const std::vector<RestartInstanceRsp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RebootCloudTableClusterResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void RebootCloudTableClusterResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


