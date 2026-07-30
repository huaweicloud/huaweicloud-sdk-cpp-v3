

#include "huaweicloud/modelarts/v1/model/NodesDeletionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodesDeletionRequest::NodesDeletionRequest()
{
    deleteNodeNamesIsSet_ = false;
}

NodesDeletionRequest::~NodesDeletionRequest() = default;

void NodesDeletionRequest::validate()
{
}

web::json::value NodesDeletionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteNodeNamesIsSet_) {
        val[utility::conversions::to_string_t("deleteNodeNames")] = ModelBase::toJson(deleteNodeNames_);
    }

    return val;
}
bool NodesDeletionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deleteNodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleteNodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteNodeNames(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& NodesDeletionRequest::getDeleteNodeNames()
{
    return deleteNodeNames_;
}

void NodesDeletionRequest::setDeleteNodeNames(const std::vector<std::string>& value)
{
    deleteNodeNames_ = value;
    deleteNodeNamesIsSet_ = true;
}

bool NodesDeletionRequest::deleteNodeNamesIsSet() const
{
    return deleteNodeNamesIsSet_;
}

void NodesDeletionRequest::unsetdeleteNodeNames()
{
    deleteNodeNamesIsSet_ = false;
}

}
}
}
}
}


