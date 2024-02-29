
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFirewallListResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFirewallListResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/HttpFirewallInstanceListResponseData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListFirewallListResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFirewallListResponse();
    virtual ~ListFirewallListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFirewallListResponse members

    /// <summary>
    /// 是否支持eps
    /// </summary>

    bool isUserSupportEps() const;
    bool userSupportEpsIsSet() const;
    void unsetuserSupportEps();
    void setUserSupportEps(bool value);

    /// <summary>
    /// 是否存在ndr
    /// </summary>

    bool isHasNdr() const;
    bool hasNdrIsSet() const;
    void unsethasNdr();
    void setHasNdr(bool value);

    /// <summary>
    /// 是否支持按需购买
    /// </summary>

    bool isIsSupportPostpaid() const;
    bool isSupportPostpaidIsSet() const;
    void unsetisSupportPostpaid();
    void setIsSupportPostpaid(bool value);

    /// <summary>
    /// 是否支持基础版
    /// </summary>

    bool isIsSupportBasicVersion() const;
    bool isSupportBasicVersionIsSet() const;
    void unsetisSupportBasicVersion();
    void setIsSupportBasicVersion(bool value);

    /// <summary>
    /// 是否支持购买专业版
    /// </summary>

    bool isIsSupportBuyProfessional() const;
    bool isSupportBuyProfessionalIsSet() const;
    void unsetisSupportBuyProfessional();
    void setIsSupportBuyProfessional(bool value);

    /// <summary>
    /// 
    /// </summary>

    HttpFirewallInstanceListResponseData getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const HttpFirewallInstanceListResponseData& value);


protected:
    bool userSupportEps_;
    bool userSupportEpsIsSet_;
    bool hasNdr_;
    bool hasNdrIsSet_;
    bool isSupportPostpaid_;
    bool isSupportPostpaidIsSet_;
    bool isSupportBasicVersion_;
    bool isSupportBasicVersionIsSet_;
    bool isSupportBuyProfessional_;
    bool isSupportBuyProfessionalIsSet_;
    HttpFirewallInstanceListResponseData data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListFirewallListResponse_H_
