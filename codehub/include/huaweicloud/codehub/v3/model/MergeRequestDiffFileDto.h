
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestDiffFileDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestDiffFileDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v3/model/DiffRefsDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeRequestDiffFileDto
    : public ModelBase
{
public:
    MergeRequestDiffFileDto();
    virtual ~MergeRequestDiffFileDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestDiffFileDto members

    /// <summary>
    /// 合并请求head sha
    /// </summary>

    std::string getContentSha() const;
    bool contentShaIsSet() const;
    void unsetcontentSha();
    void setContentSha(const std::string& value);

    /// <summary>
    /// 是否为submodule
    /// </summary>

    bool isSubmodule() const;
    bool submoduleIsSet() const;
    void unsetsubmodule();
    void setSubmodule(bool value);

    /// <summary>
    /// 内容是否扩展
    /// </summary>

    bool isExpanded() const;
    bool expandedIsSet() const;
    void unsetexpanded();
    void setExpanded(bool value);

    /// <summary>
    /// 
    /// </summary>

    DiffRefsDto getDiffRefs() const;
    bool diffRefsIsSet() const;
    void unsetdiffRefs();
    void setDiffRefs(const DiffRefsDto& value);

    /// <summary>
    /// mode是否修改
    /// </summary>

    bool isModeChanged() const;
    bool modeChangedIsSet() const;
    void unsetmodeChanged();
    void setModeChanged(bool value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 旧路径
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// 新路径
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);

    /// <summary>
    /// 旧mode
    /// </summary>

    std::string getAMode() const;
    bool aModeIsSet() const;
    void unsetaMode();
    void setAMode(const std::string& value);

    /// <summary>
    /// 新mode
    /// </summary>

    std::string getBMode() const;
    bool bModeIsSet() const;
    void unsetbMode();
    void setBMode(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 是否为新增文件
    /// </summary>

    bool isNewFile() const;
    bool newFileIsSet() const;
    void unsetnewFile();
    void setNewFile(bool value);

    /// <summary>
    /// 是否为重命名文件
    /// </summary>

    bool isRenamedFile() const;
    bool renamedFileIsSet() const;
    void unsetrenamedFile();
    void setRenamedFile(bool value);

    /// <summary>
    /// 是否为删除文件
    /// </summary>

    bool isDeletedFile() const;
    bool deletedFileIsSet() const;
    void unsetdeletedFile();
    void setDeletedFile(bool value);

    /// <summary>
    /// 文件变更内容
    /// </summary>

    std::string getDiff() const;
    bool diffIsSet() const;
    void unsetdiff();
    void setDiff(const std::string& value);

    /// <summary>
    /// 是否为二进制文件
    /// </summary>

    bool isBinary() const;
    bool binaryIsSet() const;
    void unsetbinary();
    void setBinary(bool value);

    /// <summary>
    /// 是否过大
    /// </summary>

    bool isTooLarge() const;
    bool tooLargeIsSet() const;
    void unsettooLarge();
    void setTooLarge(bool value);

    /// <summary>
    /// 是否折叠
    /// </summary>

    bool isCollapsed() const;
    bool collapsedIsSet() const;
    void unsetcollapsed();
    void setCollapsed(bool value);

    /// <summary>
    /// 单个文件可取行数范围
    /// </summary>

    std::vector<int32_t>& getLineCount();
    bool lineCountIsSet() const;
    void unsetlineCount();
    void setLineCount(std::vector<int32_t> value);

    /// <summary>
    /// 新增行数
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// 删除行数
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);

    /// <summary>
    /// 文件blob_id
    /// </summary>

    std::string getBlobId() const;
    bool blobIdIsSet() const;
    void unsetblobId();
    void setBlobId(const std::string& value);


protected:
    std::string contentSha_;
    bool contentShaIsSet_;
    bool submodule_;
    bool submoduleIsSet_;
    bool expanded_;
    bool expandedIsSet_;
    DiffRefsDto diffRefs_;
    bool diffRefsIsSet_;
    bool modeChanged_;
    bool modeChangedIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string oldPath_;
    bool oldPathIsSet_;
    std::string newPath_;
    bool newPathIsSet_;
    std::string aMode_;
    bool aModeIsSet_;
    std::string bMode_;
    bool bModeIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    bool newFile_;
    bool newFileIsSet_;
    bool renamedFile_;
    bool renamedFileIsSet_;
    bool deletedFile_;
    bool deletedFileIsSet_;
    std::string diff_;
    bool diffIsSet_;
    bool binary_;
    bool binaryIsSet_;
    bool tooLarge_;
    bool tooLargeIsSet_;
    bool collapsed_;
    bool collapsedIsSet_;
    std::vector<int32_t> lineCount_;
    bool lineCountIsSet_;
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;
    std::string blobId_;
    bool blobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestDiffFileDto_H_
