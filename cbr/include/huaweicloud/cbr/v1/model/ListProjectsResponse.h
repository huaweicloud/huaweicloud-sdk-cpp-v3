
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProjectsResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProjectsResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ProjectsListInfo.h>
#include <huaweicloud/cbr/v1/model/SelfLinksInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListProjectsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectsResponse();
    virtual ~ListProjectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectsResponse members

    /// <summary>
    /// 项目信息
    /// </summary>

    std::vector<ProjectsListInfo>& getProjects();
    bool projectsIsSet() const;
    void unsetprojects();
    void setProjects(const std::vector<ProjectsListInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    SelfLinksInfo getLinks() const;
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const SelfLinksInfo& value);


protected:
    std::vector<ProjectsListInfo> projects_;
    bool projectsIsSet_;
    SelfLinksInfo links_;
    bool linksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProjectsResponse_H_
