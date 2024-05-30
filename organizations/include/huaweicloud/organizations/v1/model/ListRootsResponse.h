
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListRootsResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListRootsResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/PageInfoDto.h>
#include <huaweicloud/organizations/v1/model/RootDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListRootsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRootsResponse();
    virtual ~ListRootsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRootsResponse members

    /// <summary>
    /// 在组织中定义的根列表。
    /// </summary>

    std::vector<RootDto>& getRoots();
    bool rootsIsSet() const;
    void unsetroots();
    void setRoots(const std::vector<RootDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<RootDto> roots_;
    bool rootsIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListRootsResponse_H_
