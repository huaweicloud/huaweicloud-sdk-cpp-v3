
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LogTreeDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LogTreeDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/RepositoryCommitDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 文件/文件夹信息
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  LogTreeDto
    : public ModelBase
{
public:
    LogTreeDto();
    virtual ~LogTreeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogTreeDto members

    /// <summary>
    /// **参数解释：** 文件名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近提交信息
    /// </summary>

    RepositoryCommitDto getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const RepositoryCommitDto& value);

    /// <summary>
    /// **参数解释：** 文件id
    /// </summary>

    std::string getBlobId() const;
    bool blobIdIsSet() const;
    void unsetblobId();
    void setBlobId(const std::string& value);

    /// <summary>
    /// **参数解释：** 子模块url地址
    /// </summary>

    std::string getSubmoduleUrl() const;
    bool submoduleUrlIsSet() const;
    void unsetsubmoduleUrl();
    void setSubmoduleUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件是否受限
    /// </summary>

    bool isIsLimited() const;
    bool isLimitedIsSet() const;
    void unsetisLimited();
    void setIsLimited(bool value);

    /// <summary>
    /// **参数解释：** 子模块链接
    /// </summary>

    std::string getSubmoduleLink() const;
    bool submoduleLinkIsSet() const;
    void unsetsubmoduleLink();
    void setSubmoduleLink(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件md5
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近提交作者昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名称
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string type_;
    bool typeIsSet_;
    RepositoryCommitDto commit_;
    bool commitIsSet_;
    std::string blobId_;
    bool blobIdIsSet_;
    std::string submoduleUrl_;
    bool submoduleUrlIsSet_;
    bool isLimited_;
    bool isLimitedIsSet_;
    std::string submoduleLink_;
    bool submoduleLinkIsSet_;
    std::string md5_;
    bool md5IsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LogTreeDto_H_
