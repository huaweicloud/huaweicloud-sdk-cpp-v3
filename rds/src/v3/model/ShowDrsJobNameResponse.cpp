

#include "huaweicloud/rds/v3/model/ShowDrsJobNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDrsJobNameResponse::ShowDrsJobNameResponse()
{
    drsName_ = "";
    drsNameIsSet_ = false;
}

ShowDrsJobNameResponse::~ShowDrsJobNameResponse() = default;

void ShowDrsJobNameResponse::validate()
{
}

web::json::value ShowDrsJobNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(drsNameIsSet_) {
        val[utility::conversions::to_string_t("drs_name")] = ModelBase::toJson(drsName_);
    }

    return val;
}
bool ShowDrsJobNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("drs_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drs_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrsName(refVal);
        }
    }
    return ok;
}


std::string ShowDrsJobNameResponse::getDrsName() const
{
    return drsName_;
}

void ShowDrsJobNameResponse::setDrsName(const std::string& value)
{
    drsName_ = value;
    drsNameIsSet_ = true;
}

bool ShowDrsJobNameResponse::drsNameIsSet() const
{
    return drsNameIsSet_;
}

void ShowDrsJobNameResponse::unsetdrsName()
{
    drsNameIsSet_ = false;
}

}
}
}
}
}


