

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSQLExcuteNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSQLExcuteNodeRequestBody::ListSQLExcuteNodeRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
}

ListSQLExcuteNodeRequestBody::~ListSQLExcuteNodeRequestBody() = default;

void ListSQLExcuteNodeRequestBody::validate()
{
}

web::json::value ListSQLExcuteNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool ListSQLExcuteNodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string ListSQLExcuteNodeRequestBody::getAction() const
{
    return action_;
}

void ListSQLExcuteNodeRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListSQLExcuteNodeRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListSQLExcuteNodeRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


