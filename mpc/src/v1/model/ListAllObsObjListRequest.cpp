

#include "huaweicloud/mpc/v1/model/ListAllObsObjListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListAllObsObjListRequest::ListAllObsObjListRequest()
{
    bucket_ = "";
    bucketIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListAllObsObjListRequest::~ListAllObsObjListRequest() = default;

void ListAllObsObjListRequest::validate()
{
}

web::json::value ListAllObsObjListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListAllObsObjListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListAllObsObjListRequest::getBucket() const
{
    return bucket_;
}

void ListAllObsObjListRequest::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ListAllObsObjListRequest::bucketIsSet() const
{
    return bucketIsSet_;
}

void ListAllObsObjListRequest::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ListAllObsObjListRequest::getPrefix() const
{
    return prefix_;
}

void ListAllObsObjListRequest::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool ListAllObsObjListRequest::prefixIsSet() const
{
    return prefixIsSet_;
}

void ListAllObsObjListRequest::unsetprefix()
{
    prefixIsSet_ = false;
}

std::string ListAllObsObjListRequest::getType() const
{
    return type_;
}

void ListAllObsObjListRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAllObsObjListRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAllObsObjListRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


