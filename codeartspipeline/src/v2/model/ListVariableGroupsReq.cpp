

#include "huaweicloud/codeartspipeline/v2/model/ListVariableGroupsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListVariableGroupsReq::ListVariableGroupsReq()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListVariableGroupsReq::~ListVariableGroupsReq() = default;

void ListVariableGroupsReq::validate()
{
}

web::json::value ListVariableGroupsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListVariableGroupsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
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


int32_t ListVariableGroupsReq::getOffset() const
{
    return offset_;
}

void ListVariableGroupsReq::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVariableGroupsReq::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVariableGroupsReq::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListVariableGroupsReq::getLimit() const
{
    return limit_;
}

void ListVariableGroupsReq::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVariableGroupsReq::limitIsSet() const
{
    return limitIsSet_;
}

void ListVariableGroupsReq::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVariableGroupsReq::getName() const
{
    return name_;
}

void ListVariableGroupsReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVariableGroupsReq::nameIsSet() const
{
    return nameIsSet_;
}

void ListVariableGroupsReq::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


