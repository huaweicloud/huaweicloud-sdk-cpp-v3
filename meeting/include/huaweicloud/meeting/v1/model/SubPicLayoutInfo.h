
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SubPicLayoutInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SubPicLayoutInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SubPicLayoutInfo
    : public ModelBase
{
public:
    SubPicLayoutInfo();
    virtual ~SubPicLayoutInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubPicLayoutInfo members

    /// <summary>
    /// 多画面信息。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 子画面从左到右的索引。
    /// </summary>

    int32_t getLeft() const;
    bool leftIsSet() const;
    void unsetleft();
    void setLeft(int32_t value);

    /// <summary>
    /// 子画面从上到下的索引。
    /// </summary>

    int32_t getTop() const;
    bool topIsSet() const;
    void unsettop();
    void setTop(int32_t value);

    /// <summary>
    /// 子画面横向尺寸。
    /// </summary>

    int32_t getXSize() const;
    bool xSizeIsSet() const;
    void unsetxSize();
    void setXSize(int32_t value);

    /// <summary>
    /// 子画面横向尺寸。
    /// </summary>

    int32_t getYSize() const;
    bool ySizeIsSet() const;
    void unsetySize();
    void setYSize(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t left_;
    bool leftIsSet_;
    int32_t top_;
    bool topIsSet_;
    int32_t xSize_;
    bool xSizeIsSet_;
    int32_t ySize_;
    bool ySizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SubPicLayoutInfo_H_
