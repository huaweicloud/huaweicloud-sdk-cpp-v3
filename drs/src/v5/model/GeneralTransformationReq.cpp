

#include "huaweicloud/drs/v5/model/GeneralTransformationReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




GeneralTransformationReq::GeneralTransformationReq()
{
    filterObjectListIsSet_ = false;
    sourceFilterCondition_ = "";
    sourceFilterConditionIsSet_ = false;
}

GeneralTransformationReq::~GeneralTransformationReq() = default;

void GeneralTransformationReq::validate()
{
}

web::json::value GeneralTransformationReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterObjectListIsSet_) {
        val[utility::conversions::to_string_t("filter_object_list")] = ModelBase::toJson(filterObjectList_);
    }
    if(sourceFilterConditionIsSet_) {
        val[utility::conversions::to_string_t("source_filter_condition")] = ModelBase::toJson(sourceFilterCondition_);
    }

    return val;
}
bool GeneralTransformationReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter_object_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_object_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DataFilterObjectInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterObjectList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_filter_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_filter_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceFilterCondition(refVal);
        }
    }
    return ok;
}


std::vector<DataFilterObjectInfo>& GeneralTransformationReq::getFilterObjectList()
{
    return filterObjectList_;
}

void GeneralTransformationReq::setFilterObjectList(const std::vector<DataFilterObjectInfo>& value)
{
    filterObjectList_ = value;
    filterObjectListIsSet_ = true;
}

bool GeneralTransformationReq::filterObjectListIsSet() const
{
    return filterObjectListIsSet_;
}

void GeneralTransformationReq::unsetfilterObjectList()
{
    filterObjectListIsSet_ = false;
}

std::string GeneralTransformationReq::getSourceFilterCondition() const
{
    return sourceFilterCondition_;
}

void GeneralTransformationReq::setSourceFilterCondition(const std::string& value)
{
    sourceFilterCondition_ = value;
    sourceFilterConditionIsSet_ = true;
}

bool GeneralTransformationReq::sourceFilterConditionIsSet() const
{
    return sourceFilterConditionIsSet_;
}

void GeneralTransformationReq::unsetsourceFilterCondition()
{
    sourceFilterConditionIsSet_ = false;
}

}
}
}
}
}


