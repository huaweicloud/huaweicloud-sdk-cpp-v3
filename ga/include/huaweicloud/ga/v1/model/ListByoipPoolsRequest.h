
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListByoipPoolsRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListByoipPoolsRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListByoipPoolsRequest
    : public ModelBase
{
public:
    ListByoipPoolsRequest();
    virtual ~ListByoipPoolsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListByoipPoolsRequest members

    /// <summary>
    /// 分页查询每页的资源个数。如果不设置，则默认为500。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询的起始的资源ID，表示上一页最后一条查询资源记录的ID。不指定时表示查询第一页。 必须与limit一起使用。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListByoipPoolsRequest& dereference_from_shared_ptr(std::shared_ptr<ListByoipPoolsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListByoipPoolsRequest_H_
