
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeGroupResp_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeGroupResp_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/identitycenterstore/v1/model/ExternalIdDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查看用户组详情返回体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  DescribeGroupResp
    : public ModelBase
{
public:
    DescribeGroupResp();
    virtual ~DescribeGroupResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribeGroupResp members

    /// <summary>
    /// 包含组描述的字符串
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 包含组显示名称的字符串
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 外部身份源分配给此资源的标识符
    /// </summary>

    std::string getExternalId() const;
    bool externalIdIsSet() const;
    void unsetexternalId();
    void setExternalId(const std::string& value);

    /// <summary>
    /// 包含外部身份提供商颁发给此资源的标识符的对象列表
    /// </summary>

    std::vector<ExternalIdDto>& getExternalIds();
    bool externalIdsIsSet() const;
    void unsetexternalIds();
    void setExternalIds(const std::vector<ExternalIdDto>& value);

    /// <summary>
    /// 身份源中IdentityCenter用户组的全局唯一标识符（ID）
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 身份源的全局唯一标识符（ID）
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// 创建时的时间戳
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// 创建者
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 更新时的时间戳
    /// </summary>

    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(int64_t value);

    /// <summary>
    /// 更新者
    /// </summary>

    std::string getUpdatedBy() const;
    bool updatedByIsSet() const;
    void unsetupdatedBy();
    void setUpdatedBy(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string externalId_;
    bool externalIdIsSet_;
    std::vector<ExternalIdDto> externalIds_;
    bool externalIdsIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    int64_t updatedAt_;
    bool updatedAtIsSet_;
    std::string updatedBy_;
    bool updatedByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeGroupResp_H_
