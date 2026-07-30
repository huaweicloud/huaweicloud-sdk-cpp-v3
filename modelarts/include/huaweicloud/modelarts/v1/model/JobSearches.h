
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobSearches_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobSearches_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Filter.h>
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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobSearches
    : public ModelBase
{
public:
    JobSearches();
    virtual ~JobSearches();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobSearches members

    /// <summary>
    /// 查询作业的页数，最小为0。例如设置为0，则表示从第一页开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询作业的每页条目数。最小为1，最大为50。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询作业排列顺序的指标。默认使用create_time排序。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 查询作业排列顺序，默认为“desc”，降序排序。也可以选择对应的“asc”，升序排序。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 查询作业要搜索的分组条件。
    /// </summary>

    std::string getGroupBy() const;
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::string& value);

    /// <summary>
    /// 参数解释：工作空间ID。 约束限制：不涉及。 取值范围：0或长度为32的字符串。 默认取值：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：在开启自定义作业和精调作业联合查询时，只显示自定义或精调作业。 **约束限制**：不涉及。 **取值范围**：   - job: 只查自定义作业   - ftjob : 只查精调作业 **默认取值**：不涉及。
    /// </summary>

    std::string getTrainType() const;
    bool trainTypeIsSet() const;
    void unsettrainType();
    void setTrainType(const std::string& value);

    /// <summary>
    /// 查询作业要过滤的一系列条件。
    /// </summary>

    std::vector<Filter>& getFilters();
    bool filtersIsSet() const;
    void unsetfilters();
    void setFilters(const std::vector<Filter>& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string groupBy_;
    bool groupByIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string trainType_;
    bool trainTypeIsSet_;
    std::vector<Filter> filters_;
    bool filtersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobSearches_H_
