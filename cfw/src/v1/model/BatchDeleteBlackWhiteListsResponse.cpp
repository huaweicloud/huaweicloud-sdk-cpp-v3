

#include "huaweicloud/cfw/v1/model/BatchDeleteBlackWhiteListsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteBlackWhiteListsResponse::BatchDeleteBlackWhiteListsResponse()
{
    dataIsSet_ = false;
}

BatchDeleteBlackWhiteListsResponse::~BatchDeleteBlackWhiteListsResponse() = default;

void BatchDeleteBlackWhiteListsResponse::validate()
{
}

web::json::value BatchDeleteBlackWhiteListsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteBlackWhiteListsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteBlackWhiteListsResponse::getData()
{
    return data_;
}

void BatchDeleteBlackWhiteListsResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteBlackWhiteListsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteBlackWhiteListsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


