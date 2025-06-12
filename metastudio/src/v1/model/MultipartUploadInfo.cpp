

#include "huaweicloud/metastudio/v1/model/MultipartUploadInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




MultipartUploadInfo::MultipartUploadInfo()
{
    partNumber_ = "";
    partNumberIsSet_ = false;
    etag_ = "";
    etagIsSet_ = false;
}

MultipartUploadInfo::~MultipartUploadInfo() = default;

void MultipartUploadInfo::validate()
{
}

web::json::value MultipartUploadInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(partNumberIsSet_) {
        val[utility::conversions::to_string_t("part_number")] = ModelBase::toJson(partNumber_);
    }
    if(etagIsSet_) {
        val[utility::conversions::to_string_t("etag")] = ModelBase::toJson(etag_);
    }

    return val;
}
bool MultipartUploadInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("part_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("part_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("etag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("etag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEtag(refVal);
        }
    }
    return ok;
}


std::string MultipartUploadInfo::getPartNumber() const
{
    return partNumber_;
}

void MultipartUploadInfo::setPartNumber(const std::string& value)
{
    partNumber_ = value;
    partNumberIsSet_ = true;
}

bool MultipartUploadInfo::partNumberIsSet() const
{
    return partNumberIsSet_;
}

void MultipartUploadInfo::unsetpartNumber()
{
    partNumberIsSet_ = false;
}

std::string MultipartUploadInfo::getEtag() const
{
    return etag_;
}

void MultipartUploadInfo::setEtag(const std::string& value)
{
    etag_ = value;
    etagIsSet_ = true;
}

bool MultipartUploadInfo::etagIsSet() const
{
    return etagIsSet_;
}

void MultipartUploadInfo::unsetetag()
{
    etagIsSet_ = false;
}

}
}
}
}
}


