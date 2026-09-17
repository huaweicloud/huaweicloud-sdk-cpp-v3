

#include "huaweicloud/projectman/v4/model/RelationConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




RelationConfig::RelationConfig()
{
    relationsIsSet_ = false;
}

RelationConfig::~RelationConfig() = default;

void RelationConfig::validate()
{
}

web::json::value RelationConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(relationsIsSet_) {
        val[utility::conversions::to_string_t("relations")] = ModelBase::toJson(relations_);
    }

    return val;
}
bool RelationConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("relations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relations"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<Relation>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelations(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::vector<Relation>>& RelationConfig::getRelations()
{
    return relations_;
}

void RelationConfig::setRelations(const std::map<std::string, std::vector<Relation>>& value)
{
    relations_ = value;
    relationsIsSet_ = true;
}

bool RelationConfig::relationsIsSet() const
{
    return relationsIsSet_;
}

void RelationConfig::unsetrelations()
{
    relationsIsSet_ = false;
}

}
}
}
}
}


