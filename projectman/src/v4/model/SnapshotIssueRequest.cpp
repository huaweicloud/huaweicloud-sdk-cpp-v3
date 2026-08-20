

#include "huaweicloud/projectman/v4/model/SnapshotIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SnapshotIssueRequest::SnapshotIssueRequest()
{
    idsIsSet_ = false;
    simpleResult_ = false;
    simpleResultIsSet_ = false;
}

SnapshotIssueRequest::~SnapshotIssueRequest() = default;

void SnapshotIssueRequest::validate()
{
}

web::json::value SnapshotIssueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(simpleResultIsSet_) {
        val[utility::conversions::to_string_t("simple_result")] = ModelBase::toJson(simpleResult_);
    }

    return val;
}
bool SnapshotIssueRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("simple_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("simple_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSimpleResult(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& SnapshotIssueRequest::getIds()
{
    return ids_;
}

void SnapshotIssueRequest::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool SnapshotIssueRequest::idsIsSet() const
{
    return idsIsSet_;
}

void SnapshotIssueRequest::unsetids()
{
    idsIsSet_ = false;
}

bool SnapshotIssueRequest::isSimpleResult() const
{
    return simpleResult_;
}

void SnapshotIssueRequest::setSimpleResult(bool value)
{
    simpleResult_ = value;
    simpleResultIsSet_ = true;
}

bool SnapshotIssueRequest::simpleResultIsSet() const
{
    return simpleResultIsSet_;
}

void SnapshotIssueRequest::unsetsimpleResult()
{
    simpleResultIsSet_ = false;
}

}
}
}
}
}


