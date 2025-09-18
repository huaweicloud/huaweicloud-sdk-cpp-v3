

#include "huaweicloud/ga/v1/model/ShowLogtankRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowLogtankRequest::ShowLogtankRequest()
{
    logtankId_ = "";
    logtankIdIsSet_ = false;
}

ShowLogtankRequest::~ShowLogtankRequest() = default;

void ShowLogtankRequest::validate()
{
}

web::json::value ShowLogtankRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logtankIdIsSet_) {
        val[utility::conversions::to_string_t("logtank_id")] = ModelBase::toJson(logtankId_);
    }

    return val;
}
bool ShowLogtankRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logtank_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtank_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtankId(refVal);
        }
    }
    return ok;
}


std::string ShowLogtankRequest::getLogtankId() const
{
    return logtankId_;
}

void ShowLogtankRequest::setLogtankId(const std::string& value)
{
    logtankId_ = value;
    logtankIdIsSet_ = true;
}

bool ShowLogtankRequest::logtankIdIsSet() const
{
    return logtankIdIsSet_;
}

void ShowLogtankRequest::unsetlogtankId()
{
    logtankIdIsSet_ = false;
}

}
}
}
}
}


