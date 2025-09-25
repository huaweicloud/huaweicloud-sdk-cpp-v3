
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_AddRepositoryMembersResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_AddRepositoryMembersResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/BatchCreateRepositoryMemberDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  AddRepositoryMembersResponse
    : public ModelBase, public HttpResponse
{
public:
    AddRepositoryMembersResponse();
    virtual ~AddRepositoryMembersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddRepositoryMembersResponse members

    /// <summary>
    /// 批量创建成员响应
    /// </summary>

    std::vector<BatchCreateRepositoryMemberDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<BatchCreateRepositoryMemberDto>& value);


protected:
    std::vector<BatchCreateRepositoryMemberDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_AddRepositoryMembersResponse_H_
