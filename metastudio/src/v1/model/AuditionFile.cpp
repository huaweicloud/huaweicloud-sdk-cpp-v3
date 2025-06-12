

#include "huaweicloud/metastudio/v1/model/AuditionFile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AuditionFile::AuditionFile()
{
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
}

AuditionFile::~AuditionFile() = default;

void AuditionFile::validate()
{
}

web::json::value AuditionFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("download_url")] = ModelBase::toJson(downloadUrl_);
    }

    return val;
}
bool AuditionFile::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    return ok;
}


std::string AuditionFile::getDownloadUrl() const
{
    return downloadUrl_;
}

void AuditionFile::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool AuditionFile::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void AuditionFile::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

}
}
}
}
}


