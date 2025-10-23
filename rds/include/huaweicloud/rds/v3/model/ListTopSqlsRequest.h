
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTopSqlsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTopSqlsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListTopSqlsRequest
    : public ModelBase
{
public:
    ListTopSqlsRequest();
    virtual ~ListTopSqlsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopSqlsRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 排序字段: avg_cpu_time:平均CPU耗时 total_cpu_time：总CPU耗时 total_duration_time：总执行时间 avg_duration_time：平均执行时间 total_rows：总行数 avg_rows：平均行数 total_logical_reads：总逻辑读 avg_logical_reads：平均逻辑读
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// TOP 数量，最大支持15个。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 搜索文本内容。
    /// </summary>

    std::string getStatement() const;
    bool statementIsSet() const;
    void unsetstatement();
    void setStatement(const std::string& value);

    /// <summary>
    /// 排序规则： desc： 降序 asc: 升序
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string statement_;
    bool statementIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTopSqlsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTopSqlsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTopSqlsRequest_H_
