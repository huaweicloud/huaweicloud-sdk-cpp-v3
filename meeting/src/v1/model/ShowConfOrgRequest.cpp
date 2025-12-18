

#include "huaweicloud/meeting/v1/model/ShowConfOrgRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowConfOrgRequest::ShowConfOrgRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
}

ShowConfOrgRequest::~ShowConfOrgRequest() = default;

void ShowConfOrgRequest::validate()
{
}

web::json::value ShowConfOrgRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }

    return val;
}
bool ShowConfOrgRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
        }
    }
    return ok;
}


std::string ShowConfOrgRequest::getConferenceID() const
{
    return conferenceID_;
}

void ShowConfOrgRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool ShowConfOrgRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void ShowConfOrgRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

}
}
}
}
}


