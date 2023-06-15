

#include "huaweicloud/cbr/v1/model/OpExtendInfoRemoveResources.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoRemoveResources::OpExtendInfoRemoveResources()
{
    failCount_ = 0;
    failCountIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    resourcesIsSet_ = false;
}

OpExtendInfoRemoveResources::~OpExtendInfoRemoveResources() = default;

void OpExtendInfoRemoveResources::validate()
{
}

web::json::value OpExtendInfoRemoveResources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failCountIsSet_) {
        val[utility::conversions::to_string_t("fail_count")] = ModelBase::toJson(failCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool OpExtendInfoRemoveResources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<Resource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


int32_t OpExtendInfoRemoveResources::getFailCount() const
{
    return failCount_;
}

void OpExtendInfoRemoveResources::setFailCount(int32_t value)
{
    failCount_ = value;
    failCountIsSet_ = true;
}

bool OpExtendInfoRemoveResources::failCountIsSet() const
{
    return failCountIsSet_;
}

void OpExtendInfoRemoveResources::unsetfailCount()
{
    failCountIsSet_ = false;
}

int32_t OpExtendInfoRemoveResources::getTotalCount() const
{
    return totalCount_;
}

void OpExtendInfoRemoveResources::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool OpExtendInfoRemoveResources::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void OpExtendInfoRemoveResources::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<Resource>& OpExtendInfoRemoveResources::getResources()
{
    return resources_;
}

void OpExtendInfoRemoveResources::setResources(const std::vector<Resource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool OpExtendInfoRemoveResources::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void OpExtendInfoRemoveResources::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


