
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachmentVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachmentVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AttachmentVO
    : public ModelBase
{
public:
    AttachmentVO();
    virtual ~AttachmentVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachmentVO members

    /// <summary>
    /// 附件类型
    /// </summary>

    std::string getAttachmentType() const;
    bool attachmentTypeIsSet() const;
    void unsetattachmentType();
    void setAttachmentType(const std::string& value);

    /// <summary>
    /// 创建人信息
    /// </summary>

    Object getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const Object& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 附件描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 存储路径
    /// </summary>

    std::string getDiskDirectory() const;
    bool diskDirectoryIsSet() const;
    void unsetdiskDirectory();
    void setDiskDirectory(const std::string& value);

    /// <summary>
    /// 文件大小
    /// </summary>

    std::string getFilesize() const;
    bool filesizeIsSet() const;
    void unsetfilesize();
    void setFilesize(const std::string& value);

    /// <summary>
    /// 文件id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 更新人信息
    /// </summary>

    Object getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const Object& value);

    /// <summary>
    /// 文件名称
    /// </summary>

    std::string getStoreFilename() const;
    bool storeFilenameIsSet() const;
    void unsetstoreFilename();
    void setStoreFilename(const std::string& value);

    /// <summary>
    /// 文件hash名称
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    std::string getWorkitemId() const;
    bool workitemIdIsSet() const;
    void unsetworkitemId();
    void setWorkitemId(const std::string& value);


protected:
    std::string attachmentType_;
    bool attachmentTypeIsSet_;
    Object createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string diskDirectory_;
    bool diskDirectoryIsSet_;
    std::string filesize_;
    bool filesizeIsSet_;
    std::string id_;
    bool idIsSet_;
    Object modifiedBy_;
    bool modifiedByIsSet_;
    std::string storeFilename_;
    bool storeFilenameIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string workitemId_;
    bool workitemIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachmentVO_H_
