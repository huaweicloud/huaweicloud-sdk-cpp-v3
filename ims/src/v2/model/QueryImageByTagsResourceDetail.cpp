

#include "huaweicloud/ims/v2/model/QueryImageByTagsResourceDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




QueryImageByTagsResourceDetail::QueryImageByTagsResourceDetail()
{
    status_ = "";
    statusIsSet_ = false;
}

QueryImageByTagsResourceDetail::~QueryImageByTagsResourceDetail() = default;

void QueryImageByTagsResourceDetail::validate()
{
}

web::json::value QueryImageByTagsResourceDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool QueryImageByTagsResourceDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string QueryImageByTagsResourceDetail::getStatus() const
{
    return status_;
}

void QueryImageByTagsResourceDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryImageByTagsResourceDetail::statusIsSet() const
{
    return statusIsSet_;
}

void QueryImageByTagsResourceDetail::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


