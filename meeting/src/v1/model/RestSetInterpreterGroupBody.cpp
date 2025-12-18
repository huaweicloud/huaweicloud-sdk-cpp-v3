

#include "huaweicloud/meeting/v1/model/RestSetInterpreterGroupBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSetInterpreterGroupBody::RestSetInterpreterGroupBody()
{
    interpreterGroupsIsSet_ = false;
}

RestSetInterpreterGroupBody::~RestSetInterpreterGroupBody() = default;

void RestSetInterpreterGroupBody::validate()
{
}

web::json::value RestSetInterpreterGroupBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(interpreterGroupsIsSet_) {
        val[utility::conversions::to_string_t("interpreterGroups")] = ModelBase::toJson(interpreterGroups_);
    }

    return val;
}
bool RestSetInterpreterGroupBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("interpreterGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interpreterGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<InterpreterGroupInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterpreterGroups(refVal);
        }
    }
    return ok;
}


std::vector<InterpreterGroupInfo>& RestSetInterpreterGroupBody::getInterpreterGroups()
{
    return interpreterGroups_;
}

void RestSetInterpreterGroupBody::setInterpreterGroups(const std::vector<InterpreterGroupInfo>& value)
{
    interpreterGroups_ = value;
    interpreterGroupsIsSet_ = true;
}

bool RestSetInterpreterGroupBody::interpreterGroupsIsSet() const
{
    return interpreterGroupsIsSet_;
}

void RestSetInterpreterGroupBody::unsetinterpreterGroups()
{
    interpreterGroupsIsSet_ = false;
}

}
}
}
}
}


