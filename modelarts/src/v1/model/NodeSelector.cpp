

#include "huaweicloud/modelarts/v1/model/NodeSelector.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeSelector::NodeSelector()
{
    nodeSelectorTermsIsSet_ = false;
}

NodeSelector::~NodeSelector() = default;

void NodeSelector::validate()
{
}

web::json::value NodeSelector::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeSelectorTermsIsSet_) {
        val[utility::conversions::to_string_t("nodeSelectorTerms")] = ModelBase::toJson(nodeSelectorTerms_);
    }

    return val;
}
bool NodeSelector::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeSelectorTerms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeSelectorTerms"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeSelectorTerm> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeSelectorTerms(refVal);
        }
    }
    return ok;
}


std::vector<NodeSelectorTerm>& NodeSelector::getNodeSelectorTerms()
{
    return nodeSelectorTerms_;
}

void NodeSelector::setNodeSelectorTerms(const std::vector<NodeSelectorTerm>& value)
{
    nodeSelectorTerms_ = value;
    nodeSelectorTermsIsSet_ = true;
}

bool NodeSelector::nodeSelectorTermsIsSet() const
{
    return nodeSelectorTermsIsSet_;
}

void NodeSelector::unsetnodeSelectorTerms()
{
    nodeSelectorTermsIsSet_ = false;
}

}
}
}
}
}


