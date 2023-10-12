

#include "huaweicloud/drs/v5/model/AsyncActionBaseResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AsyncActionBaseResp::AsyncActionBaseResp()
{
    queryId_ = "";
    queryIdIsSet_ = false;
}

AsyncActionBaseResp::~AsyncActionBaseResp() = default;

void AsyncActionBaseResp::validate()
{
}

web::json::value AsyncActionBaseResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }

    return val;
}
bool AsyncActionBaseResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    return ok;
}


std::string AsyncActionBaseResp::getQueryId() const
{
    return queryId_;
}

void AsyncActionBaseResp::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool AsyncActionBaseResp::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void AsyncActionBaseResp::unsetqueryId()
{
    queryIdIsSet_ = false;
}

}
}
}
}
}


