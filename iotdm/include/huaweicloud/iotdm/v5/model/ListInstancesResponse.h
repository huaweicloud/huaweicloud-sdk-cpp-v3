
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstancesResponse_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstancesResponse_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/QueryInstanceSimplify.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  ListInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesResponse();
    virtual ~ListInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesResponse members

    /// <summary>
    /// **参数说明**：设备接入实例的总数。 
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数说明**：本次分页查询结果中最后一条记录的ID，可在下一次分页查询时使用。 
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// **参数说明**：设备接入实例的详情列表。 
    /// </summary>

    std::vector<QueryInstanceSimplify>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<QueryInstanceSimplify>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::vector<QueryInstanceSimplify> instances_;
    bool instancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstancesResponse_H_
