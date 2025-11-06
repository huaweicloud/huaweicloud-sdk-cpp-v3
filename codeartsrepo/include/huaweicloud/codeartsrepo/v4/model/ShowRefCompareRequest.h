
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRefCompareRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRefCompareRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRefCompareRequest
    : public ModelBase
{
public:
    ShowRefCompareRequest();
    virtual ~ShowRefCompareRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRefCompareRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 要开始比较的分支名称、标签名称或者commitid。 **取值范围：** 字符串长度不少于1，不超过100000。
    /// </summary>

    std::string getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();
    void setFrom(const std::string& value);

    /// <summary>
    /// **参数解释：** 要停止比较的分支名称、标签名称或者commitid。 **取值范围：** 字符串长度不少于1，不超过100000。
    /// </summary>

    std::string getTo() const;
    bool toIsSet() const;
    void unsetto();
    void setTo(const std::string& value);

    /// <summary>
    /// **参数解释：** 对比类型。 **取值范围：** - branch，分支。 - commit，提交。 - tag，标签。
    /// </summary>

    std::string getCompareType() const;
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求的目标仓库，默认为仓库ID。
    /// </summary>

    int32_t getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(int32_t value);

    /// <summary>
    /// **参数解释：** 比较方法。 **取值范围：** - true，用于&#x60;from&#x60;和&#x60;to&#x60;之间的直接比较(&#x60;from&#x60;..&#x60;to&#x60;)。 - false，使用merge base进行比较(&#x60;from&#x60;...&#x60;to&#x60;)。
    /// </summary>

    bool isStraight() const;
    bool straightIsSet() const;
    void unsetstraight();
    void setStraight(bool value);

    /// <summary>
    /// **参数解释：** 是否忽略空白数量更改。 **取值范围：** - true，忽略空白数量的更改。 - false，不会忽略空白数量的更改。
    /// </summary>

    bool isIgnoreWhitespaceChange() const;
    bool ignoreWhitespaceChangeIsSet() const;
    void unsetignoreWhitespaceChange();
    void setIgnoreWhitespaceChange(bool value);

    /// <summary>
    /// **参数解释：** 是否忽略空白数量更改。 **取值范围：** - count，数量。 - commits，提交信息。 - diffs，差异信息。 - files，文件信息。 - commits,diffs，提交信息和差异信息。
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否仅返回带有提交计数和diffs计数的结果。 **取值范围：** - true，仅返回带有提交计数和diffs计数的结果。 - false，按照compare_view参数返回结果信息。
    /// </summary>

    bool isOnlyCount() const;
    bool onlyCountIsSet() const;
    void unsetonlyCount();
    void setOnlyCount(bool value);

    /// <summary>
    /// **参数解释：** 根据给定的文件路径返回不同的结果。如果文件已重命名，则file_path应包括old_path和new_path，如“file_path&#x3D;old_path,new_path”。 **取值范围：** 字符串长度不少于1，不超过100000。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 根据给定的参数返回不同的结果。 **取值范围：** - change_lines，变更行数。
    /// </summary>

    std::string getAdditionalFields() const;
    bool additionalFieldsIsSet() const;
    void unsetadditionalFields();
    void setAdditionalFields(const std::string& value);

    /// <summary>
    /// **参数解释：** 偏移量，从0开始。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 返回数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string from_;
    bool fromIsSet_;
    std::string to_;
    bool toIsSet_;
    std::string compareType_;
    bool compareTypeIsSet_;
    int32_t targetId_;
    bool targetIdIsSet_;
    bool straight_;
    bool straightIsSet_;
    bool ignoreWhitespaceChange_;
    bool ignoreWhitespaceChangeIsSet_;
    std::string view_;
    bool viewIsSet_;
    bool onlyCount_;
    bool onlyCountIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string additionalFields_;
    bool additionalFieldsIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRefCompareRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRefCompareRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRefCompareRequest_H_
