
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ObsInfo_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ObsInfo_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 转储桶信息。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ObsInfo
    : public ModelBase
{
public:
    ObsInfo();
    virtual ~ObsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ObsInfo members

    /// <summary>
    /// 标识OBS桶名称。由数字或字母开头，支持小写字母、数字、“-”、“.”，长度为3～63个字符。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 标识需要存储于OBS的日志文件前缀，0-9，a-z，A-Z，&#39;-&#39;，&#39;.&#39;，&#39;_&#39;长度为0～64字符。
    /// </summary>

    std::string getFilePrefixName() const;
    bool filePrefixNameIsSet() const;
    void unsetfilePrefixName();
    void setFilePrefixName(const std::string& value);

    /// <summary>
    /// 标识配置桶是否由追踪器自动创建。
    /// </summary>

    bool isIsObsCreated() const;
    bool isObsCreatedIsSet() const;
    void unsetisObsCreated();
    void setIsObsCreated(bool value);

    /// <summary>
    /// 标识配置桶是否已经授权给CTS服务账号。
    /// </summary>

    bool isIsAuthorizedBucket() const;
    bool isAuthorizedBucketIsSet() const;
    void unsetisAuthorizedBucket();
    void setIsAuthorizedBucket(bool value);

    /// <summary>
    /// 标识配置桶内对象存储周期。 当\&quot;tracker_type\&quot;参数值为\&quot;data\&quot;时该参数值有效。
    /// </summary>

    int64_t getBucketLifecycle() const;
    bool bucketLifecycleIsSet() const;
    void unsetbucketLifecycle();
    void setBucketLifecycle(int64_t value);

    /// <summary>
    /// 压缩类型。包括不压缩（json），压缩（gzip）两种状态。默认为gzip格式。
    /// </summary>

    std::string getCompressType() const;
    bool compressTypeIsSet() const;
    void unsetcompressType();
    void setCompressType(const std::string& value);

    /// <summary>
    /// 路径按云服务划分，打开后转储文件路径中将增加云服务名。默认为true。
    /// </summary>

    bool isIsSortByService() const;
    bool isSortByServiceIsSet() const;
    void unsetisSortByService();
    void setIsSortByService(bool value);


protected:
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string filePrefixName_;
    bool filePrefixNameIsSet_;
    bool isObsCreated_;
    bool isObsCreatedIsSet_;
    bool isAuthorizedBucket_;
    bool isAuthorizedBucketIsSet_;
    int64_t bucketLifecycle_;
    bool bucketLifecycleIsSet_;
    std::string compressType_;
    bool compressTypeIsSet_;
    bool isSortByService_;
    bool isSortByServiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ObsInfo_H_
