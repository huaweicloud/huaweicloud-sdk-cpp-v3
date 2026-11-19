
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListTrustedKeySpaceResponseBody_keyspaces_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListTrustedKeySpaceResponseBody_keyspaces_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListTrustedKeySpaceResponseBody_keyspaces
    : public ModelBase
{
public:
    ListTrustedKeySpaceResponseBody_keyspaces();
    virtual ~ListTrustedKeySpaceResponseBody_keyspaces();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrustedKeySpaceResponseBody_keyspaces members

    /// <summary>
    /// **参数解释：** 密钥空间ID **取值范围：** 不涉及
    /// </summary>

    std::string getKeyspaceId() const;
    bool keyspaceIdIsSet() const;
    void unsetkeyspaceId();
    void setKeyspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间名称 **取值范围：** 不涉及
    /// </summary>

    std::string getKeyspaceName() const;
    bool keyspaceNameIsSet() const;
    void unsetkeyspaceName();
    void setKeyspaceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 企业项目ID **取值范围：** 不涉及
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间类型 **取值范围：** 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释：** 密钥空间状态 **取值范围：** 1：启用，2：冻结
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);

    /// <summary>
    /// **参数解释：** 密钥空间描述信息 **取值范围：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间创建人 **取值范围：** 不涉及
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间创建时间 **取值范围：** 不涉及
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间最近更新时间 **取值范围：** 不涉及
    /// </summary>

    std::string getLastModifyTime() const;
    bool lastModifyTimeIsSet() const;
    void unsetlastModifyTime();
    void setLastModifyTime(const std::string& value);


protected:
    std::string keyspaceId_;
    bool keyspaceIdIsSet_;
    std::string keyspaceName_;
    bool keyspaceNameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int32_t type_;
    bool typeIsSet_;
    int32_t state_;
    bool stateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastModifyTime_;
    bool lastModifyTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListTrustedKeySpaceResponseBody_keyspaces_H_
