
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IsMemberInGroupsReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IsMemberInGroupsReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/identitycenterstore/v1/model/MemberIdDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 判断用户是否在用户组请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IsMemberInGroupsReqBody
    : public ModelBase
{
public:
    IsMemberInGroupsReqBody();
    virtual ~IsMemberInGroupsReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IsMemberInGroupsReqBody members

    /// <summary>
    /// 用户组标识符列表
    /// </summary>

    std::vector<std::string>& getGroupIds();
    bool groupIdsIsSet() const;
    void unsetgroupIds();
    void setGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    MemberIdDto getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const MemberIdDto& value);


protected:
    std::vector<std::string> groupIds_;
    bool groupIdsIsSet_;
    MemberIdDto memberId_;
    bool memberIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IsMemberInGroupsReqBody_H_
