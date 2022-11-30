
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectionGroupsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectionGroupsResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowProtectionGroupParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectionGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProtectionGroupsResponse();
    virtual ~ListProtectionGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProtectionGroupsResponse members

    /// <summary>
    /// 保护组的信息列表。
    /// </summary>

    std::vector<ShowProtectionGroupParams>& getServerGroups();
    bool serverGroupsIsSet() const;
    void unsetserverGroups();
    void setServerGroups(const std::vector<ShowProtectionGroupParams>& value);

    /// <summary>
    /// 此参数为满足过滤条件的列表中包含的保护组个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ShowProtectionGroupParams> serverGroups_;
    bool serverGroupsIsSet_;
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectionGroupsResponse_H_
