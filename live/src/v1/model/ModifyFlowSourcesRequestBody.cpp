

#include "huaweicloud/live/v1/model/ModifyFlowSourcesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowSourcesRequestBody::ModifyFlowSourcesRequestBody()
{
    sourceIsSet_ = false;
}

ModifyFlowSourcesRequestBody::~ModifyFlowSourcesRequestBody() = default;

void ModifyFlowSourcesRequestBody::validate()
{
}

web::json::value ModifyFlowSourcesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool ModifyFlowSourcesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            FlowSource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


FlowSource ModifyFlowSourcesRequestBody::getSource() const
{
    return source_;
}

void ModifyFlowSourcesRequestBody::setSource(const FlowSource& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ModifyFlowSourcesRequestBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void ModifyFlowSourcesRequestBody::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


