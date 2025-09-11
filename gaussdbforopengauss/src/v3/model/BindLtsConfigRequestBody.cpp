

#include "huaweicloud/gaussdbforopengauss/v3/model/BindLtsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindLtsConfigRequestBody::BindLtsConfigRequestBody()
{
    listIsSet_ = false;
}

BindLtsConfigRequestBody::~BindLtsConfigRequestBody() = default;

void BindLtsConfigRequestBody::validate()
{
}

web::json::value BindLtsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool BindLtsConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceSaveLtsConfigOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


std::vector<InstanceSaveLtsConfigOption>& BindLtsConfigRequestBody::getList()
{
    return list_;
}

void BindLtsConfigRequestBody::setList(const std::vector<InstanceSaveLtsConfigOption>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BindLtsConfigRequestBody::listIsSet() const
{
    return listIsSet_;
}

void BindLtsConfigRequestBody::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


