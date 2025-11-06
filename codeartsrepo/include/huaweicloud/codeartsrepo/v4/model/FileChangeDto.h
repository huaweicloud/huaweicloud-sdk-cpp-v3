
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FileChangeDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FileChangeDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/DiffRefDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 文件变更详情
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  FileChangeDto
    : public ModelBase
{
public:
    FileChangeDto();
    virtual ~FileChangeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FileChangeDto members

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 变更文件源分支路径
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// 变更文件目标分支路径
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);

    /// <summary>
    /// 旧文件权限
    /// </summary>

    std::string getAMode() const;
    bool aModeIsSet() const;
    void unsetaMode();
    void setAMode(const std::string& value);

    /// <summary>
    /// 新文件权限
    /// </summary>

    std::string getBMode() const;
    bool bModeIsSet() const;
    void unsetbMode();
    void setBMode(const std::string& value);

    /// <summary>
    /// 文件权限是否变更
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
    /// 变更文件内容
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
    /// 是否为大文件
    /// </summary>

    bool isTooLarge() const;
    bool tooLargeIsSet() const;
    void unsettooLarge();
    void setTooLarge(bool value);

    /// <summary>
    /// 是否折叠文件
    /// </summary>

    bool isCollapsed() const;
    bool collapsedIsSet() const;
    void unsetcollapsed();
    void setCollapsed(bool value);

    /// <summary>
    /// 文件新增行
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// 文件删除行
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);

    /// <summary>
    /// 文件最新commitId
    /// </summary>

    std::string getContentSha() const;
    bool contentShaIsSet() const;
    void unsetcontentSha();
    void setContentSha(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DiffRefDto getDiffRefs() const;
    bool diffRefsIsSet() const;
    void unsetdiffRefs();
    void setDiffRefs(const DiffRefDto& value);


protected:
    std::string filePath_;
    bool filePathIsSet_;
    std::string oldPath_;
    bool oldPathIsSet_;
    std::string newPath_;
    bool newPathIsSet_;
    std::string aMode_;
    bool aModeIsSet_;
    std::string bMode_;
    bool bModeIsSet_;
    bool modeChanged_;
    bool modeChangedIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
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
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;
    std::string contentSha_;
    bool contentShaIsSet_;
    DiffRefDto diffRefs_;
    bool diffRefsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FileChangeDto_H_
