

#include "huaweicloud/modelarts/v1/model/ShowAlgorithmByUuidRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAlgorithmByUuidRequest::ShowAlgorithmByUuidRequest()
{
    algorithmId_ = "";
    algorithmIdIsSet_ = false;
}

ShowAlgorithmByUuidRequest::~ShowAlgorithmByUuidRequest() = default;

void ShowAlgorithmByUuidRequest::validate()
{
}

web::json::value ShowAlgorithmByUuidRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmIdIsSet_) {
        val[utility::conversions::to_string_t("algorithm_id")] = ModelBase::toJson(algorithmId_);
    }

    return val;
}
bool ShowAlgorithmByUuidRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmId(refVal);
        }
    }
    return ok;
}


std::string ShowAlgorithmByUuidRequest::getAlgorithmId() const
{
    return algorithmId_;
}

void ShowAlgorithmByUuidRequest::setAlgorithmId(const std::string& value)
{
    algorithmId_ = value;
    algorithmIdIsSet_ = true;
}

bool ShowAlgorithmByUuidRequest::algorithmIdIsSet() const
{
    return algorithmIdIsSet_;
}

void ShowAlgorithmByUuidRequest::unsetalgorithmId()
{
    algorithmIdIsSet_ = false;
}

}
}
}
}
}


