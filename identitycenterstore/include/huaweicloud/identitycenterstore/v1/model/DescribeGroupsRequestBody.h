
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeGroupsRequestBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeGroupsRequestBody_H_


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
/// 查询用户组信息请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  DescribeGroupsRequestBody
    : public ModelBase
{
public:
    DescribeGroupsRequestBody();
    virtual ~DescribeGroupsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribeGroupsRequestBody members

    /// <summary>
    /// 用户组唯一标识符（ID）列表
    /// </summary>

    std::vector<std::string>& getGroupIds();
    bool groupIdsIsSet() const;
    void unsetgroupIds();
    void setGroupIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> groupIds_;
    bool groupIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribeGroupsRequestBody_H_
