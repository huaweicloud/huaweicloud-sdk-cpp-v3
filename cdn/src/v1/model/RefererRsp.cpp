

#include "huaweicloud/cdn/v1/model/RefererRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




RefererRsp::RefererRsp()
{
    refererType_ = 0;
    refererTypeIsSet_ = false;
    refererList_ = "";
    refererListIsSet_ = false;
    includeEmpty_ = false;
    includeEmptyIsSet_ = false;
}

RefererRsp::~RefererRsp() = default;

void RefererRsp::validate()
{
}

web::json::value RefererRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refererTypeIsSet_) {
        val[utility::conversions::to_string_t("referer_type")] = ModelBase::toJson(refererType_);
    }
    if(refererListIsSet_) {
        val[utility::conversions::to_string_t("referer_list")] = ModelBase::toJson(refererList_);
    }
    if(includeEmptyIsSet_) {
        val[utility::conversions::to_string_t("include_empty")] = ModelBase::toJson(includeEmpty_);
    }

    return val;
}

bool RefererRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("referer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefererType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referer_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefererList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_empty"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_empty"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeEmpty(refVal);
        }
    }
    return ok;
}

int32_t RefererRsp::getRefererType() const
{
    return refererType_;
}

void RefererRsp::setRefererType(int32_t value)
{
    refererType_ = value;
    refererTypeIsSet_ = true;
}

bool RefererRsp::refererTypeIsSet() const
{
    return refererTypeIsSet_;
}

void RefererRsp::unsetrefererType()
{
    refererTypeIsSet_ = false;
}

std::string RefererRsp::getRefererList() const
{
    return refererList_;
}

void RefererRsp::setRefererList(const std::string& value)
{
    refererList_ = value;
    refererListIsSet_ = true;
}

bool RefererRsp::refererListIsSet() const
{
    return refererListIsSet_;
}

void RefererRsp::unsetrefererList()
{
    refererListIsSet_ = false;
}

bool RefererRsp::isIncludeEmpty() const
{
    return includeEmpty_;
}

void RefererRsp::setIncludeEmpty(bool value)
{
    includeEmpty_ = value;
    includeEmptyIsSet_ = true;
}

bool RefererRsp::includeEmptyIsSet() const
{
    return includeEmptyIsSet_;
}

void RefererRsp::unsetincludeEmpty()
{
    includeEmptyIsSet_ = false;
}

}
}
}
}
}


