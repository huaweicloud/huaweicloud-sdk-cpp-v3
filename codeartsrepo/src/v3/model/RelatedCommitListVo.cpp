

#include "huaweicloud/codeartsrepo/v3/model/RelatedCommitListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RelatedCommitListVo::RelatedCommitListVo()
{
    total_ = 0;
    totalIsSet_ = false;
    listIsSet_ = false;
}

RelatedCommitListVo::~RelatedCommitListVo() = default;

void RelatedCommitListVo::validate()
{
}

web::json::value RelatedCommitListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool RelatedCommitListVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<RelatedCommitVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int32_t RelatedCommitListVo::getTotal() const
{
    return total_;
}

void RelatedCommitListVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RelatedCommitListVo::totalIsSet() const
{
    return totalIsSet_;
}

void RelatedCommitListVo::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RelatedCommitVo>& RelatedCommitListVo::getList()
{
    return list_;
}

void RelatedCommitListVo::setList(const std::vector<RelatedCommitVo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool RelatedCommitListVo::listIsSet() const
{
    return listIsSet_;
}

void RelatedCommitListVo::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


