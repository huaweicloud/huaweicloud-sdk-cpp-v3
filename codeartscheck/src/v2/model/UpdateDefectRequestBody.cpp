

#include "huaweicloud/codeartscheck/v2/model/UpdateDefectRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateDefectRequestBody::UpdateDefectRequestBody()
{
    defectId_ = "";
    defectIdIsSet_ = false;
    defectStatus_ = "";
    defectStatusIsSet_ = false;
}

UpdateDefectRequestBody::~UpdateDefectRequestBody() = default;

void UpdateDefectRequestBody::validate()
{
}

web::json::value UpdateDefectRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defectIdIsSet_) {
        val[utility::conversions::to_string_t("defect_id")] = ModelBase::toJson(defectId_);
    }
    if(defectStatusIsSet_) {
        val[utility::conversions::to_string_t("defect_status")] = ModelBase::toJson(defectStatus_);
    }

    return val;
}
bool UpdateDefectRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defect_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateDefectRequestBody::getDefectId() const
{
    return defectId_;
}

void UpdateDefectRequestBody::setDefectId(const std::string& value)
{
    defectId_ = value;
    defectIdIsSet_ = true;
}

bool UpdateDefectRequestBody::defectIdIsSet() const
{
    return defectIdIsSet_;
}

void UpdateDefectRequestBody::unsetdefectId()
{
    defectIdIsSet_ = false;
}

std::string UpdateDefectRequestBody::getDefectStatus() const
{
    return defectStatus_;
}

void UpdateDefectRequestBody::setDefectStatus(const std::string& value)
{
    defectStatus_ = value;
    defectStatusIsSet_ = true;
}

bool UpdateDefectRequestBody::defectStatusIsSet() const
{
    return defectStatusIsSet_;
}

void UpdateDefectRequestBody::unsetdefectStatus()
{
    defectStatusIsSet_ = false;
}

}
}
}
}
}


