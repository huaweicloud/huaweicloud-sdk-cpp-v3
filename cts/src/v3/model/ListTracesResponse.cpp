

#include "huaweicloud/cts/v3/model/ListTracesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListTracesResponse::ListTracesResponse()
{
    tracesIsSet_ = false;
    metaDataIsSet_ = false;
}

ListTracesResponse::~ListTracesResponse() = default;

void ListTracesResponse::validate()
{
}

web::json::value ListTracesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tracesIsSet_) {
        val[utility::conversions::to_string_t("traces")] = ModelBase::toJson(traces_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }

    return val;
}

bool ListTracesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("traces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traces"));
        if(!fieldValue.is_null())
        {
            std::vector<Traces> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraces(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            MetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    return ok;
}


std::vector<Traces>& ListTracesResponse::getTraces()
{
    return traces_;
}

void ListTracesResponse::setTraces(const std::vector<Traces>& value)
{
    traces_ = value;
    tracesIsSet_ = true;
}

bool ListTracesResponse::tracesIsSet() const
{
    return tracesIsSet_;
}

void ListTracesResponse::unsettraces()
{
    tracesIsSet_ = false;
}

MetaData ListTracesResponse::getMetaData() const
{
    return metaData_;
}

void ListTracesResponse::setMetaData(const MetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool ListTracesResponse::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void ListTracesResponse::unsetmetaData()
{
    metaDataIsSet_ = false;
}

}
}
}
}
}


