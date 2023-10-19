

#include "huaweicloud/cfw/v1/model/ListProtectedVpcsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListProtectedVpcsResponse::ListProtectedVpcsResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    dataIsSet_ = false;
}

ListProtectedVpcsResponse::~ListProtectedVpcsResponse() = default;

void ListProtectedVpcsResponse::validate()
{
}

web::json::value ListProtectedVpcsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListProtectedVpcsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            VPCProtectsVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string ListProtectedVpcsResponse::getTraceId() const
{
    return traceId_;
}

void ListProtectedVpcsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListProtectedVpcsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListProtectedVpcsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

VPCProtectsVo ListProtectedVpcsResponse::getData() const
{
    return data_;
}

void ListProtectedVpcsResponse::setData(const VPCProtectsVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListProtectedVpcsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListProtectedVpcsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


