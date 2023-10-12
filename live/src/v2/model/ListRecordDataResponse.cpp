

#include "huaweicloud/live/v2/model/ListRecordDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListRecordDataResponse::ListRecordDataResponse()
{
    recordDataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListRecordDataResponse::~ListRecordDataResponse() = default;

void ListRecordDataResponse::validate()
{
}

web::json::value ListRecordDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordDataListIsSet_) {
        val[utility::conversions::to_string_t("record_data_list")] = ModelBase::toJson(recordDataList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListRecordDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordDataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<RecordData>& ListRecordDataResponse::getRecordDataList()
{
    return recordDataList_;
}

void ListRecordDataResponse::setRecordDataList(const std::vector<RecordData>& value)
{
    recordDataList_ = value;
    recordDataListIsSet_ = true;
}

bool ListRecordDataResponse::recordDataListIsSet() const
{
    return recordDataListIsSet_;
}

void ListRecordDataResponse::unsetrecordDataList()
{
    recordDataListIsSet_ = false;
}

std::string ListRecordDataResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListRecordDataResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListRecordDataResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListRecordDataResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


