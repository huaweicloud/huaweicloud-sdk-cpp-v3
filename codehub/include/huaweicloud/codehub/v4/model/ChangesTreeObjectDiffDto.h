
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ChangesTreeObjectDiffDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ChangesTreeObjectDiffDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ChangesTreeObjectDiffDto
    : public ModelBase
{
public:
    ChangesTreeObjectDiffDto();
    virtual ~ChangesTreeObjectDiffDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangesTreeObjectDiffDto members

    /// <summary>
    /// **参数解释：** 变更内容。
    /// </summary>

    std::string getDiff() const;
    bool diffIsSet() const;
    void unsetdiff();
    void setDiff(const std::string& value);

    /// <summary>
    /// **参数解释：** 变更新路径。
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 变更旧。
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

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
    /// **参数解释：** 是否是新文件。
    /// </summary>

    bool isNewFile() const;
    bool newFileIsSet() const;
    void unsetnewFile();
    void setNewFile(bool value);

    /// <summary>
    /// **参数解释：** 是否是改名文件。
    /// </summary>

    bool isRenamedFile() const;
    bool renamedFileIsSet() const;
    void unsetrenamedFile();
    void setRenamedFile(bool value);

    /// <summary>
    /// **参数解释：** 是否是删除文件。
    /// </summary>

    bool isDeletedFile() const;
    bool deletedFileIsSet() const;
    void unsetdeletedFile();
    void setDeletedFile(bool value);

    /// <summary>
    /// **参数解释：** 是否内容过长。
    /// </summary>

    bool isTooLarge() const;
    bool tooLargeIsSet() const;
    void unsettooLarge();
    void setTooLarge(bool value);


protected:
    std::string diff_;
    bool diffIsSet_;
    std::string newPath_;
    bool newPathIsSet_;
    std::string oldPath_;
    bool oldPathIsSet_;
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
    bool tooLarge_;
    bool tooLargeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ChangesTreeObjectDiffDto_H_
