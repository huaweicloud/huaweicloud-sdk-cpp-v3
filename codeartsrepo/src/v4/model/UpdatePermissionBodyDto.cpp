

#include "huaweicloud/codeartsrepo/v4/model/UpdatePermissionBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdatePermissionBodyDto::UpdatePermissionBodyDto()
{
    dataIsSet_ = false;
}

UpdatePermissionBodyDto::~UpdatePermissionBodyDto() = default;

void UpdatePermissionBodyDto::validate()
{
}

web::json::value UpdatePermissionBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdatePermissionBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdatePermissionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<UpdatePermissionDto>& UpdatePermissionBodyDto::getData()
{
    return data_;
}

void UpdatePermissionBodyDto::setData(const std::vector<UpdatePermissionDto>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdatePermissionBodyDto::dataIsSet() const
{
    return dataIsSet_;
}

void UpdatePermissionBodyDto::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


