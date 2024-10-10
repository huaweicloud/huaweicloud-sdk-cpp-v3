
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v5/model/BackupFileInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份文件信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BackupInfo
    : public ModelBase
{
public:
    BackupInfo();
    virtual ~BackupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupInfo members

    /// <summary>
    /// 备份文件来源：（全部大写） - OBS：存放在OBS中的备份文件。 - RDS：RDS实例的备份文件。
    /// </summary>

    std::string getFileSource() const;
    bool fileSourceIsSet() const;
    void unsetfileSource();
    void setFileSource(const std::string& value);

    /// <summary>
    /// OBS桶名称，使用OBS桶备份文件恢复时必填。 约束：长度范围为3～63个字符，仅支持小写字母、数字、中划线（-）、点（.），且只能以字母或数字开头和结尾，禁止使用IP地址。 如果选择从OBS桶获取备份文件必填，参考登录[客户端登录](https://support.huaweicloud.com/clientogw-obs/zh-cn_topic_0045829058.html)OBS Browser客户端，首页为OBS桶列表，可以获取到备份文件所在桶的名称。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 备份文件信息列表。
    /// </summary>

    std::vector<BackupFileInfo>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<BackupFileInfo>& value);


protected:
    std::string fileSource_;
    bool fileSourceIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::vector<BackupFileInfo> files_;
    bool filesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupInfo_H_
