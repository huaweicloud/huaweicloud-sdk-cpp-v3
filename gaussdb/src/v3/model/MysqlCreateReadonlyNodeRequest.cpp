

#include "huaweicloud/gaussdb/v3/model/MysqlCreateReadonlyNodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlCreateReadonlyNodeRequest::MysqlCreateReadonlyNodeRequest()
{
    prioritiesIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

MysqlCreateReadonlyNodeRequest::~MysqlCreateReadonlyNodeRequest() = default;

void MysqlCreateReadonlyNodeRequest::validate()
{
}

web::json::value MysqlCreateReadonlyNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(prioritiesIsSet_) {
        val[utility::conversions::to_string_t("priorities")] = ModelBase::toJson(priorities_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool MysqlCreateReadonlyNodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("priorities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priorities"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}

std::vector<int32_t>& MysqlCreateReadonlyNodeRequest::getPriorities()
{
    return priorities_;
}

void MysqlCreateReadonlyNodeRequest::setPriorities(std::vector<int32_t> value)
{
    priorities_ = value;
    prioritiesIsSet_ = true;
}

bool MysqlCreateReadonlyNodeRequest::prioritiesIsSet() const
{
    return prioritiesIsSet_;
}

void MysqlCreateReadonlyNodeRequest::unsetpriorities()
{
    prioritiesIsSet_ = false;
}

std::string MysqlCreateReadonlyNodeRequest::getIsAutoPay() const
{
    return isAutoPay_;
}

void MysqlCreateReadonlyNodeRequest::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool MysqlCreateReadonlyNodeRequest::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void MysqlCreateReadonlyNodeRequest::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


