

#include "huaweicloud/cfw/v1/model/ShowImportStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowImportStatusResponse::ShowImportStatusResponse()
{
    dataIsSet_ = false;
}

ShowImportStatusResponse::~ShowImportStatusResponse() = default;

void ShowImportStatusResponse::validate()
{
}

web::json::value ShowImportStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowImportStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ShowImportStatusId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ShowImportStatusId ShowImportStatusResponse::getData() const
{
    return data_;
}

void ShowImportStatusResponse::setData(const ShowImportStatusId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowImportStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowImportStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


