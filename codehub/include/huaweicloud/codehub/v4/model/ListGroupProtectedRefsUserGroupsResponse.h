
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupProtectedRefsUserGroupsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupProtectedRefsUserGroupsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ProtectedRefsUserGroupBasicDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListGroupProtectedRefsUserGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGroupProtectedRefsUserGroupsResponse();
    virtual ~ListGroupProtectedRefsUserGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupProtectedRefsUserGroupsResponse members

    /// <summary>
    /// 成员组列表
    /// </summary>

    std::vector<ProtectedRefsUserGroupBasicDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ProtectedRefsUserGroupBasicDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<ProtectedRefsUserGroupBasicDto> body_;
    bool bodyIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupProtectedRefsUserGroupsResponse_H_
