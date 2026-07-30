
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAlgorithmsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAlgorithmsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgorithmResponse.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAlgorithmsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAlgorithmsResponse();
    virtual ~ListAlgorithmsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAlgorithmsResponse members

    /// <summary>
    /// 查询到当前用户名下的所有算法总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 查询到当前用户名下的所有符合查询条件的算法总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 查询到当前用户名下的所有算法限制个数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询作业的页数，最小为0。例如设置为0，则表示从第一页开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询到当前用户名下的所有算法排序依赖字段。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 查询到当前用户名下的所有算法排序方式，默认为“desc”，降序排序。也可以选择对应的“asc”，升序排序。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 查询到当前用户名下的所有算法分组方式。
    /// </summary>

    std::string getGroupBy() const;
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::string& value);

    /// <summary>
    /// 查询到当前用户名下的所有符合查询条件的算法详情。
    /// </summary>

    std::vector<AlgorithmResponse>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<AlgorithmResponse>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string groupBy_;
    bool groupByIsSet_;
    std::vector<AlgorithmResponse> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAlgorithmsResponse_H_
