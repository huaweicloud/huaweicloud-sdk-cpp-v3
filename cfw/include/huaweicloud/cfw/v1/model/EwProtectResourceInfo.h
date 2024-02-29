
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EwProtectResourceInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EwProtectResourceInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 东西向防护的资源信息，例如VPC、VGW等
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EwProtectResourceInfo
    : public ModelBase
{
public:
    EwProtectResourceInfo();
    virtual ~EwProtectResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EwProtectResourceInfo members

    /// <summary>
    /// 防护资源类型：0 VPC，1 VGW
    /// </summary>

    int32_t getProtectedResourceType() const;
    bool protectedResourceTypeIsSet() const;
    void unsetprotectedResourceType();
    void setProtectedResourceType(int32_t value);

    /// <summary>
    /// 防护资源名称
    /// </summary>

    std::string getProtectedResourceName() const;
    bool protectedResourceNameIsSet() const;
    void unsetprotectedResourceName();
    void setProtectedResourceName(const std::string& value);

    /// <summary>
    /// 防护资源id
    /// </summary>

    std::string getProtectedResourceId() const;
    bool protectedResourceIdIsSet() const;
    void unsetprotectedResourceId();
    void setProtectedResourceId(const std::string& value);

    /// <summary>
    /// 防护资源nat网关名称
    /// </summary>

    std::string getProtectedResourceNatName() const;
    bool protectedResourceNatNameIsSet() const;
    void unsetprotectedResourceNatName();
    void setProtectedResourceNatName(const std::string& value);

    /// <summary>
    /// 防护资源nat网关id
    /// </summary>

    std::string getProtectedResourceNatId() const;
    bool protectedResourceNatIdIsSet() const;
    void unsetprotectedResourceNatId();
    void setProtectedResourceNatId(const std::string& value);

    /// <summary>
    /// 防护资源租户id
    /// </summary>

    std::string getProtectedResourceProjectId() const;
    bool protectedResourceProjectIdIsSet() const;
    void unsetprotectedResourceProjectId();
    void setProtectedResourceProjectId(const std::string& value);

    /// <summary>
    /// 防护资源模式
    /// </summary>

    std::string getProtectedResourceMode() const;
    bool protectedResourceModeIsSet() const;
    void unsetprotectedResourceMode();
    void setProtectedResourceMode(const std::string& value);

    /// <summary>
    /// 防护VPC的防护状态，0表示已关联，1表示未关联。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t protectedResourceType_;
    bool protectedResourceTypeIsSet_;
    std::string protectedResourceName_;
    bool protectedResourceNameIsSet_;
    std::string protectedResourceId_;
    bool protectedResourceIdIsSet_;
    std::string protectedResourceNatName_;
    bool protectedResourceNatNameIsSet_;
    std::string protectedResourceNatId_;
    bool protectedResourceNatIdIsSet_;
    std::string protectedResourceProjectId_;
    bool protectedResourceProjectIdIsSet_;
    std::string protectedResourceMode_;
    bool protectedResourceModeIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EwProtectResourceInfo_H_
