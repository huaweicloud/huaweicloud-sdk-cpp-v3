

#include "huaweicloud/cce/v3/model/ListHyperNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListHyperNodesResponse::ListHyperNodesResponse()
{
    bodyIsSet_ = false;
}

ListHyperNodesResponse::~ListHyperNodesResponse() = default;

void ListHyperNodesResponse::validate()
{
}

web::json::value ListHyperNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListHyperNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<HyperNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<HyperNode>& ListHyperNodesResponse::getBody()
{
    return body_;
}

void ListHyperNodesResponse::setBody(const std::vector<HyperNode>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHyperNodesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHyperNodesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


