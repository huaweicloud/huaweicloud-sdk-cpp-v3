
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryDRInfoRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryDRInfoRequest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  QueryDRInfoRequest
    : public ModelBase
{
public:
    QueryDRInfoRequest();
    virtual ~QueryDRInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDRInfoRequest members

    /// <summary>
    /// 容灾关系id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 容灾搭建状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 灾备实例id
    /// </summary>

    std::string getMasterInstanceId() const;
    bool masterInstanceIdIsSet() const;
    void unsetmasterInstanceId();
    void setMasterInstanceId(const std::string& value);

    /// <summary>
    /// 主实例region
    /// </summary>

    std::string getMasterRegion() const;
    bool masterRegionIsSet() const;
    void unsetmasterRegion();
    void setMasterRegion(const std::string& value);

    /// <summary>
    /// 灾备实例id
    /// </summary>

    std::string getSlaveInstanceId() const;
    bool slaveInstanceIdIsSet() const;
    void unsetslaveInstanceId();
    void setSlaveInstanceId(const std::string& value);

    /// <summary>
    /// 灾备实例region
    /// </summary>

    std::string getSlaveRegion() const;
    bool slaveRegionIsSet() const;
    void unsetslaveRegion();
    void setSlaveRegion(const std::string& value);

    /// <summary>
    /// 创建起始时间
    /// </summary>

    int64_t getCreateAtStart() const;
    bool createAtStartIsSet() const;
    void unsetcreateAtStart();
    void setCreateAtStart(int64_t value);

    /// <summary>
    /// 创建结束时间
    /// </summary>

    int64_t getCreateAtEnd() const;
    bool createAtEndIsSet() const;
    void unsetcreateAtEnd();
    void setCreateAtEnd(int64_t value);

    /// <summary>
    /// 排序方式。 DESC，降序。 ASC，升序。 默认降序。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 排序字段。 status 容灾搭建状态。 time 容灾搭建时间。 master_region 主实例region。 slave_region 灾备实例region 默认容灾搭建时间。
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为10，不能为负数，最小值为1，最大值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string masterInstanceId_;
    bool masterInstanceIdIsSet_;
    std::string masterRegion_;
    bool masterRegionIsSet_;
    std::string slaveInstanceId_;
    bool slaveInstanceIdIsSet_;
    std::string slaveRegion_;
    bool slaveRegionIsSet_;
    int64_t createAtStart_;
    bool createAtStartIsSet_;
    int64_t createAtEnd_;
    bool createAtEndIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryDRInfoRequest_H_
