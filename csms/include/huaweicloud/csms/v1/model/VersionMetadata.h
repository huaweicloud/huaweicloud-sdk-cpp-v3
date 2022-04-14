
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_VersionMetadata_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_VersionMetadata_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 凭据版本被标记的状态。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  VersionMetadata
    : public ModelBase
{
public:
    VersionMetadata();
    virtual ~VersionMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VersionMetadata members

    /// <summary>
    /// 凭据的版本号标识符，凭据对象下唯一。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 凭据版本创建时间，时间戳，即从1970年1月1日至该时间的总秒数。 
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 加密版本凭据值的KMS主密钥ID。 
    /// </summary>

    std::string getKmsKeyId() const;
    bool kmsKeyIdIsSet() const;
    void unsetkmsKeyId();
    void setKmsKeyId(const std::string& value);

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 凭据版本被标记的状态列表。每个版本标签对于凭据对象下版本是唯一存在的，如果你创建版本时，指定的是同一凭据对象下的一个已经标记在其他版本上的状态，该标签将自动从其他版本上删除，并附加到此版本上。  如果未指定version_stage的值，则凭据管理服务会自动移动临时标签SYSCURRENT到此新版本。 
    /// </summary>

    std::vector<std::string>& getVersionStages();
    bool versionStagesIsSet() const;
    void unsetversionStages();
    void setVersionStages(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string kmsKeyId_;
    bool kmsKeyIdIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    std::vector<std::string> versionStages_;
    bool versionStagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_VersionMetadata_H_
