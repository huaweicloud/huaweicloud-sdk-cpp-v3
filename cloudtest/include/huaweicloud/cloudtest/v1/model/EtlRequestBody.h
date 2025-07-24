
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_EtlRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_EtlRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  EtlRequestBody
    : public ModelBase
{
public:
    EtlRequestBody();
    virtual ~EtlRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EtlRequestBody members

    /// <summary>
    /// 分页偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 分页大小，最大值1000
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 需要同步的表名称
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 是否是bak表数据
    /// </summary>

    std::string getIsBak() const;
    bool isBakIsSet() const;
    void unsetisBak();
    void setIsBak(const std::string& value);

    /// <summary>
    /// 查询时间段起始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 查询时间段截止时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 用于时间段过滤的字段
    /// </summary>

    std::string getFilterTimeField() const;
    bool filterTimeFieldIsSet() const;
    void unsetfilterTimeField();
    void setFilterTimeField(const std::string& value);

    /// <summary>
    /// 用于时间排序的字段，不传默认按照更新时间排序
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 分库编号（数字类型）
    /// </summary>

    std::string getSchemaNo() const;
    bool schemaNoIsSet() const;
    void unsetschemaNo();
    void setSchemaNo(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string isBak_;
    bool isBakIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string filterTimeField_;
    bool filterTimeFieldIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string schemaNo_;
    bool schemaNoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_EtlRequestBody_H_
