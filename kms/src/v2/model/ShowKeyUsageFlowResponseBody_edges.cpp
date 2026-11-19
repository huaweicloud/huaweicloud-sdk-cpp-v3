

#include "huaweicloud/kms/v2/model/ShowKeyUsageFlowResponseBody_edges.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyUsageFlowResponseBody_edges::ShowKeyUsageFlowResponseBody_edges()
{
    source_ = "";
    sourceIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
}

ShowKeyUsageFlowResponseBody_edges::~ShowKeyUsageFlowResponseBody_edges() = default;

void ShowKeyUsageFlowResponseBody_edges::validate()
{
}

web::json::value ShowKeyUsageFlowResponseBody_edges::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }

    return val;
}
bool ShowKeyUsageFlowResponseBody_edges::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    return ok;
}


std::string ShowKeyUsageFlowResponseBody_edges::getSource() const
{
    return source_;
}

void ShowKeyUsageFlowResponseBody_edges::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ShowKeyUsageFlowResponseBody_edges::sourceIsSet() const
{
    return sourceIsSet_;
}

void ShowKeyUsageFlowResponseBody_edges::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ShowKeyUsageFlowResponseBody_edges::getTarget() const
{
    return target_;
}

void ShowKeyUsageFlowResponseBody_edges::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool ShowKeyUsageFlowResponseBody_edges::targetIsSet() const
{
    return targetIsSet_;
}

void ShowKeyUsageFlowResponseBody_edges::unsettarget()
{
    targetIsSet_ = false;
}

}
}
}
}
}


