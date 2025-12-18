

#include "huaweicloud/meeting/v1/model/RestCancelSingleRecordCycleConfListReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestCancelSingleRecordCycleConfListReqBody::RestCancelSingleRecordCycleConfListReqBody()
{
    cycleSubConfIDsIsSet_ = false;
}

RestCancelSingleRecordCycleConfListReqBody::~RestCancelSingleRecordCycleConfListReqBody() = default;

void RestCancelSingleRecordCycleConfListReqBody::validate()
{
}

web::json::value RestCancelSingleRecordCycleConfListReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cycleSubConfIDsIsSet_) {
        val[utility::conversions::to_string_t("cycleSubConfIDs")] = ModelBase::toJson(cycleSubConfIDs_);
    }

    return val;
}
bool RestCancelSingleRecordCycleConfListReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cycleSubConfIDs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycleSubConfIDs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycleSubConfIDs(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RestCancelSingleRecordCycleConfListReqBody::getCycleSubConfIDs()
{
    return cycleSubConfIDs_;
}

void RestCancelSingleRecordCycleConfListReqBody::setCycleSubConfIDs(const std::vector<std::string>& value)
{
    cycleSubConfIDs_ = value;
    cycleSubConfIDsIsSet_ = true;
}

bool RestCancelSingleRecordCycleConfListReqBody::cycleSubConfIDsIsSet() const
{
    return cycleSubConfIDsIsSet_;
}

void RestCancelSingleRecordCycleConfListReqBody::unsetcycleSubConfIDs()
{
    cycleSubConfIDsIsSet_ = false;
}

}
}
}
}
}


