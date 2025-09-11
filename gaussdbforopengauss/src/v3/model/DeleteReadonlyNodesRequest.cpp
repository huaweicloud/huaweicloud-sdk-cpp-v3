

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteReadonlyNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteReadonlyNodesRequest::DeleteReadonlyNodesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteReadonlyNodesRequest::~DeleteReadonlyNodesRequest() = default;

void DeleteReadonlyNodesRequest::validate()
{
}

web::json::value DeleteReadonlyNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteReadonlyNodesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteReadonlyNodesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteReadonlyNodesRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteReadonlyNodesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteReadonlyNodesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteReadonlyNodesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteReadonlyNodesRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteReadonlyNodesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteReadonlyNodesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteReadonlyNodesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteReadonlyNodesRequestBody DeleteReadonlyNodesRequest::getBody() const
{
    return body_;
}

void DeleteReadonlyNodesRequest::setBody(const DeleteReadonlyNodesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteReadonlyNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteReadonlyNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


