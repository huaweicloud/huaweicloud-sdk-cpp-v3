
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowFileResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowFileResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowFileResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFileResponse();
    virtual ~ShowFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFileResponse members

    /// <summary>
    /// 文件名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 文件大小
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 文件编码方式
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// 分支名称、tag名称或者commitid
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// 文件标识
    /// </summary>

    std::string getBlobId() const;
    bool blobIdIsSet() const;
    void unsetblobId();
    void setBlobId(const std::string& value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RepositoryCommitDto getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const RepositoryCommitDto& value);

    /// <summary>
    /// 文件内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件是否受限。 **取值范围：** - false, 不受限。 - true, 受限。
    /// </summary>

    bool isIsLimited() const;
    bool isLimitedIsSet() const;
    void unsetisLimited();
    void setIsLimited(bool value);

    /// <summary>
    /// sha256值
    /// </summary>

    std::string getContentSha256() const;
    bool contentSha256IsSet() const;
    void unsetcontentSha256();
    void setContentSha256(const std::string& value);

    /// <summary>
    /// 最新提交commitid
    /// </summary>

    std::string getLastCommitId() const;
    bool lastCommitIdIsSet() const;
    void unsetlastCommitId();
    void setLastCommitId(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 租户名称
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string path_;
    bool pathIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string blobId_;
    bool blobIdIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    RepositoryCommitDto commit_;
    bool commitIsSet_;
    std::string content_;
    bool contentIsSet_;
    bool isLimited_;
    bool isLimitedIsSet_;
    std::string contentSha256_;
    bool contentSha256IsSet_;
    std::string lastCommitId_;
    bool lastCommitIdIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowFileResponse_H_
