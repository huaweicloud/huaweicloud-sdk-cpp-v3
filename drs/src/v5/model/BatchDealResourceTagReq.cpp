

#include "huaweicloud/drs/v5/model/BatchDealResourceTagReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchDealResourceTagReq::BatchDealResourceTagReq()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchDealResourceTagReq::~BatchDealResourceTagReq() = default;

void BatchDealResourceTagReq::validate()
{
}

web::json::value BatchDealResourceTagReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchDealResourceTagReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string BatchDealResourceTagReq::getAction() const
{
    return action_;
}

void BatchDealResourceTagReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDealResourceTagReq::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDealResourceTagReq::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<BatchResourceTag>& BatchDealResourceTagReq::getTags()
{
    return tags_;
}

void BatchDealResourceTagReq::setTags(const std::vector<BatchResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDealResourceTagReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDealResourceTagReq::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


