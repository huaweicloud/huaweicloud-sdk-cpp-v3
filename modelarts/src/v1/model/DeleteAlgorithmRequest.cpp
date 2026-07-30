

#include "huaweicloud/modelarts/v1/model/DeleteAlgorithmRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteAlgorithmRequest::DeleteAlgorithmRequest()
{
    algorithmId_ = "";
    algorithmIdIsSet_ = false;
}

DeleteAlgorithmRequest::~DeleteAlgorithmRequest() = default;

void DeleteAlgorithmRequest::validate()
{
}

web::json::value DeleteAlgorithmRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmIdIsSet_) {
        val[utility::conversions::to_string_t("algorithm_id")] = ModelBase::toJson(algorithmId_);
    }

    return val;
}
bool DeleteAlgorithmRequest::fromJson(const web::json::value& val)
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


std::string DeleteAlgorithmRequest::getAlgorithmId() const
{
    return algorithmId_;
}

void DeleteAlgorithmRequest::setAlgorithmId(const std::string& value)
{
    algorithmId_ = value;
    algorithmIdIsSet_ = true;
}

bool DeleteAlgorithmRequest::algorithmIdIsSet() const
{
    return algorithmIdIsSet_;
}

void DeleteAlgorithmRequest::unsetalgorithmId()
{
    algorithmIdIsSet_ = false;
}

}
}
}
}
}


