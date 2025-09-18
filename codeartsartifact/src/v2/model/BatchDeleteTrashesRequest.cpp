

#include "huaweicloud/codeartsartifact/v2/model/BatchDeleteTrashesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




BatchDeleteTrashesRequest::BatchDeleteTrashesRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteTrashesRequest::~BatchDeleteTrashesRequest() = default;

void BatchDeleteTrashesRequest::validate()
{
}

web::json::value BatchDeleteTrashesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteTrashesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TrashArtifactModelForDelete> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TrashArtifactModelForDelete>& BatchDeleteTrashesRequest::getBody()
{
    return body_;
}

void BatchDeleteTrashesRequest::setBody(const std::vector<TrashArtifactModelForDelete>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTrashesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTrashesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


