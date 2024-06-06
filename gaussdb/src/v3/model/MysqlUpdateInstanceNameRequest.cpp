

#include "huaweicloud/gaussdb/v3/model/MysqlUpdateInstanceNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlUpdateInstanceNameRequest::MysqlUpdateInstanceNameRequest()
{
    name_ = "";
    nameIsSet_ = false;
    isModifyNodeName_ = "";
    isModifyNodeNameIsSet_ = false;
}

MysqlUpdateInstanceNameRequest::~MysqlUpdateInstanceNameRequest() = default;

void MysqlUpdateInstanceNameRequest::validate()
{
}

web::json::value MysqlUpdateInstanceNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(isModifyNodeNameIsSet_) {
        val[utility::conversions::to_string_t("is_modify_node_name")] = ModelBase::toJson(isModifyNodeName_);
    }

    return val;
}
bool MysqlUpdateInstanceNameRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_modify_node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_modify_node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsModifyNodeName(refVal);
        }
    }
    return ok;
}


std::string MysqlUpdateInstanceNameRequest::getName() const
{
    return name_;
}

void MysqlUpdateInstanceNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlUpdateInstanceNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlUpdateInstanceNameRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlUpdateInstanceNameRequest::getIsModifyNodeName() const
{
    return isModifyNodeName_;
}

void MysqlUpdateInstanceNameRequest::setIsModifyNodeName(const std::string& value)
{
    isModifyNodeName_ = value;
    isModifyNodeNameIsSet_ = true;
}

bool MysqlUpdateInstanceNameRequest::isModifyNodeNameIsSet() const
{
    return isModifyNodeNameIsSet_;
}

void MysqlUpdateInstanceNameRequest::unsetisModifyNodeName()
{
    isModifyNodeNameIsSet_ = false;
}

}
}
}
}
}


