

#include "huaweicloud/dbss/v1/model/CreateReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateReportResponse::CreateReportResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

CreateReportResponse::~CreateReportResponse() = default;

void CreateReportResponse::validate()
{
}

web::json::value CreateReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CreateReportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateReportResponse::getResult() const
{
    return result_;
}

void CreateReportResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateReportResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateReportResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


