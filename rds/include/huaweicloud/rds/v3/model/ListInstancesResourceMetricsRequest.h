
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesResourceMetricsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesResourceMetricsRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesResourceMetricsRequest
    : public ModelBase
{
public:
    ListInstancesResourceMetricsRequest();
    virtual ~ListInstancesResourceMetricsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesResourceMetricsRequest members

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);

    /// <summary>
    /// 搜索字段
    /// </summary>

    std::string getSearchField() const;
    bool searchFieldIsSet() const;
    void unsetsearchField();
    void setSearchField(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询数据条数
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 排序方式
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);


protected:
    std::string engine_;
    bool engineIsSet_;
    std::string searchField_;
    bool searchFieldIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInstancesResourceMetricsRequest& dereference_from_shared_ptr(std::shared_ptr<ListInstancesResourceMetricsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesResourceMetricsRequest_H_
