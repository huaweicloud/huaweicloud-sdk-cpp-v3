

#include "huaweicloud/aad/v2/model/WafCustomCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




WafCustomCondition::WafCustomCondition()
{
    category_ = "";
    categoryIsSet_ = false;
    index_ = "";
    indexIsSet_ = false;
    logicOperation_ = "";
    logicOperationIsSet_ = false;
    contentsIsSet_ = false;
}

WafCustomCondition::~WafCustomCondition() = default;

void WafCustomCondition::validate()
{
}

web::json::value WafCustomCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }
    if(logicOperationIsSet_) {
        val[utility::conversions::to_string_t("logic_operation")] = ModelBase::toJson(logicOperation_);
    }
    if(contentsIsSet_) {
        val[utility::conversions::to_string_t("contents")] = ModelBase::toJson(contents_);
    }

    return val;
}
bool WafCustomCondition::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("contents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contents"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContents(refVal);
        }
    }
    return ok;
}


std::string WafCustomCondition::getCategory() const
{
    return category_;
}

void WafCustomCondition::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool WafCustomCondition::categoryIsSet() const
{
    return categoryIsSet_;
}

void WafCustomCondition::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string WafCustomCondition::getIndex() const
{
    return index_;
}

void WafCustomCondition::setIndex(const std::string& value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool WafCustomCondition::indexIsSet() const
{
    return indexIsSet_;
}

void WafCustomCondition::unsetindex()
{
    indexIsSet_ = false;
}

std::string WafCustomCondition::getLogicOperation() const
{
    return logicOperation_;
}

void WafCustomCondition::setLogicOperation(const std::string& value)
{
    logicOperation_ = value;
    logicOperationIsSet_ = true;
}

bool WafCustomCondition::logicOperationIsSet() const
{
    return logicOperationIsSet_;
}

void WafCustomCondition::unsetlogicOperation()
{
    logicOperationIsSet_ = false;
}

std::vector<std::string>& WafCustomCondition::getContents()
{
    return contents_;
}

void WafCustomCondition::setContents(const std::vector<std::string>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool WafCustomCondition::contentsIsSet() const
{
    return contentsIsSet_;
}

void WafCustomCondition::unsetcontents()
{
    contentsIsSet_ = false;
}

}
}
}
}
}


