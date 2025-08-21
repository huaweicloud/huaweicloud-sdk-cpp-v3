
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeAccountInfoResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeAccountInfoResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowBestPracticeAccountInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBestPracticeAccountInfoResponse();
    virtual ~ShowBestPracticeAccountInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBestPracticeAccountInfoResponse members

    /// <summary>
    /// 账号类型
    /// </summary>

    std::string getAccountType() const;
    bool accountTypeIsSet() const;
    void unsetaccountType();
    void setAccountType(const std::string& value);

    /// <summary>
    /// 有效开始时间
    /// </summary>

    utility::datetime getEffectiveStartTime() const;
    bool effectiveStartTimeIsSet() const;
    void unseteffectiveStartTime();
    void setEffectiveStartTime(const utility::datetime& value);

    /// <summary>
    /// 有效过期时间
    /// </summary>

    utility::datetime getEffectiveExpirationTime() const;
    bool effectiveExpirationTimeIsSet() const;
    void unseteffectiveExpirationTime();
    void setEffectiveExpirationTime(const utility::datetime& value);

    /// <summary>
    /// 当前时间
    /// </summary>

    utility::datetime getCurrentTime() const;
    bool currentTimeIsSet() const;
    void unsetcurrentTime();
    void setCurrentTime(const utility::datetime& value);


protected:
    std::string accountType_;
    bool accountTypeIsSet_;
    utility::datetime effectiveStartTime_;
    bool effectiveStartTimeIsSet_;
    utility::datetime effectiveExpirationTime_;
    bool effectiveExpirationTimeIsSet_;
    utility::datetime currentTime_;
    bool currentTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeAccountInfoResponse_H_
