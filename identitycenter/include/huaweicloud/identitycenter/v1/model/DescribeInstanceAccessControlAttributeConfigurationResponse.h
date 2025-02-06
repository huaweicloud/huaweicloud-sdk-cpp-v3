
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeInstanceAccessControlAttributeConfigurationResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeInstanceAccessControlAttributeConfigurationResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/InstanceAccessControlAttributeConfigurationDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DescribeInstanceAccessControlAttributeConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    DescribeInstanceAccessControlAttributeConfigurationResponse();
    virtual ~DescribeInstanceAccessControlAttributeConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribeInstanceAccessControlAttributeConfigurationResponse members

    /// <summary>
    /// 
    /// </summary>

    InstanceAccessControlAttributeConfigurationDto getInstanceAccessControlAttributeConfiguration() const;
    bool instanceAccessControlAttributeConfigurationIsSet() const;
    void unsetinstanceAccessControlAttributeConfiguration();
    void setInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfigurationDto& value);

    /// <summary>
    /// ABAC属性配置的状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 提供有关指定属性的当前状态的更多详细信息
    /// </summary>

    std::string getStatusReason() const;
    bool statusReasonIsSet() const;
    void unsetstatusReason();
    void setStatusReason(const std::string& value);


protected:
    InstanceAccessControlAttributeConfigurationDto instanceAccessControlAttributeConfiguration_;
    bool instanceAccessControlAttributeConfigurationIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusReason_;
    bool statusReasonIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeInstanceAccessControlAttributeConfigurationResponse_H_
