

#include "huaweicloud/identitycenter/v1/model/CreateAliasReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateAliasReqBody::CreateAliasReqBody()
{
    alias_ = "";
    aliasIsSet_ = false;
}

CreateAliasReqBody::~CreateAliasReqBody() = default;

void CreateAliasReqBody::validate()
{
}

web::json::value CreateAliasReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool CreateAliasReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string CreateAliasReqBody::getAlias() const
{
    return alias_;
}

void CreateAliasReqBody::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool CreateAliasReqBody::aliasIsSet() const
{
    return aliasIsSet_;
}

void CreateAliasReqBody::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


