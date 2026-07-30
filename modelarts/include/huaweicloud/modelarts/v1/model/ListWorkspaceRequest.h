
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkspaceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkspaceRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkspaceRequest
    : public ModelBase
{
public:
    ListWorkspaceRequest();
    virtual ~ListWorkspaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkspaceRequest members

    /// <summary>
    /// 分页列表的起始页，默认为&#39;0&#39;。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 指定每一页返回的最大条目数，默认为&#39;1000&#39;。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 指定排序字段，可选&#39;name&#39;、&#39;update_time&#39;、&#39;status&#39;，默认是&#39;name&#39;。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 可选值。&#39;asc&#39;为递增排序。&#39;desc&#39;为递减排序，默认为&#39;desc&#39;。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 企业项目id，指定此参数会只返回该企业项目id下的工作空间。默认显示所有工作空间。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 工作空间名称查询参数，指定此参数会模糊查询该名称的工作空间。默认显示所有工作空间。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 该参数用于筛选可访问的工作空间。指定该参数为true，则会筛选掉当前用户无权限访问的工作空间。该参数默认为false，即为显示所有工作空间。
    /// </summary>

    bool isFilterAccessible() const;
    bool filterAccessibleIsSet() const;
    void unsetfilterAccessible();
    void setFilterAccessible(bool value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool filterAccessible_;
    bool filterAccessibleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWorkspaceRequest& dereference_from_shared_ptr(std::shared_ptr<ListWorkspaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkspaceRequest_H_
