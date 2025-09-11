

#include "huaweicloud/gaussdbforopengauss/v3/model/ListReadonlyNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListReadonlyNodesRequest::ListReadonlyNodesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListReadonlyNodesRequest::~ListReadonlyNodesRequest() = default;

void ListReadonlyNodesRequest::validate()
{
}

web::json::value ListReadonlyNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListReadonlyNodesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListReadonlyNodesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListReadonlyNodesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListReadonlyNodesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListReadonlyNodesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListReadonlyNodesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListReadonlyNodesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListReadonlyNodesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListReadonlyNodesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


