

#include "huaweicloud/cfw/v1/model/SaveTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SaveTagsResponse::SaveTagsResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

SaveTagsResponse::~SaveTagsResponse() = default;

void SaveTagsResponse::validate()
{
}

web::json::value SaveTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool SaveTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string SaveTagsResponse::getData() const
{
    return data_;
}

void SaveTagsResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SaveTagsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SaveTagsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


