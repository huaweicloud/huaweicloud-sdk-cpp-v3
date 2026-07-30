

#include "huaweicloud/modelarts/v1/model/ContentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ContentInfo::ContentInfo()
{
    versionNum_ = "";
    versionNumIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
}

ContentInfo::~ContentInfo() = default;

void ContentInfo::validate()
{
}

web::json::value ContentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionNumIsSet_) {
        val[utility::conversions::to_string_t("version_num")] = ModelBase::toJson(versionNum_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }

    return val;
}
bool ContentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
        }
    }
    return ok;
}


std::string ContentInfo::getVersionNum() const
{
    return versionNum_;
}

void ContentInfo::setVersionNum(const std::string& value)
{
    versionNum_ = value;
    versionNumIsSet_ = true;
}

bool ContentInfo::versionNumIsSet() const
{
    return versionNumIsSet_;
}

void ContentInfo::unsetversionNum()
{
    versionNumIsSet_ = false;
}

std::string ContentInfo::getDesc() const
{
    return desc_;
}

void ContentInfo::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ContentInfo::descIsSet() const
{
    return descIsSet_;
}

void ContentInfo::unsetdesc()
{
    descIsSet_ = false;
}

}
}
}
}
}


