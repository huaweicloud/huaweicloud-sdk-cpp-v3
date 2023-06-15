
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMembersDetailResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMembersDetailResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Member.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  ShowMembersDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMembersDetailResponse();
    virtual ~ShowMembersDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowMembersDetailResponse members

    /// <summary>
    /// 添加备份共享成员响应信息
    /// </summary>

    std::vector<Member>& getMembers();
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(const std::vector<Member>& value);

    /// <summary>
    /// 备份共享成员数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<Member> members_;
    bool membersIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMembersDetailResponse_H_
