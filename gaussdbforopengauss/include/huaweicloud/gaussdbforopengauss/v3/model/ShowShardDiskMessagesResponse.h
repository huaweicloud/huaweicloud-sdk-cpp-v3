
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowShardDiskMessagesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowShardDiskMessagesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/GroupDiskInfoResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowShardDiskMessagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowShardDiskMessagesResponse();
    virtual ~ShowShardDiskMessagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowShardDiskMessagesResponse members

    /// <summary>
    /// **参数解释**： 分片磁盘信息列表。
    /// </summary>

    std::vector<GroupDiskInfoResult>& getGroupDiskInfos();
    bool groupDiskInfosIsSet() const;
    void unsetgroupDiskInfos();
    void setGroupDiskInfos(const std::vector<GroupDiskInfoResult>& value);


protected:
    std::vector<GroupDiskInfoResult> groupDiskInfos_;
    bool groupDiskInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowShardDiskMessagesResponse_H_
