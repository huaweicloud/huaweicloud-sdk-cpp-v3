

#include "huaweicloud/meeting/v1/model/ShowMeetingDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMeetingDetailResponse::ShowMeetingDetailResponse()
{
    conferenceDataIsSet_ = false;
    dataIsSet_ = false;
}

ShowMeetingDetailResponse::~ShowMeetingDetailResponse() = default;

void ShowMeetingDetailResponse::validate()
{
}

web::json::value ShowMeetingDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceDataIsSet_) {
        val[utility::conversions::to_string_t("conferenceData")] = ModelBase::toJson(conferenceData_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowMeetingDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceData"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceData"));
        if(!fieldValue.is_null())
        {
            ConferenceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            PageParticipant refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ConferenceInfo ShowMeetingDetailResponse::getConferenceData() const
{
    return conferenceData_;
}

void ShowMeetingDetailResponse::setConferenceData(const ConferenceInfo& value)
{
    conferenceData_ = value;
    conferenceDataIsSet_ = true;
}

bool ShowMeetingDetailResponse::conferenceDataIsSet() const
{
    return conferenceDataIsSet_;
}

void ShowMeetingDetailResponse::unsetconferenceData()
{
    conferenceDataIsSet_ = false;
}

PageParticipant ShowMeetingDetailResponse::getData() const
{
    return data_;
}

void ShowMeetingDetailResponse::setData(const PageParticipant& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowMeetingDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowMeetingDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


