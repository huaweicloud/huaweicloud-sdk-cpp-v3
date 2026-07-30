
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAlgorithmsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAlgorithmsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAlgorithmsRequest
    : public ModelBase
{
public:
    ListAlgorithmsRequest();
    virtual ~ListAlgorithmsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAlgorithmsRequest members

    /// <summary>
    /// 查询算法的偏移量，最小为0。例如设置为1，则表示从第二条开始查。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询算法的限制量。最小为1，最大为50。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询算法排列顺序的指标。默认使用create_time排序。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 查询算法排列顺序，默认为“desc”，降序排序。也可以选择对应的“asc”，升序排序。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 查询算法要搜索的分组条件。
    /// </summary>

    std::string getGroupBy() const;
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::string& value);

    /// <summary>
    /// 查询算法所要过滤的条件，如算法名称模糊匹配。
    /// </summary>

    std::string getSearches() const;
    bool searchesIsSet() const;
    void unsetsearches();
    void setSearches(const std::string& value);

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);


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
    std::string searches_;
    bool searchesIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAlgorithmsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAlgorithmsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAlgorithmsRequest_H_
