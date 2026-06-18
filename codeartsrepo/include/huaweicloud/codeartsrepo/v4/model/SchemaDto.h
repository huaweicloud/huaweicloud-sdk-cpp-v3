
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SchemaDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SchemaDto_H_


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
/// **参数解释：** 代码导航功模式信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SchemaDto
    : public ModelBase
{
public:
    SchemaDto();
    virtual ~SchemaDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SchemaDto members

    /// <summary>
    /// **参数解释：** 代码导航版本。 **约束限制：** 不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 支持的最大文件大小。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getMaximumFileSize() const;
    bool maximumFileSizeIsSet() const;
    void unsetmaximumFileSize();
    void setMaximumFileSize(int32_t value);

    /// <summary>
    /// **参数解释：** 支持的最大行数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getMaximumLineLength() const;
    bool maximumLineLengthIsSet() const;
    void unsetmaximumLineLength();
    void setMaximumLineLength(int32_t value);

    /// <summary>
    /// **参数解释：** 每行支持的最大字符数，超过将截断。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getMaximumTruncateLine() const;
    bool maximumTruncateLineIsSet() const;
    void unsetmaximumTruncateLine();
    void setMaximumTruncateLine(int32_t value);

    /// <summary>
    /// **参数解释：** 索引创建时间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 索引更新时间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 索引重建时间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getRebuildAt() const;
    bool rebuildAtIsSet() const;
    void unsetrebuildAt();
    void setRebuildAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 索引最近构建时间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getLastBuildAt() const;
    bool lastBuildAtIsSet() const;
    void unsetlastBuildAt();
    void setLastBuildAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 索引构建次数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getBuildTimes() const;
    bool buildTimesIsSet() const;
    void unsetbuildTimes();
    void setBuildTimes(int32_t value);

    /// <summary>
    /// **参数解释：** 请求次数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getQueryTimes() const;
    bool queryTimesIsSet() const;
    void unsetqueryTimes();
    void setQueryTimes(int32_t value);

    /// <summary>
    /// **参数解释：** 索引大纲请求次数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getOutlineTimes() const;
    bool outlineTimesIsSet() const;
    void unsetoutlineTimes();
    void setOutlineTimes(int32_t value);


protected:
    std::string version_;
    bool versionIsSet_;
    int32_t maximumFileSize_;
    bool maximumFileSizeIsSet_;
    int32_t maximumLineLength_;
    bool maximumLineLengthIsSet_;
    int32_t maximumTruncateLine_;
    bool maximumTruncateLineIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string rebuildAt_;
    bool rebuildAtIsSet_;
    std::string lastBuildAt_;
    bool lastBuildAtIsSet_;
    int32_t buildTimes_;
    bool buildTimesIsSet_;
    int32_t queryTimes_;
    bool queryTimesIsSet_;
    int32_t outlineTimes_;
    bool outlineTimesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SchemaDto_H_
