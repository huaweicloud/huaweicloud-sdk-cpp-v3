
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestDiffExternalDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestDiffExternalDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MergeRequestDiffExternalDto
    : public ModelBase
{
public:
    MergeRequestDiffExternalDto();
    virtual ~MergeRequestDiffExternalDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestDiffExternalDto members

    /// <summary>
    /// 合并请求diff id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 合并请求id
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// base commit节点
    /// </summary>

    std::string getBaseCommitSha() const;
    bool baseCommitShaIsSet() const;
    void unsetbaseCommitSha();
    void setBaseCommitSha(const std::string& value);

    /// <summary>
    /// diff文件数量
    /// </summary>

    std::string getRealSize() const;
    bool realSizeIsSet() const;
    void unsetrealSize();
    void setRealSize(const std::string& value);

    /// <summary>
    /// head commit节点
    /// </summary>

    std::string getHeadCommitSha() const;
    bool headCommitShaIsSet() const;
    void unsetheadCommitSha();
    void setHeadCommitSha(const std::string& value);

    /// <summary>
    /// start commit节点
    /// </summary>

    std::string getStartCommitSha() const;
    bool startCommitShaIsSet() const;
    void unsetstartCommitSha();
    void setStartCommitSha(const std::string& value);

    /// <summary>
    /// commit数量
    /// </summary>

    int32_t getCommitsCount() const;
    bool commitsCountIsSet() const;
    void unsetcommitsCount();
    void setCommitsCount(int32_t value);

    /// <summary>
    /// 外部diff文件
    /// </summary>

    std::string getExternalDiff() const;
    bool externalDiffIsSet() const;
    void unsetexternalDiff();
    void setExternalDiff(const std::string& value);

    /// <summary>
    /// 外部差异存储
    /// </summary>

    int32_t getExternalDiffStore() const;
    bool externalDiffStoreIsSet() const;
    void unsetexternalDiffStore();
    void setExternalDiffStore(int32_t value);

    /// <summary>
    /// 是否外部存储
    /// </summary>

    bool isStoredExternally() const;
    bool storedExternallyIsSet() const;
    void unsetstoredExternally();
    void setStoredExternally(bool value);

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


protected:
    int32_t id_;
    bool idIsSet_;
    std::string state_;
    bool stateIsSet_;
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string baseCommitSha_;
    bool baseCommitShaIsSet_;
    std::string realSize_;
    bool realSizeIsSet_;
    std::string headCommitSha_;
    bool headCommitShaIsSet_;
    std::string startCommitSha_;
    bool startCommitShaIsSet_;
    int32_t commitsCount_;
    bool commitsCountIsSet_;
    std::string externalDiff_;
    bool externalDiffIsSet_;
    int32_t externalDiffStore_;
    bool externalDiffStoreIsSet_;
    bool storedExternally_;
    bool storedExternallyIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestDiffExternalDto_H_
