
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_InstanceMetadataEntryDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_InstanceMetadataEntryDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 提供关于IAM身份中心实例的信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  InstanceMetadataEntryDto
    : public ModelBase
{
public:
    InstanceMetadataEntryDto();
    virtual ~InstanceMetadataEntryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceMetadataEntryDto members

    /// <summary>
    /// 关联到IAM身份中心实例的身份源的全局唯一标识符（ID）
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// IAM身份中心实例的全局唯一标识符（ID）
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 用户为身份源标识符定义的别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 实例的统一资源名称（URN）
    /// </summary>

    std::string getInstanceUrn() const;
    bool instanceUrnIsSet() const;
    void unsetinstanceUrn();
    void setInstanceUrn(const std::string& value);


protected:
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::string instanceUrn_;
    bool instanceUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_InstanceMetadataEntryDto_H_
