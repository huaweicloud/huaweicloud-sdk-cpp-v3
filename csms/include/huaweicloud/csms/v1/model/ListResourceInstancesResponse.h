
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/ActionResources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListResourceInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResourceInstancesResponse();
    virtual ~ListResourceInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceInstancesResponse members

    /// <summary>
    /// 资源实例列表，详情请参见resource字段数据结构说明。
    /// </summary>

    std::vector<ActionResources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ActionResources>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ActionResources> resources_;
    bool resourcesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesResponse_H_
