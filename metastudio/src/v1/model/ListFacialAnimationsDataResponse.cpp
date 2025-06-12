

#include "huaweicloud/metastudio/v1/model/ListFacialAnimationsDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListFacialAnimationsDataResponse::ListFacialAnimationsDataResponse()
{
    csvFileDownloadUrl_ = "";
    csvFileDownloadUrlIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

ListFacialAnimationsDataResponse::~ListFacialAnimationsDataResponse() = default;

void ListFacialAnimationsDataResponse::validate()
{
}

web::json::value ListFacialAnimationsDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(csvFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("csv_file_download_url")] = ModelBase::toJson(csvFileDownloadUrl_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool ListFacialAnimationsDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("csv_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("csv_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCsvFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string ListFacialAnimationsDataResponse::getCsvFileDownloadUrl() const
{
    return csvFileDownloadUrl_;
}

void ListFacialAnimationsDataResponse::setCsvFileDownloadUrl(const std::string& value)
{
    csvFileDownloadUrl_ = value;
    csvFileDownloadUrlIsSet_ = true;
}

bool ListFacialAnimationsDataResponse::csvFileDownloadUrlIsSet() const
{
    return csvFileDownloadUrlIsSet_;
}

void ListFacialAnimationsDataResponse::unsetcsvFileDownloadUrl()
{
    csvFileDownloadUrlIsSet_ = false;
}

std::string ListFacialAnimationsDataResponse::getState() const
{
    return state_;
}

void ListFacialAnimationsDataResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListFacialAnimationsDataResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ListFacialAnimationsDataResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListFacialAnimationsDataResponse::getErrorMessage() const
{
    return errorMessage_;
}

void ListFacialAnimationsDataResponse::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ListFacialAnimationsDataResponse::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ListFacialAnimationsDataResponse::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


