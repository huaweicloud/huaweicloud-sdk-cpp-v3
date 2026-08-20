

#include "huaweicloud/projectman/v4/model/BatchBaselineIpdIssuesParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchBaselineIpdIssuesParam::BatchBaselineIpdIssuesParam()
{
    idIsSet_ = false;
    attributeIsSet_ = false;
}

BatchBaselineIpdIssuesParam::~BatchBaselineIpdIssuesParam() = default;

void BatchBaselineIpdIssuesParam::validate()
{
}

web::json::value BatchBaselineIpdIssuesParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(attributeIsSet_) {
        val[utility::conversions::to_string_t("attribute")] = ModelBase::toJson(attribute_);
    }

    return val;
}
bool BatchBaselineIpdIssuesParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute"));
        if(!fieldValue.is_null())
        {
            BatchBaselineIpdIssuesParam_attribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribute(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchBaselineIpdIssuesParam::getId()
{
    return id_;
}

void BatchBaselineIpdIssuesParam::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchBaselineIpdIssuesParam::idIsSet() const
{
    return idIsSet_;
}

void BatchBaselineIpdIssuesParam::unsetid()
{
    idIsSet_ = false;
}

BatchBaselineIpdIssuesParam_attribute BatchBaselineIpdIssuesParam::getAttribute() const
{
    return attribute_;
}

void BatchBaselineIpdIssuesParam::setAttribute(const BatchBaselineIpdIssuesParam_attribute& value)
{
    attribute_ = value;
    attributeIsSet_ = true;
}

bool BatchBaselineIpdIssuesParam::attributeIsSet() const
{
    return attributeIsSet_;
}

void BatchBaselineIpdIssuesParam::unsetattribute()
{
    attributeIsSet_ = false;
}

}
}
}
}
}


