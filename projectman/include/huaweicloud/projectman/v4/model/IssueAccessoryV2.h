
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAccessoryV2_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAccessoryV2_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueAccessoryV2
    : public ModelBase
{
public:
    IssueAccessoryV2();
    virtual ~IssueAccessoryV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueAccessoryV2 members

    /// <summary>
    /// **参数解释：** 附件id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getAttachmentId() const;
    bool attachmentIdIsSet() const;
    void unsetattachmentId();
    void setAttachmentId(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项数字id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// **参数解释：** 附件的上传者数字ID。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCreatorNumId() const;
    bool creatorNumIdIsSet() const;
    void unsetcreatorNumId();
    void setCreatorNumId(int32_t value);

    /// <summary>
    /// **参数解释：** 附件创建时间（示例：2025-08-04 19:43:46）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 附件名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释：** 附件所属类型。 **取值范围：** scrum。
    /// </summary>

    std::string getContainerType() const;
    bool containerTypeIsSet() const;
    void unsetcontainerType();
    void setContainerType(const std::string& value);

    /// <summary>
    /// **参数解释：** 附件在服务器上实际名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDiskFileName() const;
    bool diskFileNameIsSet() const;
    void unsetdiskFileName();
    void setDiskFileName(const std::string& value);

    /// <summary>
    /// **参数解释：** 附件来源。 **取值范围：** 1：工作项本地上传的文档；2：关联的文档。
    /// </summary>

    std::string getDigest() const;
    bool digestIsSet() const;
    void unsetdigest();
    void setDigest(const std::string& value);

    /// <summary>
    /// **参数解释：** 附件在服务器上的路径。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDiskDirectory() const;
    bool diskDirectoryIsSet() const;
    void unsetdiskDirectory();
    void setDiskDirectory(const std::string& value);

    /// <summary>
    /// **参数解释：** 附件的上传者uuid。 **取值范围：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAccessoryV2_H_
