
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUsageInfosResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUsageInfosResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/UsageInfos.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListUsageInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUsageInfosResponse();
    virtual ~ListUsageInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUsageInfosResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<UsageInfos>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<UsageInfos>& value);


protected:
    std::vector<UsageInfos> value_;
    bool valueIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUsageInfosResponse_H_
