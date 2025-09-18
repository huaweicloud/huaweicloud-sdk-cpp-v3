
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAccessory_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAccessory_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueAccessory
    : public ModelBase
{
public:
    IssueAccessory();
    virtual ~IssueAccessory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueAccessory members

    /// <summary>
    /// 附件id
    /// </summary>

    int32_t getAttachmentId() const;
    bool attachmentIdIsSet() const;
    void unsetattachmentId();
    void setAttachmentId(int32_t value);

    /// <summary>
    /// 工作鞋ID
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 创建者数字ID
    /// </summary>

    int32_t getCreatorNumId() const;
    bool creatorNumIdIsSet() const;
    void unsetcreatorNumId();
    void setCreatorNumId(int32_t value);

    /// <summary>
    /// 附件创建时间
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 上传时文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 附件id
    /// </summary>

    std::string getContainerType() const;
    bool containerTypeIsSet() const;
    void unsetcontainerType();
    void setContainerType(const std::string& value);

    /// <summary>
    /// 附件名称
    /// </summary>

    std::string getDiskFileName() const;
    bool diskFileNameIsSet() const;
    void unsetdiskFileName();
    void setDiskFileName(const std::string& value);

    /// <summary>
    /// 附件id
    /// </summary>

    std::string getDigest() const;
    bool digestIsSet() const;
    void unsetdigest();
    void setDigest(const std::string& value);

    /// <summary>
    /// 附件路径
    /// </summary>

    std::string getDiskDirectory() const;
    bool diskDirectoryIsSet() const;
    void unsetdiskDirectory();
    void setDiskDirectory(const std::string& value);

    /// <summary>
    /// 创建这用户uuid
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);


protected:
    int32_t attachmentId_;
    bool attachmentIdIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    int32_t creatorNumId_;
    bool creatorNumIdIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string containerType_;
    bool containerTypeIsSet_;
    std::string diskFileName_;
    bool diskFileNameIsSet_;
    std::string digest_;
    bool digestIsSet_;
    std::string diskDirectory_;
    bool diskDirectoryIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAccessory_H_
