

#include "huaweicloud/lts/v2/model/Search_criteriasBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Search_criteriasBody::Search_criteriasBody()
{
    criteriasIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

Search_criteriasBody::~Search_criteriasBody() = default;

void Search_criteriasBody::validate()
{
}

web::json::value Search_criteriasBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criteriasIsSet_) {
        val[utility::conversions::to_string_t("criterias")] = ModelBase::toJson(criterias_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}
bool Search_criteriasBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("criterias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("criterias"));
        if(!fieldValue.is_null())
        {
            std::vector<GetQuerySearchCriteriasBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriterias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    return ok;
}


std::vector<GetQuerySearchCriteriasBody>& Search_criteriasBody::getCriterias()
{
    return criterias_;
}

void Search_criteriasBody::setCriterias(const std::vector<GetQuerySearchCriteriasBody>& value)
{
    criterias_ = value;
    criteriasIsSet_ = true;
}

bool Search_criteriasBody::criteriasIsSet() const
{
    return criteriasIsSet_;
}

void Search_criteriasBody::unsetcriterias()
{
    criteriasIsSet_ = false;
}

std::string Search_criteriasBody::getLogStreamId() const
{
    return logStreamId_;
}

void Search_criteriasBody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool Search_criteriasBody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void Search_criteriasBody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string Search_criteriasBody::getLogStreamName() const
{
    return logStreamName_;
}

void Search_criteriasBody::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool Search_criteriasBody::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void Search_criteriasBody::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


