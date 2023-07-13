
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListDomainProjectsResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListDomainProjectsResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/DomainProjectsInfo.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  ListDomainProjectsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainProjectsResponse();
    virtual ~ListDomainProjectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDomainProjectsResponse members

    /// <summary>
    /// 项目列表
    /// </summary>

    std::vector<DomainProjectsInfo>& getProjects();
    bool projectsIsSet() const;
    void unsetprojects();
    void setProjects(const std::vector<DomainProjectsInfo>& value);


protected:
    std::vector<DomainProjectsInfo> projects_;
    bool projectsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListDomainProjectsResponse_H_
