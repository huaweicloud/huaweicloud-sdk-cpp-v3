
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_OsExtend_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_OsExtend_H_

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
///  
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  OsExtend
    : public ModelBase
{
public:
    OsExtend();
    virtual ~OsExtend();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OsExtend members

    /// <summary>
    /// 扩容后的云硬盘大小，单位为GB。扩容的大小必须大于原有云硬盘容量且小于云硬盘最大容量。 云硬盘最大容量： * 数据盘：32768GB * 系统盘：1024GB
    /// </summary>

    int32_t getNewSize() const;
    bool newSizeIsSet() const;
    void unsetnewSize();
    void setNewSize(int32_t value);


protected:
    int32_t newSize_;
    bool newSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_OsExtend_H_
