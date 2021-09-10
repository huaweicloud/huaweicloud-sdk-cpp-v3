
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaKeypairDetail_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaKeypairDetail_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
///  
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaKeypairDetail
    : public ModelBase
{
public:
    NovaKeypairDetail();
    virtual ~NovaKeypairDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaKeypairDetail members

    /// <summary>
    /// 密钥对应publicKey信息。
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// 密钥名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 密钥对应指纹信息。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// 密钥创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 密钥删除标记。   - true，表示密钥已被删除。   - false，表示密钥未被删除。
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// 密钥删除时间。
    /// </summary>

    utility::datetime getDeletedAt() const;
    bool deletedAtIsSet() const;
    void unsetdeletedAt();
    void setDeletedAt(const utility::datetime& value);

    /// <summary>
    /// 密钥ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 密钥更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 密钥所属用户信息。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 密钥类型，默认“ssh”  微版本2.2以上支持
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string fingerprint_;
    bool fingerprintIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    utility::datetime deletedAt_;
    bool deletedAtIsSet_;
    int32_t id_;
    bool idIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaKeypairDetail_H_
