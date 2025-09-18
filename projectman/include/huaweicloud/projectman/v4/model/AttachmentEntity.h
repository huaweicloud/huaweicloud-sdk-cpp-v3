
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachmentEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachmentEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/UserEntity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 附件对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AttachmentEntity
    : public ModelBase
{
public:
    AttachmentEntity();
    virtual ~AttachmentEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachmentEntity members

    /// <summary>
    /// 附件Id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 附件所属工作项Id
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 在服务器存储的相对路径
    /// </summary>

    std::string getDiskDirectory() const;
    bool diskDirectoryIsSet() const;
    void unsetdiskDirectory();
    void setDiskDirectory(const std::string& value);

    /// <summary>
    /// 附件大小，单位为Byte，单个附件最大为200MB
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// 附件原名称
    /// </summary>

    std::string getStoreFilename() const;
    bool storeFilenameIsSet() const;
    void unsetstoreFilename();
    void setStoreFilename(const std::string& value);

    /// <summary>
    /// 附件在数据库中存储的名称。格式为uuid+.扩展名
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserEntity& value);

    /// <summary>
    /// 附件类型，即文件扩展名
    /// </summary>

    std::string getAttachmentType() const;
    bool attachmentTypeIsSet() const;
    void unsetattachmentType();
    void setAttachmentType(const std::string& value);

    /// <summary>
    /// 附件上传时间的时间戳
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string diskDirectory_;
    bool diskDirectoryIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string storeFilename_;
    bool storeFilenameIsSet_;
    std::string title_;
    bool titleIsSet_;
    UserEntity modifiedBy_;
    bool modifiedByIsSet_;
    UserEntity createdBy_;
    bool createdByIsSet_;
    std::string attachmentType_;
    bool attachmentTypeIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachmentEntity_H_
