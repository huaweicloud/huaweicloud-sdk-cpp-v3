

#include "huaweicloud/cfw/v1/model/UpdateIpsWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateIpsWhitelistRequest::UpdateIpsWhitelistRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    listId_ = "";
    listIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIpsWhitelistRequest::~UpdateIpsWhitelistRequest() = default;

void UpdateIpsWhitelistRequest::validate()
{
}

web::json::value UpdateIpsWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(listIdIsSet_) {
        val[utility::conversions::to_string_t("list_id")] = ModelBase::toJson(listId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateIpsWhitelistRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("list_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateIpsWhitelistDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIpsWhitelistRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateIpsWhitelistRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateIpsWhitelistRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateIpsWhitelistRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string UpdateIpsWhitelistRequest::getListId() const
{
    return listId_;
}

void UpdateIpsWhitelistRequest::setListId(const std::string& value)
{
    listId_ = value;
    listIdIsSet_ = true;
}

bool UpdateIpsWhitelistRequest::listIdIsSet() const
{
    return listIdIsSet_;
}

void UpdateIpsWhitelistRequest::unsetlistId()
{
    listIdIsSet_ = false;
}

UpdateIpsWhitelistDto UpdateIpsWhitelistRequest::getBody() const
{
    return body_;
}

void UpdateIpsWhitelistRequest::setBody(const UpdateIpsWhitelistDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIpsWhitelistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIpsWhitelistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


