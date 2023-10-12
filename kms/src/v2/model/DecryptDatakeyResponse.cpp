

#include "huaweicloud/kms/v2/model/DecryptDatakeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDatakeyResponse::DecryptDatakeyResponse()
{
    dataKey_ = "";
    dataKeyIsSet_ = false;
    datakeyLength_ = "";
    datakeyLengthIsSet_ = false;
    datakeyDgst_ = "";
    datakeyDgstIsSet_ = false;
}

DecryptDatakeyResponse::~DecryptDatakeyResponse() = default;

void DecryptDatakeyResponse::validate()
{
}

web::json::value DecryptDatakeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataKeyIsSet_) {
        val[utility::conversions::to_string_t("data_key")] = ModelBase::toJson(dataKey_);
    }
    if(datakeyLengthIsSet_) {
        val[utility::conversions::to_string_t("datakey_length")] = ModelBase::toJson(datakeyLength_);
    }
    if(datakeyDgstIsSet_) {
        val[utility::conversions::to_string_t("datakey_dgst")] = ModelBase::toJson(datakeyDgst_);
    }

    return val;
}
bool DecryptDatakeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datakey_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datakey_dgst"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_dgst"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyDgst(refVal);
        }
    }
    return ok;
}


std::string DecryptDatakeyResponse::getDataKey() const
{
    return dataKey_;
}

void DecryptDatakeyResponse::setDataKey(const std::string& value)
{
    dataKey_ = value;
    dataKeyIsSet_ = true;
}

bool DecryptDatakeyResponse::dataKeyIsSet() const
{
    return dataKeyIsSet_;
}

void DecryptDatakeyResponse::unsetdataKey()
{
    dataKeyIsSet_ = false;
}

std::string DecryptDatakeyResponse::getDatakeyLength() const
{
    return datakeyLength_;
}

void DecryptDatakeyResponse::setDatakeyLength(const std::string& value)
{
    datakeyLength_ = value;
    datakeyLengthIsSet_ = true;
}

bool DecryptDatakeyResponse::datakeyLengthIsSet() const
{
    return datakeyLengthIsSet_;
}

void DecryptDatakeyResponse::unsetdatakeyLength()
{
    datakeyLengthIsSet_ = false;
}

std::string DecryptDatakeyResponse::getDatakeyDgst() const
{
    return datakeyDgst_;
}

void DecryptDatakeyResponse::setDatakeyDgst(const std::string& value)
{
    datakeyDgst_ = value;
    datakeyDgstIsSet_ = true;
}

bool DecryptDatakeyResponse::datakeyDgstIsSet() const
{
    return datakeyDgstIsSet_;
}

void DecryptDatakeyResponse::unsetdatakeyDgst()
{
    datakeyDgstIsSet_ = false;
}

}
}
}
}
}


