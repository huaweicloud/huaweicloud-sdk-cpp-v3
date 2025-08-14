
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeUsersRequestBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeUsersRequestBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询用户信息请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  DescribeUsersRequestBody
    : public ModelBase
{
public:
    DescribeUsersRequestBody();
    virtual ~DescribeUsersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribeUsersRequestBody members

    /// <summary>
    /// 用户唯一标识符（ID）列表
    /// </summary>

    std::vector<std::string>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> userIds_;
    bool userIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeUsersRequestBody_H_
