

#include "huaweicloud/live/v2/model/ListTranscodeConcurrencyNumResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListTranscodeConcurrencyNumResponse::ListTranscodeConcurrencyNumResponse()
{
    dataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTranscodeConcurrencyNumResponse::~ListTranscodeConcurrencyNumResponse() = default;

void ListTranscodeConcurrencyNumResponse::validate()
{
}

web::json::value ListTranscodeConcurrencyNumResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTranscodeConcurrencyNumResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TranscodeConNumData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
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


std::vector<TranscodeConNumData>& ListTranscodeConcurrencyNumResponse::getDataList()
{
    return dataList_;
}

void ListTranscodeConcurrencyNumResponse::setDataList(const std::vector<TranscodeConNumData>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListTranscodeConcurrencyNumResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListTranscodeConcurrencyNumResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

std::string ListTranscodeConcurrencyNumResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTranscodeConcurrencyNumResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTranscodeConcurrencyNumResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTranscodeConcurrencyNumResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


