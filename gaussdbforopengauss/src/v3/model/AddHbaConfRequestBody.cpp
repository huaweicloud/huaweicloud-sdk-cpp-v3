

#include "huaweicloud/gaussdbforopengauss/v3/model/AddHbaConfRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AddHbaConfRequestBody::AddHbaConfRequestBody()
{
    hbaConfsIsSet_ = false;
}

AddHbaConfRequestBody::~AddHbaConfRequestBody() = default;

void AddHbaConfRequestBody::validate()
{
}

web::json::value AddHbaConfRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hbaConfsIsSet_) {
        val[utility::conversions::to_string_t("hba_confs")] = ModelBase::toJson(hbaConfs_);
    }

    return val;
}
bool AddHbaConfRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hba_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hba_confs"));
        if(!fieldValue.is_null())
        {
            std::vector<HbaConfOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHbaConfs(refVal);
        }
    }
    return ok;
}


std::vector<HbaConfOption>& AddHbaConfRequestBody::getHbaConfs()
{
    return hbaConfs_;
}

void AddHbaConfRequestBody::setHbaConfs(const std::vector<HbaConfOption>& value)
{
    hbaConfs_ = value;
    hbaConfsIsSet_ = true;
}

bool AddHbaConfRequestBody::hbaConfsIsSet() const
{
    return hbaConfsIsSet_;
}

void AddHbaConfRequestBody::unsethbaConfs()
{
    hbaConfsIsSet_ = false;
}

}
}
}
}
}


