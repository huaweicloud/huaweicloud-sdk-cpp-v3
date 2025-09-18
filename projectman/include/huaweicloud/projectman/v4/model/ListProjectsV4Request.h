
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectsV4Request
    : public ModelBase
{
public:
    ListProjectsV4Request();
    virtual ~ListProjectsV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectsV4Request members

    /// <summary>
    /// 偏移量 从0开始
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 条数 最小1条,最大1000
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 模糊查询项目名称或描述,不支持通配符等高级查询
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// 项目类型 scrum|xboard
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// 排序条件 默认创建时间降序(name|created_on)(asc|desc)
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// 是否归档 true已归档|false未归档
    /// </summary>

    std::string getArchive() const;
    bool archiveIsSet() const;
    void unsetarchive();
    void setArchive(const std::string& value);

    /// <summary>
    /// 默认返回当前用户参与的项目列表,domain_projects租户下的所有项目列表,absent返回当前用户未参与的租户项目列表
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string archive_;
    bool archiveIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectsV4Request& dereference_from_shared_ptr(std::shared_ptr<ListProjectsV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4Request_H_
