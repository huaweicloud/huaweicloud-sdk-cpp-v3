

#include "huaweicloud/lts/v2/model/CreateDashBoardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateDashBoardRequest::CreateDashBoardRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDashBoardRequest::~CreateDashBoardRequest() = default;

void CreateDashBoardRequest::validate()
{
}

web::json::value CreateDashBoardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateDashBoardRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDashBoardReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDashBoardRequest::getContentType() const
{
    return contentType_;
}

void CreateDashBoardRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateDashBoardRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateDashBoardRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateDashBoardReqBody CreateDashBoardRequest::getBody() const
{
    return body_;
}

void CreateDashBoardRequest::setBody(const CreateDashBoardReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDashBoardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDashBoardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


