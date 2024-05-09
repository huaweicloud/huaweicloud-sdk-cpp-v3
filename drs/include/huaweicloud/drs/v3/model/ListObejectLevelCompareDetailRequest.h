
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareDetailRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareDetailRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListObejectLevelCompareDetailRequest
    : public ModelBase
{
public:
    ListObejectLevelCompareDetailRequest();
    virtual ~ListObejectLevelCompareDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListObejectLevelCompareDetailRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 对象类型： - DB：数据库。 - TABLE：表。 - VIEW：视图。 - EVENT：事件。 - ROUTINE：存储过程和函数。 - INDEX：索引。 - TRIGGER：触发器。 - SYNONYM：同义词。 - FUNCTION：函数。 - PROCEDURE：存储过程。 - TYPE：自定义类型。 - RULE：规则。 - DEFAULT_TYPE：缺省值。 - PLAN_GUIDE：执行计划。 - CONSTRAINT：约束。 - FILE_GROUP：文件组。 - PARTITION_FUNCTION：分区函数。 - PARTITION_SCHEME：分区方案。 - TABLE_COLLATION：表的排序规则。
    /// </summary>

    std::string getCompareType() const;
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::string& value);

    /// <summary>
    /// 对比任务ID，不填写时默认返回最新的对比任务信息。
    /// </summary>

    std::string getCompareJobId() const;
    bool compareJobIdIsSet() const;
    void unsetcompareJobId();
    void setCompareJobId(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量，最大值1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询， offset大于等于0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string compareType_;
    bool compareTypeIsSet_;
    std::string compareJobId_;
    bool compareJobIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListObejectLevelCompareDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListObejectLevelCompareDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareDetailRequest_H_
