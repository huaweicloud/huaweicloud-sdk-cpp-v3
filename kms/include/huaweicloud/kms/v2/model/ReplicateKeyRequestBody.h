
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ReplicateKeyRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ReplicateKeyRequestBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/TagItem.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_KMS_V2_EXPORT  ReplicateKeyRequestBody
    : public ModelBase
{
public:
    ReplicateKeyRequestBody();
    virtual ~ReplicateKeyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplicateKeyRequestBody members

    /// <summary>
    /// 待复制的密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 复制密钥的目的区域编码。如cn-north-4。
    /// </summary>

    std::string getReplicaRegion() const;
    bool replicaRegionIsSet() const;
    void unsetreplicaRegion();
    void setReplicaRegion(const std::string& value);

    /// <summary>
    /// 指定复制出的新密钥的别名。
    /// </summary>

    std::string getKeyAlias() const;
    bool keyAliasIsSet() const;
    void unsetkeyAlias();
    void setKeyAlias(const std::string& value);

    /// <summary>
    /// 指定复制出的新密钥的描述信息。
    /// </summary>

    std::string getKeyDescription() const;
    bool keyDescriptionIsSet() const;
    void unsetkeyDescription();
    void setKeyDescription(const std::string& value);

    /// <summary>
    /// 指定复制出的新密钥的企业多项目ID。 - 用户未开通企业多项目时，不需要输入该字段。 - 用户开通企业多项目时，创建资源可以输入该字段。若用户户不输入该字段，默认创建属于默认企业多项目ID（ID为“0”）的资源。 注意：若用户没有默认企业多项目ID（ID为“0”）下的创建权限，则接口报错。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 指定复制出的新密钥的项目ID。
    /// </summary>

    std::string getReplicaProjectId() const;
    bool replicaProjectIdIsSet() const;
    void unsetreplicaProjectId();
    void setReplicaProjectId(const std::string& value);

    /// <summary>
    /// 标签列表，key和value键值对的集合。
    /// </summary>

    std::vector<TagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagItem>& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string replicaRegion_;
    bool replicaRegionIsSet_;
    std::string keyAlias_;
    bool keyAliasIsSet_;
    std::string keyDescription_;
    bool keyDescriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string replicaProjectId_;
    bool replicaProjectIdIsSet_;
    std::vector<TagItem> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ReplicateKeyRequestBody_H_
