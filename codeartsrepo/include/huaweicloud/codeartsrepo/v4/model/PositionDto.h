
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PositionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PositionDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 检视意见位置详情。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  PositionDto
    : public ModelBase
{
public:
    PositionDto();
    virtual ~PositionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PositionDto members

    /// <summary>
    /// **参数解释：** 基础sha值。
    /// </summary>

    std::string getBaseSha() const;
    bool baseShaIsSet() const;
    void unsetbaseSha();
    void setBaseSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 起始sha值。
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 最新sha值。
    /// </summary>

    std::string getHeadSha() const;
    bool headShaIsSet() const;
    void unsetheadSha();
    void setHeadSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件旧路径。
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件新路径。
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件类型。
    /// </summary>

    std::string getPositionType() const;
    bool positionTypeIsSet() const;
    void unsetpositionType();
    void setPositionType(const std::string& value);

    /// <summary>
    /// **参数解释：** 旧文件行号。
    /// </summary>

    int32_t getOldLine() const;
    bool oldLineIsSet() const;
    void unsetoldLine();
    void setOldLine(int32_t value);

    /// <summary>
    /// **参数解释：** 新文件行号。
    /// </summary>

    int32_t getNewLine() const;
    bool newLineIsSet() const;
    void unsetnewLine();
    void setNewLine(int32_t value);


protected:
    std::string baseSha_;
    bool baseShaIsSet_;
    std::string startSha_;
    bool startShaIsSet_;
    std::string headSha_;
    bool headShaIsSet_;
    std::string oldPath_;
    bool oldPathIsSet_;
    std::string newPath_;
    bool newPathIsSet_;
    std::string positionType_;
    bool positionTypeIsSet_;
    int32_t oldLine_;
    bool oldLineIsSet_;
    int32_t newLine_;
    bool newLineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PositionDto_H_
