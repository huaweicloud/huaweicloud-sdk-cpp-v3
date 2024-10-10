

#include "huaweicloud/aad/v2/model/Condition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




Condition::Condition()
{
    category_ = "";
    categoryIsSet_ = false;
    contentsIsSet_ = false;
    index_ = "";
    indexIsSet_ = false;
    logicOperation_ = "";
    logicOperationIsSet_ = false;
}

Condition::~Condition() = default;

void Condition::validate()
{
}

web::json::value Condition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(contentsIsSet_) {
        val[utility::conversions::to_string_t("contents")] = ModelBase::toJson(contents_);
    }
    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }
    if(logicOperationIsSet_) {
        val[utility::conversions::to_string_t("logic_operation")] = ModelBase::toJson(logicOperation_);
    }

    return val;
}
bool Condition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contents"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logic_operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logic_operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogicOperation(refVal);
        }
    }
    return ok;
}


std::string Condition::getCategory() const
{
    return category_;
}

void Condition::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool Condition::categoryIsSet() const
{
    return categoryIsSet_;
}

void Condition::unsetcategory()
{
    categoryIsSet_ = false;
}

std::vector<std::string>& Condition::getContents()
{
    return contents_;
}

void Condition::setContents(const std::vector<std::string>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool Condition::contentsIsSet() const
{
    return contentsIsSet_;
}

void Condition::unsetcontents()
{
    contentsIsSet_ = false;
}

std::string Condition::getIndex() const
{
    return index_;
}

void Condition::setIndex(const std::string& value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool Condition::indexIsSet() const
{
    return indexIsSet_;
}

void Condition::unsetindex()
{
    indexIsSet_ = false;
}

std::string Condition::getLogicOperation() const
{
    return logicOperation_;
}

void Condition::setLogicOperation(const std::string& value)
{
    logicOperation_ = value;
    logicOperationIsSet_ = true;
}

bool Condition::logicOperationIsSet() const
{
    return logicOperationIsSet_;
}

void Condition::unsetlogicOperation()
{
    logicOperationIsSet_ = false;
}

}
}
}
}
}


