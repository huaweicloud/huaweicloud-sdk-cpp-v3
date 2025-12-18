

#include "huaweicloud/meeting/v1/model/ShowOnlineMeetingDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowOnlineMeetingDetailResponse::ShowOnlineMeetingDetailResponse()
{
    conferenceDataIsSet_ = false;
    dataIsSet_ = false;
}

ShowOnlineMeetingDetailResponse::~ShowOnlineMeetingDetailResponse() = default;

void ShowOnlineMeetingDetailResponse::validate()
{
}

web::json::value ShowOnlineMeetingDetailResponse::toJson() const
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
bool ShowOnlineMeetingDetailResponse::fromJson(const web::json::value& val)
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


ConferenceInfo ShowOnlineMeetingDetailResponse::getConferenceData() const
{
    return conferenceData_;
}

void ShowOnlineMeetingDetailResponse::setConferenceData(const ConferenceInfo& value)
{
    conferenceData_ = value;
    conferenceDataIsSet_ = true;
}

bool ShowOnlineMeetingDetailResponse::conferenceDataIsSet() const
{
    return conferenceDataIsSet_;
}

void ShowOnlineMeetingDetailResponse::unsetconferenceData()
{
    conferenceDataIsSet_ = false;
}

PageParticipant ShowOnlineMeetingDetailResponse::getData() const
{
    return data_;
}

void ShowOnlineMeetingDetailResponse::setData(const PageParticipant& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowOnlineMeetingDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowOnlineMeetingDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


