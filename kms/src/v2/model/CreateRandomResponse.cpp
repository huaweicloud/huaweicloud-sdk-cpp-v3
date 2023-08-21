

#include "huaweicloud/kms/v2/model/CreateRandomResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateRandomResponse::CreateRandomResponse()
{
    randomData_ = "";
    randomDataIsSet_ = false;
}

CreateRandomResponse::~CreateRandomResponse() = default;

void CreateRandomResponse::validate()
{
}

web::json::value CreateRandomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(randomDataIsSet_) {
        val[utility::conversions::to_string_t("random_data")] = ModelBase::toJson(randomData_);
    }

    return val;
}

bool CreateRandomResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("random_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandomData(refVal);
        }
    }
    return ok;
}

std::string CreateRandomResponse::getRandomData() const
{
    return randomData_;
}

void CreateRandomResponse::setRandomData(const std::string& value)
{
    randomData_ = value;
    randomDataIsSet_ = true;
}

bool CreateRandomResponse::randomDataIsSet() const
{
    return randomDataIsSet_;
}

void CreateRandomResponse::unsetrandomData()
{
    randomDataIsSet_ = false;
}

}
}
}
}
}


