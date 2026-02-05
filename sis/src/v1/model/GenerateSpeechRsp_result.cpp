

#include "huaweicloud/sis/v1/model/GenerateSpeechRsp_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




GenerateSpeechRsp_result::GenerateSpeechRsp_result()
{
    data_ = "";
    dataIsSet_ = false;
}

GenerateSpeechRsp_result::~GenerateSpeechRsp_result() = default;

void GenerateSpeechRsp_result::validate()
{
}

web::json::value GenerateSpeechRsp_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool GenerateSpeechRsp_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string GenerateSpeechRsp_result::getData() const
{
    return data_;
}

void GenerateSpeechRsp_result::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool GenerateSpeechRsp_result::dataIsSet() const
{
    return dataIsSet_;
}

void GenerateSpeechRsp_result::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


