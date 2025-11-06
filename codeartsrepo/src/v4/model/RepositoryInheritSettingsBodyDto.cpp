

#include "huaweicloud/codeartsrepo/v4/model/RepositoryInheritSettingsBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryInheritSettingsBodyDto::RepositoryInheritSettingsBodyDto()
{
    dataIsSet_ = false;
}

RepositoryInheritSettingsBodyDto::~RepositoryInheritSettingsBodyDto() = default;

void RepositoryInheritSettingsBodyDto::validate()
{
}

web::json::value RepositoryInheritSettingsBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool RepositoryInheritSettingsBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryInheritSettingUpdateBodyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryInheritSettingUpdateBodyDto>& RepositoryInheritSettingsBodyDto::getData()
{
    return data_;
}

void RepositoryInheritSettingsBodyDto::setData(const std::vector<RepositoryInheritSettingUpdateBodyDto>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool RepositoryInheritSettingsBodyDto::dataIsSet() const
{
    return dataIsSet_;
}

void RepositoryInheritSettingsBodyDto::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


