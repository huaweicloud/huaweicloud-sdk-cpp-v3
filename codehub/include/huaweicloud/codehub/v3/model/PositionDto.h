
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PositionDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PositionDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  PositionDto
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
    /// 源分支base提交节点
    /// </summary>

    std::string getBaseSha() const;
    bool baseShaIsSet() const;
    void unsetbaseSha();
    void setBaseSha(const std::string& value);

    /// <summary>
    /// 目标分支最新提交节点
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);

    /// <summary>
    /// 源分支最新提交节点
    /// </summary>

    std::string getHeadSha() const;
    bool headShaIsSet() const;
    void unsetheadSha();
    void setHeadSha(const std::string& value);

    /// <summary>
    /// 修改前文件路径
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// 修改后文件路径
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);

    /// <summary>
    /// 变更类型
    /// </summary>

    std::string getPositionType() const;
    bool positionTypeIsSet() const;
    void unsetpositionType();
    void setPositionType(const std::string& value);

    /// <summary>
    /// 修改前行号
    /// </summary>

    int32_t getOldLine() const;
    bool oldLineIsSet() const;
    void unsetoldLine();
    void setOldLine(int32_t value);

    /// <summary>
    /// 修改后行号
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PositionDto_H_
