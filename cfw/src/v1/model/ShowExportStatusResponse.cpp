

#include "huaweicloud/cfw/v1/model/ShowExportStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowExportStatusResponse::ShowExportStatusResponse()
{
    dataIsSet_ = false;
}

ShowExportStatusResponse::~ShowExportStatusResponse() = default;

void ShowExportStatusResponse::validate()
{
}

web::json::value ShowExportStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowExportStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ExportStatusVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ExportStatusVO ShowExportStatusResponse::getData() const
{
    return data_;
}

void ShowExportStatusResponse::setData(const ExportStatusVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowExportStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowExportStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


