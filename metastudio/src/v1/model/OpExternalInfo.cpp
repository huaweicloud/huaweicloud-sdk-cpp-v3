

#include "huaweicloud/metastudio/v1/model/OpExternalInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




OpExternalInfo::OpExternalInfo()
{
    reviewIdListIsSet_ = false;
}

OpExternalInfo::~OpExternalInfo() = default;

void OpExternalInfo::validate()
{
}

web::json::value OpExternalInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reviewIdListIsSet_) {
        val[utility::conversions::to_string_t("review_id_list")] = ModelBase::toJson(reviewIdList_);
    }

    return val;
}
bool OpExternalInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("review_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewIdList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& OpExternalInfo::getReviewIdList()
{
    return reviewIdList_;
}

void OpExternalInfo::setReviewIdList(const std::vector<std::string>& value)
{
    reviewIdList_ = value;
    reviewIdListIsSet_ = true;
}

bool OpExternalInfo::reviewIdListIsSet() const
{
    return reviewIdListIsSet_;
}

void OpExternalInfo::unsetreviewIdList()
{
    reviewIdListIsSet_ = false;
}

}
}
}
}
}


