
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplicationJobsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplicationJobsRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListReplicationJobsRequest
    : public ModelBase
{
public:
    ListReplicationJobsRequest();
    virtual ~ListReplicationJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplicationJobsRequest members

    /// <summary>
    /// 请求语言类型。 en-us：英文 zh-cn：中文
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务名称，支持模糊搜索。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份迁移任务状态。 TRANSFERRING：恢复中 SUCCESS：成功 FAILED：失败 PRECHECK FAILED：预检查失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库实例ID，最大数量为10。
    /// </summary>

    std::vector<std::string>& getDbsInstanceIds();
    bool dbsInstanceIdsIsSet() const;
    void unsetdbsInstanceIds();
    void setDbsInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 完成时间。
    /// </summary>

    std::string getCompletedAt() const;
    bool completedAtIsSet() const;
    void unsetcompletedAt();
    void setCompletedAt(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 标签。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 查询返回记录的数量限制，默认值为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，默认值为0，表示查询该偏移量后面的记录。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 排序字段。 取值：name，db_type，inst_id，ip，created_at，description，tag_value
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序方法。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> dbsInstanceIds_;
    bool dbsInstanceIdsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string completedAt_;
    bool completedAtIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListReplicationJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListReplicationJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplicationJobsRequest_H_
