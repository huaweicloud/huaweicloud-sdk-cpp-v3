

#include "huaweicloud/ecs/v2/model/UpdateSerialConsoleOptionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateSerialConsoleOptionsRequestBody::UpdateSerialConsoleOptionsRequestBody()
{
    serialConsoleOptionsIsSet_ = false;
}

UpdateSerialConsoleOptionsRequestBody::~UpdateSerialConsoleOptionsRequestBody() = default;

void UpdateSerialConsoleOptionsRequestBody::validate()
{
}

web::json::value UpdateSerialConsoleOptionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serialConsoleOptionsIsSet_) {
        val[utility::conversions::to_string_t("serial_console_options")] = ModelBase::toJson(serialConsoleOptions_);
    }

    return val;
}
bool UpdateSerialConsoleOptionsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serial_console_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_console_options"));
        if(!fieldValue.is_null())
        {
            UpdateSerialConsoleOptionsOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialConsoleOptions(refVal);
        }
    }
    return ok;
}


UpdateSerialConsoleOptionsOption UpdateSerialConsoleOptionsRequestBody::getSerialConsoleOptions() const
{
    return serialConsoleOptions_;
}

void UpdateSerialConsoleOptionsRequestBody::setSerialConsoleOptions(const UpdateSerialConsoleOptionsOption& value)
{
    serialConsoleOptions_ = value;
    serialConsoleOptionsIsSet_ = true;
}

bool UpdateSerialConsoleOptionsRequestBody::serialConsoleOptionsIsSet() const
{
    return serialConsoleOptionsIsSet_;
}

void UpdateSerialConsoleOptionsRequestBody::unsetserialConsoleOptions()
{
    serialConsoleOptionsIsSet_ = false;
}

}
}
}
}
}


