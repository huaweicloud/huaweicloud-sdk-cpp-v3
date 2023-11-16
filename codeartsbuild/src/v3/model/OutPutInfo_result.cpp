

#include "huaweicloud/codeartsbuild/v3/model/OutPutInfo_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




OutPutInfo_result::OutPutInfo_result()
{
    packageInfoIsSet_ = false;
    packageInfosIsSet_ = false;
    imageInfosIsSet_ = false;
}

OutPutInfo_result::~OutPutInfo_result() = default;

void OutPutInfo_result::validate()
{
}

web::json::value OutPutInfo_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageInfoIsSet_) {
        val[utility::conversions::to_string_t("package_info")] = ModelBase::toJson(packageInfo_);
    }
    if(packageInfosIsSet_) {
        val[utility::conversions::to_string_t("package_infos")] = ModelBase::toJson(packageInfos_);
    }
    if(imageInfosIsSet_) {
        val[utility::conversions::to_string_t("image_infos")] = ModelBase::toJson(imageInfos_);
    }

    return val;
}
bool OutPutInfo_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_info"));
        if(!fieldValue.is_null())
        {
            OutPutResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_infos"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, OutPutResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_infos"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, OutPutResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageInfos(refVal);
        }
    }
    return ok;
}


OutPutResult OutPutInfo_result::getPackageInfo() const
{
    return packageInfo_;
}

void OutPutInfo_result::setPackageInfo(const OutPutResult& value)
{
    packageInfo_ = value;
    packageInfoIsSet_ = true;
}

bool OutPutInfo_result::packageInfoIsSet() const
{
    return packageInfoIsSet_;
}

void OutPutInfo_result::unsetpackageInfo()
{
    packageInfoIsSet_ = false;
}

std::map<std::string, OutPutResult>& OutPutInfo_result::getPackageInfos()
{
    return packageInfos_;
}

void OutPutInfo_result::setPackageInfos(const std::map<std::string, OutPutResult>& value)
{
    packageInfos_ = value;
    packageInfosIsSet_ = true;
}

bool OutPutInfo_result::packageInfosIsSet() const
{
    return packageInfosIsSet_;
}

void OutPutInfo_result::unsetpackageInfos()
{
    packageInfosIsSet_ = false;
}

std::map<std::string, OutPutResult>& OutPutInfo_result::getImageInfos()
{
    return imageInfos_;
}

void OutPutInfo_result::setImageInfos(const std::map<std::string, OutPutResult>& value)
{
    imageInfos_ = value;
    imageInfosIsSet_ = true;
}

bool OutPutInfo_result::imageInfosIsSet() const
{
    return imageInfosIsSet_;
}

void OutPutInfo_result::unsetimageInfos()
{
    imageInfosIsSet_ = false;
}

}
}
}
}
}


