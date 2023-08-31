
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAllAppRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAllAppRequestBody_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListAllAppRequestBody
    : public ModelBase
{
public:
    ListAllAppRequestBody();
    virtual ~ListAllAppRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAllAppRequestBody members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分页页码， 表示从此页开始查询， page大于等于1
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，size小于等于100
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 排序字段的名称，当前仅支持name和startTime
    /// </summary>

    std::string getSortName() const;
    bool sortNameIsSet() const;
    void unsetsortName();
    void setSortName(const std::string& value);

    /// <summary>
    /// 排序顺序，正序（ASC）或者逆序（DESC)
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string sortName_;
    bool sortNameIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAllAppRequestBody_H_
