

#include "huaweicloud/modelarts/v1/model/CreateAssetFileDownLoadPathResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAssetFileDownLoadPathResponse::CreateAssetFileDownLoadPathResponse()
{
    signedurl_ = "";
    signedurlIsSet_ = false;
}

CreateAssetFileDownLoadPathResponse::~CreateAssetFileDownLoadPathResponse() = default;

void CreateAssetFileDownLoadPathResponse::validate()
{
}

web::json::value CreateAssetFileDownLoadPathResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(signedurlIsSet_) {
        val[utility::conversions::to_string_t("signedurl")] = ModelBase::toJson(signedurl_);
    }

    return val;
}
bool CreateAssetFileDownLoadPathResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("signedurl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signedurl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignedurl(refVal);
        }
    }
    return ok;
}


std::string CreateAssetFileDownLoadPathResponse::getSignedurl() const
{
    return signedurl_;
}

void CreateAssetFileDownLoadPathResponse::setSignedurl(const std::string& value)
{
    signedurl_ = value;
    signedurlIsSet_ = true;
}

bool CreateAssetFileDownLoadPathResponse::signedurlIsSet() const
{
    return signedurlIsSet_;
}

void CreateAssetFileDownLoadPathResponse::unsetsignedurl()
{
    signedurlIsSet_ = false;
}

}
}
}
}
}


