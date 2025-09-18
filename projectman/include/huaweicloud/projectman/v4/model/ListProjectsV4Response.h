
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ListProjectsV4ResponseBody_projects.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectsV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListProjectsV4Response();
    virtual ~ListProjectsV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectsV4Response members

    /// <summary>
    /// 项目信息列表
    /// </summary>

    std::vector<ListProjectsV4ResponseBody_projects>& getProjects();
    bool projectsIsSet() const;
    void unsetprojects();
    void setProjects(const std::vector<ListProjectsV4ResponseBody_projects>& value);

    /// <summary>
    /// 项目总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ListProjectsV4ResponseBody_projects> projects_;
    bool projectsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4Response_H_
