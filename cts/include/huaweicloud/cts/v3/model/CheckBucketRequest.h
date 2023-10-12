
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckBucketRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckBucketRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  CheckBucketRequest
    : public ModelBase
{
public:
    CheckBucketRequest();
    virtual ~CheckBucketRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckBucketRequest members

    /// <summary>
    /// 标识OBS桶名称。由数字或字母开头，支持小写字母、数字、“-”、“.”，长度为3～63个字符。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 标识OBS桶位置。
    /// </summary>

    std::string getBucketLocation() const;
    bool bucketLocationIsSet() const;
    void unsetbucketLocation();
    void setBucketLocation(const std::string& value);

    /// <summary>
    /// 事件文件转储加密所采用的秘钥id，is_support_trace_files_encryption\&quot;参数值为“是”时，此参数为必选项。
    /// </summary>

    std::string getKmsId() const;
    bool kmsIdIsSet() const;
    void unsetkmsId();
    void setKmsId(const std::string& value);

    /// <summary>
    /// 事件文件转储加密功能开关。 该参数必须与kms_id参数同时使用。
    /// </summary>

    bool isIsSupportTraceFilesEncryption() const;
    bool isSupportTraceFilesEncryptionIsSet() const;
    void unsetisSupportTraceFilesEncryption();
    void setIsSupportTraceFilesEncryption(bool value);


protected:
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string bucketLocation_;
    bool bucketLocationIsSet_;
    std::string kmsId_;
    bool kmsIdIsSet_;
    bool isSupportTraceFilesEncryption_;
    bool isSupportTraceFilesEncryptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckBucketRequest_H_
