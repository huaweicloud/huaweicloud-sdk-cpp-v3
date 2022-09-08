
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersRequest_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderListVolumeTransfersRequest
    : public ModelBase
{
public:
    CinderListVolumeTransfersRequest();
    virtual ~CinderListVolumeTransfersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListVolumeTransfersRequest members

    /// <summary>
    /// 返回结果个数限制，取值为大 于0的整数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，偏移量为一个大于0小 于云硬盘过户记录总个数的整 数，表示查询该偏移量后面的 所有的云硬盘过户记录
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderListVolumeTransfersRequest& dereference_from_shared_ptr(std::shared_ptr<CinderListVolumeTransfersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersRequest_H_
