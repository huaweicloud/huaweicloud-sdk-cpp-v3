

#include "huaweicloud/modelarts/v1/model/NodeconfigtemplateMetaV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigtemplateMetaV2::NodeconfigtemplateMetaV2()
{
    name_ = "";
    nameIsSet_ = false;
}

NodeconfigtemplateMetaV2::~NodeconfigtemplateMetaV2() = default;

void NodeconfigtemplateMetaV2::validate()
{
}

web::json::value NodeconfigtemplateMetaV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NodeconfigtemplateMetaV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string NodeconfigtemplateMetaV2::getName() const
{
    return name_;
}

void NodeconfigtemplateMetaV2::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeconfigtemplateMetaV2::nameIsSet() const
{
    return nameIsSet_;
}

void NodeconfigtemplateMetaV2::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


