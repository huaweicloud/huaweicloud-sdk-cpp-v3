

#include "huaweicloud/gaussdbforopengauss/v3/model/UnbindLtsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UnbindLtsConfigRequestBody::UnbindLtsConfigRequestBody()
{
    listIsSet_ = false;
}

UnbindLtsConfigRequestBody::~UnbindLtsConfigRequestBody() = default;

void UnbindLtsConfigRequestBody::validate()
{
}

web::json::value UnbindLtsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool UnbindLtsConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceDeleteLtsConfigOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


std::vector<InstanceDeleteLtsConfigOption>& UnbindLtsConfigRequestBody::getList()
{
    return list_;
}

void UnbindLtsConfigRequestBody::setList(const std::vector<InstanceDeleteLtsConfigOption>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool UnbindLtsConfigRequestBody::listIsSet() const
{
    return listIsSet_;
}

void UnbindLtsConfigRequestBody::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


