

#include "huaweicloud/rds/v3/model/AddCopyDatabaseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AddCopyDatabaseRequestBody::AddCopyDatabaseRequestBody()
{
    procedureName_ = "";
    procedureNameIsSet_ = false;
    paramsIsSet_ = false;
}

AddCopyDatabaseRequestBody::~AddCopyDatabaseRequestBody() = default;

void AddCopyDatabaseRequestBody::validate()
{
}

web::json::value AddCopyDatabaseRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(procedureNameIsSet_) {
        val[utility::conversions::to_string_t("procedure_name")] = ModelBase::toJson(procedureName_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool AddCopyDatabaseRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("procedure_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("procedure_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcedureName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string AddCopyDatabaseRequestBody::getProcedureName() const
{
    return procedureName_;
}

void AddCopyDatabaseRequestBody::setProcedureName(const std::string& value)
{
    procedureName_ = value;
    procedureNameIsSet_ = true;
}

bool AddCopyDatabaseRequestBody::procedureNameIsSet() const
{
    return procedureNameIsSet_;
}

void AddCopyDatabaseRequestBody::unsetprocedureName()
{
    procedureNameIsSet_ = false;
}

Object AddCopyDatabaseRequestBody::getParams() const
{
    return params_;
}

void AddCopyDatabaseRequestBody::setParams(const Object& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool AddCopyDatabaseRequestBody::paramsIsSet() const
{
    return paramsIsSet_;
}

void AddCopyDatabaseRequestBody::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


