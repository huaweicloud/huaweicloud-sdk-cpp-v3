

#include "huaweicloud/metastudio/v1/model/ShowTrainingSegmentInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTrainingSegmentInfoResponse::ShowTrainingSegmentInfoResponse()
{
    confirmedIndexIsSet_ = false;
}

ShowTrainingSegmentInfoResponse::~ShowTrainingSegmentInfoResponse() = default;

void ShowTrainingSegmentInfoResponse::validate()
{
}

web::json::value ShowTrainingSegmentInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confirmedIndexIsSet_) {
        val[utility::conversions::to_string_t("confirmed_index")] = ModelBase::toJson(confirmedIndex_);
    }

    return val;
}
bool ShowTrainingSegmentInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confirmed_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confirmed_index"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfirmedIndex(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& ShowTrainingSegmentInfoResponse::getConfirmedIndex()
{
    return confirmedIndex_;
}

void ShowTrainingSegmentInfoResponse::setConfirmedIndex(std::vector<int32_t> value)
{
    confirmedIndex_ = value;
    confirmedIndexIsSet_ = true;
}

bool ShowTrainingSegmentInfoResponse::confirmedIndexIsSet() const
{
    return confirmedIndexIsSet_;
}

void ShowTrainingSegmentInfoResponse::unsetconfirmedIndex()
{
    confirmedIndexIsSet_ = false;
}

}
}
}
}
}


