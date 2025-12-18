

#include "huaweicloud/meeting/v1/model/ShowHisMeetingDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowHisMeetingDetailResponse::ShowHisMeetingDetailResponse()
{
    conferenceDataIsSet_ = false;
    dataIsSet_ = false;
}

ShowHisMeetingDetailResponse::~ShowHisMeetingDetailResponse() = default;

void ShowHisMeetingDetailResponse::validate()
{
}

web::json::value ShowHisMeetingDetailResponse::toJson() const
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
bool ShowHisMeetingDetailResponse::fromJson(const web::json::value& val)
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


ConferenceInfo ShowHisMeetingDetailResponse::getConferenceData() const
{
    return conferenceData_;
}

void ShowHisMeetingDetailResponse::setConferenceData(const ConferenceInfo& value)
{
    conferenceData_ = value;
    conferenceDataIsSet_ = true;
}

bool ShowHisMeetingDetailResponse::conferenceDataIsSet() const
{
    return conferenceDataIsSet_;
}

void ShowHisMeetingDetailResponse::unsetconferenceData()
{
    conferenceDataIsSet_ = false;
}

PageParticipant ShowHisMeetingDetailResponse::getData() const
{
    return data_;
}

void ShowHisMeetingDetailResponse::setData(const PageParticipant& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowHisMeetingDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowHisMeetingDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


