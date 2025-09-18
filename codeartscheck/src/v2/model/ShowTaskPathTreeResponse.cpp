

#include "huaweicloud/codeartscheck/v2/model/ShowTaskPathTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskPathTreeResponse::ShowTaskPathTreeResponse()
{
    infoIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowTaskPathTreeResponse::~ShowTaskPathTreeResponse() = default;

void ShowTaskPathTreeResponse::validate()
{
}

web::json::value ShowTaskPathTreeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowTaskPathTreeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::vector<TreeNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TreeNode>& ShowTaskPathTreeResponse::getInfo()
{
    return info_;
}

void ShowTaskPathTreeResponse::setInfo(const std::vector<TreeNode>& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ShowTaskPathTreeResponse::infoIsSet() const
{
    return infoIsSet_;
}

void ShowTaskPathTreeResponse::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t ShowTaskPathTreeResponse::getTotal() const
{
    return total_;
}

void ShowTaskPathTreeResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTaskPathTreeResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTaskPathTreeResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


