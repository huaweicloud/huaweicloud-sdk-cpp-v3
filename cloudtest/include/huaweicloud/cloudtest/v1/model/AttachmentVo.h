
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AttachmentVo
    : public ModelBase
{
public:
    AttachmentVo();
    virtual ~AttachmentVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachmentVo members

    /// <summary>
    /// 附件Uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const std::string& value);

    /// <summary>
    /// 逻辑region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 文档id
    /// </summary>

    std::string getDocId() const;
    bool docIdIsSet() const;
    void unsetdocId();
    void setDocId(const std::string& value);

    /// <summary>
    /// 父节点Uri
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 父节点类型
    /// </summary>

    std::string getParentType() const;
    bool parentTypeIsSet() const;
    void unsetparentType();
    void setParentType(const std::string& value);

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 保存文件名
    /// </summary>

    std::string getStoreFileName() const;
    bool storeFileNameIsSet() const;
    void unsetstoreFileName();
    void setStoreFileName(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 文件大小
    /// </summary>

    int32_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int32_t value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 系统区分：docman或testman
    /// </summary>

    std::string getSystemType() const;
    bool systemTypeIsSet() const;
    void unsetsystemType();
    void setSystemType(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreateTimeTimestamp() const;
    bool createTimeTimestampIsSet() const;
    void unsetcreateTimeTimestamp();
    void setCreateTimeTimestamp(int64_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 更新时间时间戳
    /// </summary>

    int64_t getUpdateTimeTimestamp() const;
    bool updateTimeTimestampIsSet() const;
    void unsetupdateTimeTimestamp();
    void setUpdateTimeTimestamp(int64_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 附件类型 0 本地上传  other 关联文档
    /// </summary>

    std::string getRelatedType() const;
    bool relatedTypeIsSet() const;
    void unsetrelatedType();
    void setRelatedType(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string updator_;
    bool updatorIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string docId_;
    bool docIdIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string parentType_;
    bool parentTypeIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string storeFileName_;
    bool storeFileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    int32_t fileSize_;
    bool fileSizeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string systemType_;
    bool systemTypeIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    int64_t createTimeTimestamp_;
    bool createTimeTimestampIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeTimestamp_;
    bool updateTimeTimestampIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string relatedType_;
    bool relatedTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentVo_H_
