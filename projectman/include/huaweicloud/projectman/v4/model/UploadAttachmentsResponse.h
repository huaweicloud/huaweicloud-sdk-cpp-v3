
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadAttachmentsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadAttachmentsResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UploadAttachmentsResponse
    : public ModelBase, public HttpResponse
{
public:
    UploadAttachmentsResponse();
    virtual ~UploadAttachmentsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadAttachmentsResponse members

    /// <summary>
    /// 关联id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 工作项id
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 云盘存贮名
    /// </summary>

    std::string getDiskFilename() const;
    bool diskFilenameIsSet() const;
    void unsetdiskFilename();
    void setDiskFilename(const std::string& value);

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件大小
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string diskFilename_;
    bool diskFilenameIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadAttachmentsResponse_H_
