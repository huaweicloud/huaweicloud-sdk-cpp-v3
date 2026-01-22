

#include "huaweicloud/cfw/v1/model/BatchCreateIpsWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCreateIpsWhitelistRequest::BatchCreateIpsWhitelistRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateIpsWhitelistRequest::~BatchCreateIpsWhitelistRequest() = default;

void BatchCreateIpsWhitelistRequest::validate()
{
}

web::json::value BatchCreateIpsWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateIpsWhitelistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateIpsWhiteListDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateIpsWhitelistRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchCreateIpsWhitelistRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchCreateIpsWhitelistRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchCreateIpsWhitelistRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

BatchCreateIpsWhiteListDto BatchCreateIpsWhitelistRequest::getBody() const
{
    return body_;
}

void BatchCreateIpsWhitelistRequest::setBody(const BatchCreateIpsWhiteListDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateIpsWhitelistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateIpsWhitelistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


