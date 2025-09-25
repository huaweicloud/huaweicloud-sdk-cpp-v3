

#include "huaweicloud/codehub/v4/model/ShowActualHeadPipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowActualHeadPipelineResponse::ShowActualHeadPipelineResponse()
{
    dataIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
}

ShowActualHeadPipelineResponse::~ShowActualHeadPipelineResponse() = default;

void ShowActualHeadPipelineResponse::validate()
{
}

web::json::value ShowActualHeadPipelineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }

    return val;
}
bool ShowActualHeadPipelineResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            PipelineDetailDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    return ok;
}


PipelineDetailDto ShowActualHeadPipelineResponse::getData() const
{
    return data_;
}

void ShowActualHeadPipelineResponse::setData(const PipelineDetailDto& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowActualHeadPipelineResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowActualHeadPipelineResponse::unsetdata()
{
    dataIsSet_ = false;
}

bool ShowActualHeadPipelineResponse::isIsValid() const
{
    return isValid_;
}

void ShowActualHeadPipelineResponse::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool ShowActualHeadPipelineResponse::isValidIsSet() const
{
    return isValidIsSet_;
}

void ShowActualHeadPipelineResponse::unsetisValid()
{
    isValidIsSet_ = false;
}

}
}
}
}
}


