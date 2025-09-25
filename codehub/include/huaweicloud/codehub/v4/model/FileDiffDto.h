
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_FileDiffDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_FileDiffDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  FileDiffDto
    : public ModelBase
{
public:
    FileDiffDto();
    virtual ~FileDiffDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FileDiffDto members

    /// <summary>
    /// **参数解释：** 旧文件名称。 **取值范围：** 字符串长度不少于1，不超过10000。
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 新文件名称。 **取值范围：** 字符串长度不少于1，不超过10000。
    /// </summary>

    Object getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const Object& value);

    /// <summary>
    /// **参数解释：** 旧文件权限。
    /// </summary>

    std::string getAMode() const;
    bool aModeIsSet() const;
    void unsetaMode();
    void setAMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 新文件权限。
    /// </summary>

    std::string getBMode() const;
    bool bModeIsSet() const;
    void unsetbMode();
    void setBMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为新文件。 **取值范围：** - true，新文件。 - false，非新文件
    /// </summary>

    bool isNewFile() const;
    bool newFileIsSet() const;
    void unsetnewFile();
    void setNewFile(bool value);

    /// <summary>
    /// **参数解释：** 是否为重命名文件。 **取值范围：** - true，重命名文件。 - false，非重命名文件
    /// </summary>

    bool isRenamedFile() const;
    bool renamedFileIsSet() const;
    void unsetrenamedFile();
    void setRenamedFile(bool value);

    /// <summary>
    /// **参数解释：** 是否为被删除文件。 **取值范围：** - true，被删除文件。 - false，非被删除文件
    /// </summary>

    bool isDeletedFile() const;
    bool deletedFileIsSet() const;
    void unsetdeletedFile();
    void setDeletedFile(bool value);

    /// <summary>
    /// **参数解释：** 差异信息。
    /// </summary>

    std::string getDiff() const;
    bool diffIsSet() const;
    void unsetdiff();
    void setDiff(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为大文件。 **取值范围：** - true，大文件。 - false，非大文件
    /// </summary>

    bool isTooLarge() const;
    bool tooLargeIsSet() const;
    void unsettooLarge();
    void setTooLarge(bool value);

    /// <summary>
    /// **参数解释：** 增加行数。
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// **参数解释：** 删除行数。
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);


protected:
    std::string oldPath_;
    bool oldPathIsSet_;
    Object newPath_;
    bool newPathIsSet_;
    std::string aMode_;
    bool aModeIsSet_;
    std::string bMode_;
    bool bModeIsSet_;
    bool newFile_;
    bool newFileIsSet_;
    bool renamedFile_;
    bool renamedFileIsSet_;
    bool deletedFile_;
    bool deletedFileIsSet_;
    std::string diff_;
    bool diffIsSet_;
    bool tooLarge_;
    bool tooLargeIsSet_;
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_FileDiffDto_H_
