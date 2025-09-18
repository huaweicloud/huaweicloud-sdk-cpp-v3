
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SearchIpdIssuesRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SearchIpdIssuesRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/PageInfoVO.h>
#include <string>
#include <huaweicloud/projectman/v4/model/SortInfo.h>
#include <map>
#include <huaweicloud/projectman/v4/model/ConditionVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  SearchIpdIssuesRequestBody
    : public ModelBase
{
public:
    SearchIpdIssuesRequestBody();
    virtual ~SearchIpdIssuesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchIpdIssuesRequestBody members

    /// <summary>
    /// 过滤条件
    /// </summary>

    std::vector<std::map<std::string, ConditionVO>>& getFilter();
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::vector<std::map<std::string, ConditionVO>>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoVO getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const PageInfoVO& value);

    /// <summary>
    /// 返回字段
    /// </summary>

    std::vector<std::string>& getReturnFields();
    bool returnFieldsIsSet() const;
    void unsetreturnFields();
    void setReturnFields(const std::vector<std::string>& value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::vector<SortInfo>& getSort();
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::vector<SortInfo>& value);


protected:
    std::vector<std::map<std::string, ConditionVO>> filter_;
    bool filterIsSet_;
    PageInfoVO page_;
    bool pageIsSet_;
    std::vector<std::string> returnFields_;
    bool returnFieldsIsSet_;
    std::vector<SortInfo> sort_;
    bool sortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SearchIpdIssuesRequestBody_H_
